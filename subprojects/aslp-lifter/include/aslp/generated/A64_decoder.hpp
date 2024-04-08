/* AUTO-GENERATED LIFTER FILE */

#pragma once
#include <cassert>
#include <tuple>
#include <variant>
#include <vector>
#include <stdexcept>
#include <aslp/interface.hpp>
#include <aslp/generated/aslp_lifter.hpp>
#include <aslp/generated/decode_tests.hpp>

namespace aslp {

template <typename Traits>
void aslp_lifter<Traits>::f_A64_decoder(typename Traits::bits v_enc) {
  if ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("24"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11110")), iface.bits_lit(5U, "00000"))) && (true))) {
    if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000000000"))) && (true)))) {
      if (f_aarch64_udf_decode_test(v_enc)) {
        f_aarch64_udf(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((true) && ((true) && ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000000000")))) && (true)))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "000")))) && ((true) && ((true) && (true)))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } // if
  } else if ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("24"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "00011"))) && (true))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else if ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("24"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11110")), iface.bits_lit(5U, "00100"))) && (true))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else if ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("24"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11110")), iface.bits_lit(5U, "00110"))) && (true))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else if ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("24"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11100")), iface.bits_lit(5U, "10000"))) && (true))) {
    if ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110")), iface.bits_lit(3U, "000"))) && (true)))) {
      const auto v_op = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      if ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_arithmetic_address_pc_rel_decode_test(v_enc))) {
        f_aarch64_integer_arithmetic_address_pc_rel(v_enc);
      } else if ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && (f_aarch64_integer_arithmetic_address_pc_rel_decode_test(v_enc))) {
        f_aarch64_integer_arithmetic_address_pc_rel(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((true) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "010"))) && (true)))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_op = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_arithmetic_add_sub_immediate_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_add_sub_immediate(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (f_aarch64_integer_arithmetic_add_sub_immediate_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_add_sub_immediate(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_arithmetic_add_sub_immediate_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_add_sub_immediate(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (f_aarch64_integer_arithmetic_add_sub_immediate_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_add_sub_immediate(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_arithmetic_add_sub_immediate_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_add_sub_immediate(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (f_aarch64_integer_arithmetic_add_sub_immediate_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_add_sub_immediate(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_arithmetic_add_sub_immediate_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_add_sub_immediate(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (f_aarch64_integer_arithmetic_add_sub_immediate_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_add_sub_immediate(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((true) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011"))) && (true)))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_op = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_o2 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1"));
      if ((true) && ((true) && ((true) && (iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((true) && ((true) && (iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_tags_mcaddtag_decode_test(v_enc)))))) {
        f_aarch64_integer_tags_mcaddtag(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_tags_mcsubtag_decode_test(v_enc)))))) {
        f_aarch64_integer_tags_mcsubtag(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((true) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) && (true)))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opc = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("2"));
      const auto v_N = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1"));
      if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(v_N, iface.bits_lit(1U, "1"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_logical_immediate_decode_test(v_enc))))) {
        f_aarch64_integer_logical_immediate(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_logical_immediate_decode_test(v_enc))))) {
        f_aarch64_integer_logical_immediate(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_logical_immediate_decode_test(v_enc))))) {
        f_aarch64_integer_logical_immediate(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_logical_immediate_decode_test(v_enc))))) {
        f_aarch64_integer_logical_immediate(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((true) && (f_aarch64_integer_logical_immediate_decode_test(v_enc))))) {
        f_aarch64_integer_logical_immediate(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((true) && (f_aarch64_integer_logical_immediate_decode_test(v_enc))))) {
        f_aarch64_integer_logical_immediate(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((true) && (f_aarch64_integer_logical_immediate_decode_test(v_enc))))) {
        f_aarch64_integer_logical_immediate(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((true) && (f_aarch64_integer_logical_immediate_decode_test(v_enc))))) {
        f_aarch64_integer_logical_immediate(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((true) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) && (true)))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opc = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("2"));
      const auto v_hw = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("2"));
      if ((true) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_hw, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(v_hw, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (f_aarch64_integer_ins_ext_insert_movewide_decode_test(v_enc))))) {
        f_aarch64_integer_ins_ext_insert_movewide(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(iface.f_and_bits(v_hw, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (f_aarch64_integer_ins_ext_insert_movewide_decode_test(v_enc))))) {
        f_aarch64_integer_ins_ext_insert_movewide(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(iface.f_and_bits(v_hw, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (f_aarch64_integer_ins_ext_insert_movewide_decode_test(v_enc))))) {
        f_aarch64_integer_ins_ext_insert_movewide(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((true) && (f_aarch64_integer_ins_ext_insert_movewide_decode_test(v_enc))))) {
        f_aarch64_integer_ins_ext_insert_movewide(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((true) && (f_aarch64_integer_ins_ext_insert_movewide_decode_test(v_enc))))) {
        f_aarch64_integer_ins_ext_insert_movewide(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((true) && (f_aarch64_integer_ins_ext_insert_movewide_decode_test(v_enc))))) {
        f_aarch64_integer_ins_ext_insert_movewide(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((true) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) && (true)))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opc = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("2"));
      const auto v_N = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1"));
      if ((true) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(v_N, iface.bits_lit(1U, "1"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_bitfield_decode_test(v_enc))))) {
        f_aarch64_integer_bitfield(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_bitfield_decode_test(v_enc))))) {
        f_aarch64_integer_bitfield(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_bitfield_decode_test(v_enc))))) {
        f_aarch64_integer_bitfield(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_N, iface.bits_lit(1U, "0"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "1"))) && (f_aarch64_integer_bitfield_decode_test(v_enc))))) {
        f_aarch64_integer_bitfield(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "1"))) && (f_aarch64_integer_bitfield_decode_test(v_enc))))) {
        f_aarch64_integer_bitfield(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "1"))) && (f_aarch64_integer_bitfield_decode_test(v_enc))))) {
        f_aarch64_integer_bitfield(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((true) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) && (true)))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_op21 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("2"));
      const auto v_N = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1"));
      const auto v_o0 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1"));
      const auto v_imms = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6"));
      if ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_op21, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))) && ((true) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_op21, iface.bits_lit(2U, "00"))) && ((true) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_op21, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((true) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((true) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_imms, iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "100000"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "1"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op21, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_imms, iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "000000"))) && (f_aarch64_integer_ins_ext_extract_immediate_decode_test(v_enc))))))) {
        f_aarch64_integer_ins_ext_extract_immediate(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "0"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op21, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_integer_ins_ext_extract_immediate_decode_test(v_enc))))))) {
        f_aarch64_integer_ins_ext_extract_immediate(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } // if
  } else if ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("24"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11100")), iface.bits_lit(5U, "10100"))) && (true))) {
    if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "010"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("14")), iface.bits_lit(14U, "10000000000000")), iface.bits_lit(14U, "00000000000000"))) && ((true) && (true))))) {
      const auto v_o1 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("24"), /*wd*/ iface.bigint_lit("1"));
      const auto v_o0 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("4"), /*wd*/ iface.bigint_lit("1"));
      if ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && (f_aarch64_branch_conditional_cond_decode_test(v_enc)))) {
        f_aarch64_branch_conditional_cond(v_enc);
      } else if ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && (true)) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("14")), iface.bits_lit(14U, "11000000000000")), iface.bits_lit(14U, "00000000000000"))) && ((true) && (true))))) {
      const auto v_opc = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("3"));
      const auto v_op2 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("2"), /*wd*/ iface.bigint_lit("3"));
      const auto v_LL = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("2"));
      if ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "001"))) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_op2, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "010"))) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_op2, iface.bits_lit(3U, "100")), iface.bits_lit(3U, "100"))) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && (iface.f_eq_bits(v_LL, iface.bits_lit(2U, "00"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && ((iface.f_eq_bits(v_LL, iface.bits_lit(2U, "01"))) && (f_aarch64_system_exceptions_runtime_svc_decode_test(v_enc))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && ((iface.f_eq_bits(v_LL, iface.bits_lit(2U, "10"))) && (f_aarch64_system_exceptions_runtime_hvc_decode_test(v_enc))))) {
        f_aarch64_system_exceptions_runtime_hvc(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && ((iface.f_eq_bits(v_LL, iface.bits_lit(2U, "11"))) && (f_aarch64_system_exceptions_runtime_smc_decode_test(v_enc))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && (iface.f_eq_bits(iface.f_and_bits(v_LL, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && ((iface.f_eq_bits(v_LL, iface.bits_lit(2U, "00"))) && (f_aarch64_system_exceptions_debug_breakpoint_decode_test(v_enc))))) {
        f_aarch64_system_exceptions_debug_breakpoint(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && (iface.f_eq_bits(iface.f_and_bits(v_LL, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "010"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && (iface.f_eq_bits(iface.f_and_bits(v_LL, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "010"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && ((iface.f_eq_bits(v_LL, iface.bits_lit(2U, "00"))) && (f_aarch64_system_exceptions_debug_halt_decode_test(v_enc))))) {
        f_aarch64_system_exceptions_debug_halt(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "010"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && (iface.f_eq_bits(iface.f_and_bits(v_LL, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "011"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && (iface.f_eq_bits(v_LL, iface.bits_lit(2U, "01"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "011"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && (iface.f_eq_bits(iface.f_and_bits(v_LL, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && (iface.f_eq_bits(v_LL, iface.bits_lit(2U, "00"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && ((iface.f_eq_bits(v_LL, iface.bits_lit(2U, "01"))) && (f_aarch64_system_exceptions_debug_exception_decode_test(v_enc))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && ((iface.f_eq_bits(v_LL, iface.bits_lit(2U, "10"))) && (f_aarch64_system_exceptions_debug_exception_decode_test(v_enc))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && ((iface.f_eq_bits(v_LL, iface.bits_lit(2U, "11"))) && (f_aarch64_system_exceptions_debug_exception_decode_test(v_enc))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "110"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "111"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("14")), iface.bits_lit(14U, "01000000110010"))) && ((true) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))))))) {
      const auto v_CRm = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("8"), /*wd*/ iface.bigint_lit("4"));
      const auto v_op2 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("3"));
      if ((true) && ((true) && (f_aarch64_system_hints_decode_test(v_enc)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && (f_aarch64_system_hints_decode_test(v_enc)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "001"))) && (f_aarch64_system_hints_decode_test(v_enc)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "010"))) && (f_aarch64_system_hints_decode_test(v_enc)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "011"))) && (f_aarch64_system_hints_decode_test(v_enc)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "100"))) && (f_aarch64_system_hints_decode_test(v_enc)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "101"))) && (f_aarch64_system_hints_decode_test(v_enc)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "110"))) && (f_aarch64_system_hints_decode_test(v_enc)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "111"))) && (f_aarch64_integer_pac_strip_hint_decode_test(v_enc)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && (f_aarch64_integer_pac_pacia_hint_decode_test(v_enc)))) {
        f_aarch64_integer_pac_pacia_hint(v_enc);
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "010"))) && (f_aarch64_integer_pac_pacib_hint_decode_test(v_enc)))) {
        f_aarch64_integer_pac_pacib_hint(v_enc);
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "100"))) && (f_aarch64_integer_pac_autia_hint_decode_test(v_enc)))) {
        f_aarch64_integer_pac_autia_hint(v_enc);
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "110"))) && (f_aarch64_integer_pac_autib_hint_decode_test(v_enc)))) {
        f_aarch64_integer_pac_autib_hint(v_enc);
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0010"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && (f_aarch64_system_hints_decode_test(v_enc)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0010"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "001"))) && (f_aarch64_system_hints_decode_test(v_enc)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0010"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "010"))) && (f_aarch64_system_hints_decode_test(v_enc)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0010"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "100"))) && (f_aarch64_system_hints_decode_test(v_enc)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0011"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && (f_aarch64_integer_pac_pacia_hint_decode_test(v_enc)))) {
        f_aarch64_integer_pac_pacia_hint(v_enc);
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0011"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "001"))) && (f_aarch64_integer_pac_pacia_hint_decode_test(v_enc)))) {
        f_aarch64_integer_pac_pacia_hint(v_enc);
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0011"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "010"))) && (f_aarch64_integer_pac_pacib_hint_decode_test(v_enc)))) {
        f_aarch64_integer_pac_pacib_hint(v_enc);
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0011"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "011"))) && (f_aarch64_integer_pac_pacib_hint_decode_test(v_enc)))) {
        f_aarch64_integer_pac_pacib_hint(v_enc);
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0011"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "100"))) && (f_aarch64_integer_pac_autia_hint_decode_test(v_enc)))) {
        f_aarch64_integer_pac_autia_hint(v_enc);
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0011"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "101"))) && (f_aarch64_integer_pac_autia_hint_decode_test(v_enc)))) {
        f_aarch64_integer_pac_autia_hint(v_enc);
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0011"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "110"))) && (f_aarch64_integer_pac_autib_hint_decode_test(v_enc)))) {
        f_aarch64_integer_pac_autib_hint(v_enc);
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0011"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "111"))) && (f_aarch64_integer_pac_autib_hint_decode_test(v_enc)))) {
        f_aarch64_integer_pac_autib_hint(v_enc);
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op2, iface.bits_lit(3U, "001")), iface.bits_lit(3U, "000"))) && (f_aarch64_system_hints_decode_test(v_enc)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("14")), iface.bits_lit(14U, "01000000110011"))) && ((true) && (true))))) {
      const auto v_CRm = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("8"), /*wd*/ iface.bigint_lit("4"));
      const auto v_op2 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("3"));
      const auto v_Rt = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"));
      if ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "001"))) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "010"))) && ((iface.f_eq_bits(v_Rt, iface.bits_lit(5U, "11111"))) && (f_aarch64_system_monitors_decode_test(v_enc))))) {
        f_aarch64_system_monitors(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_Rt, iface.bits_lit(5U, "11111"))) && (f_aarch64_system_barriers_dmb_decode_test(v_enc))))) {
        f_aarch64_system_barriers_dmb(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "110"))) && ((iface.f_eq_bits(v_Rt, iface.bits_lit(5U, "11111"))) && (f_aarch64_system_barriers_isb_decode_test(v_enc))))) {
        f_aarch64_system_barriers_isb(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "111"))) && (! (iface.f_eq_bits(v_Rt, iface.bits_lit(5U, "11111")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "111"))) && ((iface.f_eq_bits(v_Rt, iface.bits_lit(5U, "11111"))) && (f_aarch64_system_barriers_sb_decode_test(v_enc))))) {
        f_aarch64_system_barriers_sb(v_enc);
      } else if ((! (iface.f_eq_bits(iface.f_and_bits(v_CRm, iface.bits_lit(4U, "1011")), iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_Rt, iface.bits_lit(5U, "11111"))) && (f_aarch64_system_barriers_dsb_decode_test(v_enc))))) {
        f_aarch64_system_barriers_dsb(v_enc);
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_Rt, iface.bits_lit(5U, "11111"))) && (f_aarch64_system_barriers_ssbb_decode_test(v_enc))))) {
        f_aarch64_system_barriers_ssbb(v_enc);
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "011"))) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_CRm, iface.bits_lit(4U, "1110")), iface.bits_lit(4U, "0010"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "011"))) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_CRm, iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "011"))) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_CRm, iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_Rt, iface.bits_lit(5U, "11111"))) && (f_aarch64_system_barriers_pssbb_decode_test(v_enc))))) {
        f_aarch64_system_barriers_pssbb(v_enc);
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_CRm, iface.bits_lit(4U, "1000")), iface.bits_lit(4U, "1000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "011"))) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("14")), iface.bits_lit(14U, "11111110001111")), iface.bits_lit(14U, "01000000000100"))) && ((true) && (true))))) {
      const auto v_op1 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"));
      const auto v_op2 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("3"));
      const auto v_Rt = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"));
      if ((true) && ((true) && (! (iface.f_eq_bits(v_Rt, iface.bits_lit(5U, "11111")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((iface.f_eq_bits(v_Rt, iface.bits_lit(5U, "11111"))) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_op1, iface.bits_lit(3U, "000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "000"))) && ((iface.f_eq_bits(v_Rt, iface.bits_lit(5U, "11111"))) && (f_aarch64_integer_flags_cfinv_decode_test(v_enc))))) {
        f_aarch64_integer_flags_cfinv(v_enc);
      } else if ((iface.f_eq_bits(v_op1, iface.bits_lit(3U, "000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "001"))) && ((iface.f_eq_bits(v_Rt, iface.bits_lit(5U, "11111"))) && (f_aarch64_integer_flags_xaflag_decode_test(v_enc))))) {
        f_aarch64_integer_flags_xaflag(v_enc);
      } else if ((iface.f_eq_bits(v_op1, iface.bits_lit(3U, "000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(3U, "010"))) && ((iface.f_eq_bits(v_Rt, iface.bits_lit(5U, "11111"))) && (f_aarch64_integer_flags_axflag_decode_test(v_enc))))) {
        f_aarch64_integer_flags_axflag(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("14")), iface.bits_lit(14U, "11110110000000")), iface.bits_lit(14U, "01000010000000"))) && ((true) && (true))))) {
      const auto v_L = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1"));
      if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_system_sysops_decode_test(v_enc))) {
        f_aarch64_system_sysops(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_system_sysops_decode_test(v_enc))) {
        f_aarch64_system_sysops(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("14")), iface.bits_lit(14U, "11110100000000")), iface.bits_lit(14U, "01000100000000"))) && ((true) && (true))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("14")), iface.bits_lit(14U, "10000000000000")), iface.bits_lit(14U, "10000000000000"))) && ((true) && (true))))) {
      const auto v_opc = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("4"));
      const auto v_op2 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"));
      const auto v_op3 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6"));
      const auto v_Rn = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"));
      const auto v_op4 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"));
      if ((true) && ((! (iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111")))) && ((true) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000000"))) && ((true) && (! (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "00000")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000000"))) && ((true) && ((iface.f_eq_bits(v_op4, iface.bits_lit(5U, "00000"))) && (f_aarch64_branch_unconditional_register_decode_test(v_enc))))))) {
        f_aarch64_branch_unconditional_register(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000001"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000010"))) && ((true) && (! (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "11111")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000010"))) && ((true) && ((iface.f_eq_bits(v_op4, iface.bits_lit(5U, "11111"))) && (f_aarch64_branch_unconditional_register_decode_test(v_enc))))))) {
        f_aarch64_branch_unconditional_register(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000011"))) && ((true) && (! (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "11111")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000011"))) && ((true) && ((iface.f_eq_bits(v_op4, iface.bits_lit(5U, "11111"))) && (f_aarch64_branch_unconditional_register_decode_test(v_enc))))))) {
        f_aarch64_branch_unconditional_register(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "111100")), iface.bits_lit(6U, "000100"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "111000")), iface.bits_lit(6U, "001000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "110000")), iface.bits_lit(6U, "010000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "100000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000000"))) && ((true) && (! (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "00000")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000000"))) && ((true) && ((iface.f_eq_bits(v_op4, iface.bits_lit(5U, "00000"))) && (f_aarch64_branch_unconditional_register_decode_test(v_enc))))))) {
        f_aarch64_branch_unconditional_register(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000001"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000010"))) && ((true) && (! (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "11111")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000010"))) && ((true) && ((iface.f_eq_bits(v_op4, iface.bits_lit(5U, "11111"))) && (f_aarch64_branch_unconditional_register_decode_test(v_enc))))))) {
        f_aarch64_branch_unconditional_register(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000011"))) && ((true) && (! (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "11111")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000011"))) && ((true) && ((iface.f_eq_bits(v_op4, iface.bits_lit(5U, "11111"))) && (f_aarch64_branch_unconditional_register_decode_test(v_enc))))))) {
        f_aarch64_branch_unconditional_register(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "111100")), iface.bits_lit(6U, "000100"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "111000")), iface.bits_lit(6U, "001000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "110000")), iface.bits_lit(6U, "010000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "100000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0010"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000000"))) && ((true) && (! (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "00000")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0010"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000000"))) && ((true) && ((iface.f_eq_bits(v_op4, iface.bits_lit(5U, "00000"))) && (f_aarch64_branch_unconditional_register_decode_test(v_enc))))))) {
        f_aarch64_branch_unconditional_register(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0010"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000001"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0010"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000010"))) && ((! (iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111")))) && (! (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "11111")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0010"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000010"))) && ((iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op4, iface.bits_lit(5U, "11111"))) && (f_aarch64_branch_unconditional_register_decode_test(v_enc))))))) {
        f_aarch64_branch_unconditional_register(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0010"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000011"))) && ((! (iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111")))) && (! (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "11111")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0010"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000011"))) && ((iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op4, iface.bits_lit(5U, "11111"))) && (f_aarch64_branch_unconditional_register_decode_test(v_enc))))))) {
        f_aarch64_branch_unconditional_register(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0010"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "111100")), iface.bits_lit(6U, "000100"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0010"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "111000")), iface.bits_lit(6U, "001000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0010"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "110000")), iface.bits_lit(6U, "010000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0010"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "100000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0011"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((true) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000000"))) && ((! (iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111")))) && (! (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "00000")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000000"))) && ((! (iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111")))) && (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "00000"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000000"))) && ((iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "00000")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000000"))) && ((iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op4, iface.bits_lit(5U, "00000"))) && (f_aarch64_branch_unconditional_eret_decode_test(v_enc))))))) {
        f_aarch64_branch_unconditional_eret(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000001"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000010"))) && ((! (iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111")))) && (! (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "11111")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000010"))) && ((! (iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111")))) && (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "11111"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000010"))) && ((iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "11111")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000010"))) && ((iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op4, iface.bits_lit(5U, "11111"))) && (f_aarch64_branch_unconditional_eret_decode_test(v_enc))))))) {
        f_aarch64_branch_unconditional_eret(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000011"))) && ((! (iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111")))) && (! (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "11111")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000011"))) && ((! (iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111")))) && (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "11111"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000011"))) && ((iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "11111")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000011"))) && ((iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op4, iface.bits_lit(5U, "11111"))) && (f_aarch64_branch_unconditional_eret_decode_test(v_enc))))))) {
        f_aarch64_branch_unconditional_eret(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "111100")), iface.bits_lit(6U, "000100"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "111000")), iface.bits_lit(6U, "001000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "110000")), iface.bits_lit(6U, "010000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "100000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0101"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((! (iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000000")))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0101"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000000"))) && ((! (iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111")))) && (! (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "00000")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0101"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000000"))) && ((! (iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111")))) && (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "00000"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0101"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000000"))) && ((iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111"))) && (! (iface.f_eq_bits(v_op4, iface.bits_lit(5U, "00000")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "0101"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000000"))) && ((iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op4, iface.bits_lit(5U, "00000"))) && (f_aarch64_branch_unconditional_dret_decode_test(v_enc))))))) {
        f_aarch64_branch_unconditional_dret(v_enc);
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_opc, iface.bits_lit(4U, "1110")), iface.bits_lit(4U, "0110"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((true) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "1000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "111110")), iface.bits_lit(6U, "000000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "1000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000010"))) && ((true) && ((true) && (f_aarch64_branch_unconditional_register_decode_test(v_enc))))))) {
        f_aarch64_branch_unconditional_register(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "1000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000011"))) && ((true) && ((true) && (f_aarch64_branch_unconditional_register_decode_test(v_enc))))))) {
        f_aarch64_branch_unconditional_register(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "1000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "111100")), iface.bits_lit(6U, "000100"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "1000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "111000")), iface.bits_lit(6U, "001000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "1000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "110000")), iface.bits_lit(6U, "010000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "1000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "100000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "1001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "111110")), iface.bits_lit(6U, "000000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "1001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000010"))) && ((true) && ((true) && (f_aarch64_branch_unconditional_register_decode_test(v_enc))))))) {
        f_aarch64_branch_unconditional_register(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "1001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_op3, iface.bits_lit(6U, "000011"))) && ((true) && ((true) && (f_aarch64_branch_unconditional_register_decode_test(v_enc))))))) {
        f_aarch64_branch_unconditional_register(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "1001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "111100")), iface.bits_lit(6U, "000100"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "1001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "111000")), iface.bits_lit(6U, "001000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "1001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "110000")), iface.bits_lit(6U, "010000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(4U, "1001"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(iface.f_and_bits(v_op3, iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "100000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_opc, iface.bits_lit(4U, "1110")), iface.bits_lit(4U, "1010"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((true) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_opc, iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "1100"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(5U, "11111"))) && ((true) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011")), iface.bits_lit(3U, "000"))) && ((true) && ((true) && ((true) && (true))))) {
      const auto v_op = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      if ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && (f_aarch64_branch_unconditional_immediate_decode_test(v_enc))) {
        f_aarch64_branch_unconditional_immediate(v_enc);
      } else if ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && (f_aarch64_branch_unconditional_immediate_decode_test(v_enc))) {
        f_aarch64_branch_unconditional_immediate(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011")), iface.bits_lit(3U, "001"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("14")), iface.bits_lit(14U, "10000000000000")), iface.bits_lit(14U, "00000000000000"))) && ((true) && (true))))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_op = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("24"), /*wd*/ iface.bigint_lit("1"));
      if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && (f_aarch64_branch_conditional_compare_decode_test(v_enc)))) {
        f_aarch64_branch_conditional_compare(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && (f_aarch64_branch_conditional_compare_decode_test(v_enc)))) {
        f_aarch64_branch_conditional_compare(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && (f_aarch64_branch_conditional_compare_decode_test(v_enc)))) {
        f_aarch64_branch_conditional_compare(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && (f_aarch64_branch_conditional_compare_decode_test(v_enc)))) {
        f_aarch64_branch_conditional_compare(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011")), iface.bits_lit(3U, "001"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("14")), iface.bits_lit(14U, "10000000000000")), iface.bits_lit(14U, "10000000000000"))) && ((true) && (true))))) {
      const auto v_op = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("24"), /*wd*/ iface.bigint_lit("1"));
      if ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && (f_aarch64_branch_conditional_test_decode_test(v_enc))) {
        f_aarch64_branch_conditional_test(v_enc);
      } else if ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && (f_aarch64_branch_conditional_test_decode_test(v_enc))) {
        f_aarch64_branch_conditional_test(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } // if
  } else if ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("24"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "01010")), iface.bits_lit(5U, "01000"))) && (true))) {
    if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1011")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "000000"))) && ((true) && ((true) && (true)))))))))) {
      const auto v_L = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("4"));
      if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0000"))) && (f_aarch64_memory_vector_multiple_no_wb_decode_test(v_enc)))) {
        f_aarch64_memory_vector_multiple_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0010"))) && (f_aarch64_memory_vector_multiple_no_wb_decode_test(v_enc)))) {
        f_aarch64_memory_vector_multiple_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0011")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0100"))) && (f_aarch64_memory_vector_multiple_no_wb_decode_test(v_enc)))) {
        f_aarch64_memory_vector_multiple_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0110"))) && (f_aarch64_memory_vector_multiple_no_wb_decode_test(v_enc)))) {
        f_aarch64_memory_vector_multiple_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0111"))) && (f_aarch64_memory_vector_multiple_no_wb_decode_test(v_enc)))) {
        f_aarch64_memory_vector_multiple_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1000"))) && (f_aarch64_memory_vector_multiple_no_wb_decode_test(v_enc)))) {
        f_aarch64_memory_vector_multiple_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1001")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1010"))) && (f_aarch64_memory_vector_multiple_no_wb_decode_test(v_enc)))) {
        f_aarch64_memory_vector_multiple_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1011")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "1100")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0000"))) && (f_aarch64_memory_vector_multiple_no_wb_decode_test(v_enc)))) {
        f_aarch64_memory_vector_multiple_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0010"))) && (f_aarch64_memory_vector_multiple_no_wb_decode_test(v_enc)))) {
        f_aarch64_memory_vector_multiple_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0011")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0100"))) && (f_aarch64_memory_vector_multiple_no_wb_decode_test(v_enc)))) {
        f_aarch64_memory_vector_multiple_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0110"))) && (f_aarch64_memory_vector_multiple_no_wb_decode_test(v_enc)))) {
        f_aarch64_memory_vector_multiple_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0111"))) && (f_aarch64_memory_vector_multiple_no_wb_decode_test(v_enc)))) {
        f_aarch64_memory_vector_multiple_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1000"))) && (f_aarch64_memory_vector_multiple_no_wb_decode_test(v_enc)))) {
        f_aarch64_memory_vector_multiple_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1001")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1010"))) && (f_aarch64_memory_vector_multiple_no_wb_decode_test(v_enc)))) {
        f_aarch64_memory_vector_multiple_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1011")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "1100")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1011")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "000000"))) && ((true) && ((true) && (true)))))))))) {
      const auto v_L = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1"));
      const auto v_Rm = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("4"));
      if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "1100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0000"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0010"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0100"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0110"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0111"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1000"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1010"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0000"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0010"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0100"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0110"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0111"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1000"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1010"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "1100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0000"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0010"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0100"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0110"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0111"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1000"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1010"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0000"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0010"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0100"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0110"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0111"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1000"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1010"))) && (f_aarch64_memory_vector_multiple_post_inc_decode_test(v_enc))))) {
        f_aarch64_memory_vector_multiple_post_inc(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1011")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "100000"))) && ((true) && ((true) && (true)))))))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1011")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "011111")), iface.bits_lit(6U, "000000"))) && ((true) && ((true) && (true)))))))))) {
      const auto v_L = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1"));
      const auto v_R = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1"));
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2"));
      if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "110"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((true) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((true) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((true) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((true) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((true) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((true) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_vector_single_no_wb_decode_test(v_enc))))))) {
        f_aarch64_memory_vector_single_no_wb(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1011")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) && ((true) && ((true) && ((true) && ((true) && (true)))))))))) {
      const auto v_L = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1"));
      const auto v_R = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1"));
      const auto v_Rm = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1"));
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2"));
      if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "110"))) && ((true) && (true)))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "01")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((true) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "10")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "11")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((true) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "10")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "11")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((true) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "10")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "11")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "01")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((true) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "10")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "11")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (true)))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (true)))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((true) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "10")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "11")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((true) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "10")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_size, iface.bits_lit(2U, "11")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (true)))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (true)))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && ((true) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else if ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rm, iface.bits_lit(5U, "11111"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_vector_single_post_inc_decode_test(v_enc)))))))) {
        f_aarch64_memory_vector_single_post_inc(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1011")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "010000")), iface.bits_lit(6U, "010000"))) && ((true) && ((true) && (true)))))))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1011")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "001000")), iface.bits_lit(6U, "001000"))) && ((true) && ((true) && (true)))))))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1011")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "000100")), iface.bits_lit(6U, "000100"))) && ((true) && ((true) && (true)))))))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1011")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "000010")), iface.bits_lit(6U, "000010"))) && ((true) && ((true) && (true)))))))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1011")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "000001")), iface.bits_lit(6U, "000001"))) && ((true) && ((true) && (true)))))))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1101"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "100000"))) && ((true) && ((true) && (true)))))))))) {
      const auto v_opc = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_imm9 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("9"));
      const auto v_op2 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2"));
      if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "01"))) && (f_aarch64_integer_tags_mcsettagpost_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcsettagpost(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "10"))) && (f_aarch64_integer_tags_mcsettag_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcsettag(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "11"))) && (f_aarch64_integer_tags_mcsettagpre_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcsettagpre(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_imm9, iface.bits_lit(9U, "000000000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "00"))) && (f_aarch64_integer_tags_mcsettagandzeroarray_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcsettagandzeroarray(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "00"))) && (f_aarch64_integer_tags_mcgettag_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcgettag(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "01"))) && (f_aarch64_integer_tags_mcsettagandzerodatapost_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcsettagandzerodatapost(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "10"))) && (f_aarch64_integer_tags_mcsettagandzerodata_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcsettagandzerodata(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "11"))) && (f_aarch64_integer_tags_mcsettagandzerodatapre_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcsettagandzerodatapre(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "01"))) && (f_aarch64_integer_tags_mcsettagpairpost_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcsettagpairpost(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "10"))) && (f_aarch64_integer_tags_mcsettagpair_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcsettagpair(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "11"))) && (f_aarch64_integer_tags_mcsettagpairpre_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcsettagpairpre(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((! (iface.f_eq_bits(v_imm9, iface.bits_lit(9U, "000000000")))) && (iface.f_eq_bits(v_op2, iface.bits_lit(2U, "00"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_imm9, iface.bits_lit(9U, "000000000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "00"))) && (f_aarch64_integer_tags_mcsettagarray_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcsettagarray(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "01"))) && (f_aarch64_integer_tags_mcsettagpairandzerodatapost_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcsettagpairandzerodatapost(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "10"))) && (f_aarch64_integer_tags_mcsettagpairandzerodata_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcsettagpairandzerodata(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((true) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "11"))) && (f_aarch64_integer_tags_mcsettagpairandzerodatapre_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcsettagpairandzerodatapre(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((! (iface.f_eq_bits(v_imm9, iface.bits_lit(9U, "000000000")))) && (iface.f_eq_bits(v_op2, iface.bits_lit(2U, "00"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_imm9, iface.bits_lit(9U, "000000000"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "00"))) && (f_aarch64_integer_tags_mcgettagarray_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcgettagarray(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1011")), iface.bits_lit(4U, "1000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((true) && ((true) && ((true) && ((true) && ((true) && (true)))))))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0011")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((true) && ((true) && ((true) && ((true) && (true)))))))))) {
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2"));
      const auto v_o2 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1"));
      const auto v_L = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1"));
      const auto v_o1 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1"));
      const auto v_o0 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("1"));
      const auto v_Rt2 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("5"));
      if ((true) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((true) && (! (iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((true) && (! (iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_exclusive_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_memory_exclusive_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_pair_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_pair(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_pair_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_pair(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_exclusive_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_memory_exclusive_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_pair_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_pair(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_pair_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_pair(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_ordered_decode_test(v_enc)))))))) {
        f_aarch64_memory_ordered(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_memory_ordered_decode_test(v_enc)))))))) {
        f_aarch64_memory_ordered(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_ordered_decode_test(v_enc)))))))) {
        f_aarch64_memory_ordered(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_memory_ordered_decode_test(v_enc)))))))) {
        f_aarch64_memory_ordered(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_exclusive_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_memory_exclusive_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_pair_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_pair(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_pair_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_pair(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_exclusive_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_memory_exclusive_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_pair_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_pair(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_pair_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_pair(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_ordered_decode_test(v_enc)))))))) {
        f_aarch64_memory_ordered(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_memory_ordered_decode_test(v_enc)))))))) {
        f_aarch64_memory_ordered(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_ordered_decode_test(v_enc)))))))) {
        f_aarch64_memory_ordered(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_memory_ordered_decode_test(v_enc)))))))) {
        f_aarch64_memory_ordered(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_exclusive_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_memory_exclusive_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_exclusive_pair_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_pair(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_memory_exclusive_pair_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_pair(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_exclusive_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_memory_exclusive_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_exclusive_pair_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_pair(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_memory_exclusive_pair_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_pair(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_ordered_decode_test(v_enc)))))))) {
        f_aarch64_memory_ordered(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_memory_ordered_decode_test(v_enc)))))))) {
        f_aarch64_memory_ordered(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_ordered_decode_test(v_enc)))))))) {
        f_aarch64_memory_ordered(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_memory_ordered_decode_test(v_enc)))))))) {
        f_aarch64_memory_ordered(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_exclusive_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_memory_exclusive_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_exclusive_pair_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_pair(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_memory_exclusive_pair_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_pair(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_exclusive_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_memory_exclusive_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_exclusive_pair_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_pair(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_memory_exclusive_pair_decode_test(v_enc)))))))) {
        f_aarch64_memory_exclusive_pair(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_ordered_decode_test(v_enc)))))))) {
        f_aarch64_memory_ordered(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_memory_ordered_decode_test(v_enc)))))))) {
        f_aarch64_memory_ordered(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_memory_ordered_decode_test(v_enc)))))))) {
        f_aarch64_memory_ordered(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_memory_ordered_decode_test(v_enc)))))))) {
        f_aarch64_memory_ordered(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_single(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_Rt2, iface.bits_lit(5U, "11111"))) && (f_aarch64_memory_atomicops_cas_single_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_cas_single(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0011")), iface.bits_lit(4U, "0001"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "000000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) && (true)))))))))) {
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2"));
      const auto v_opc = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_signed_offset_lda_stl_decode_test(v_enc)))) {
        f_aarch64_memory_single_general_immediate_signed_offset_lda_stl(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_signed_offset_lda_stl_decode_test(v_enc)))) {
        f_aarch64_memory_single_general_immediate_signed_offset_lda_stl(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_general_immediate_signed_offset_lda_stl_decode_test(v_enc)))) {
        f_aarch64_memory_single_general_immediate_signed_offset_lda_stl(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && (f_aarch64_memory_single_general_immediate_signed_offset_lda_stl_decode_test(v_enc)))) {
        f_aarch64_memory_single_general_immediate_signed_offset_lda_stl(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_signed_offset_lda_stl_decode_test(v_enc)))) {
        f_aarch64_memory_single_general_immediate_signed_offset_lda_stl(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_signed_offset_lda_stl_decode_test(v_enc)))) {
        f_aarch64_memory_single_general_immediate_signed_offset_lda_stl(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_general_immediate_signed_offset_lda_stl_decode_test(v_enc)))) {
        f_aarch64_memory_single_general_immediate_signed_offset_lda_stl(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && (f_aarch64_memory_single_general_immediate_signed_offset_lda_stl_decode_test(v_enc)))) {
        f_aarch64_memory_single_general_immediate_signed_offset_lda_stl(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_signed_offset_lda_stl_decode_test(v_enc)))) {
        f_aarch64_memory_single_general_immediate_signed_offset_lda_stl(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_signed_offset_lda_stl_decode_test(v_enc)))) {
        f_aarch64_memory_single_general_immediate_signed_offset_lda_stl(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_general_immediate_signed_offset_lda_stl_decode_test(v_enc)))) {
        f_aarch64_memory_single_general_immediate_signed_offset_lda_stl(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_signed_offset_lda_stl_decode_test(v_enc)))) {
        f_aarch64_memory_single_general_immediate_signed_offset_lda_stl(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_signed_offset_lda_stl_decode_test(v_enc)))) {
        f_aarch64_memory_single_general_immediate_signed_offset_lda_stl(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0011")), iface.bits_lit(4U, "0001"))) && ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((true) && ((true) && ((true) && ((true) && (true)))))))))) {
      const auto v_opc = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2"));
      const auto v_V = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1"));
      if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_literal_general_decode_test(v_enc)))) {
        f_aarch64_memory_literal_general(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_literal_simdfp_decode_test(v_enc)))) {
        f_aarch64_memory_literal_simdfp(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_literal_general_decode_test(v_enc)))) {
        f_aarch64_memory_literal_general(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_literal_simdfp_decode_test(v_enc)))) {
        f_aarch64_memory_literal_simdfp(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_literal_general_decode_test(v_enc)))) {
        f_aarch64_memory_literal_general(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_literal_simdfp_decode_test(v_enc)))) {
        f_aarch64_memory_literal_simdfp(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_literal_general_decode_test(v_enc)))) {
        f_aarch64_memory_literal_general(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_V, iface.bits_lit(1U, "1")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0011")), iface.bits_lit(4U, "0010"))) && ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) && ((true) && ((true) && ((true) && ((true) && (true)))))))))) {
      const auto v_opc = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2"));
      const auto v_V = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1"));
      const auto v_L = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1"));
      if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_pair_general_no_alloc_decode_test(v_enc))))) {
        f_aarch64_memory_pair_general_no_alloc(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_general_no_alloc_decode_test(v_enc))))) {
        f_aarch64_memory_pair_general_no_alloc(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_pair_simdfp_no_alloc_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_no_alloc(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_simdfp_no_alloc_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_no_alloc(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_pair_simdfp_no_alloc_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_no_alloc(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_simdfp_no_alloc_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_no_alloc(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_pair_general_no_alloc_decode_test(v_enc))))) {
        f_aarch64_memory_pair_general_no_alloc(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_general_no_alloc_decode_test(v_enc))))) {
        f_aarch64_memory_pair_general_no_alloc(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_pair_simdfp_no_alloc_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_no_alloc(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_simdfp_no_alloc_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_no_alloc(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((true) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0011")), iface.bits_lit(4U, "0010"))) && ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) && ((true) && ((true) && ((true) && ((true) && (true)))))))))) {
      const auto v_opc = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2"));
      const auto v_V = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1"));
      const auto v_L = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1"));
      if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_pair_general_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_general_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_general_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_general_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_pair_simdfp_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_simdfp_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_tags_mcsettaganddatapairpost_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcsettaganddatapairpost(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_general_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_general_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_pair_simdfp_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_simdfp_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_pair_general_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_general_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_general_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_general_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_pair_simdfp_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_simdfp_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((true) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0011")), iface.bits_lit(4U, "0010"))) && ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) && ((true) && ((true) && ((true) && ((true) && (true)))))))))) {
      const auto v_opc = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2"));
      const auto v_V = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1"));
      const auto v_L = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1"));
      if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_pair_general_offset_decode_test(v_enc))))) {
        f_aarch64_memory_pair_general_offset(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_general_offset_decode_test(v_enc))))) {
        f_aarch64_memory_pair_general_offset(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_pair_simdfp_offset_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_offset(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_simdfp_offset_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_offset(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_tags_mcsettaganddatapair_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcsettaganddatapair(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_general_offset_decode_test(v_enc))))) {
        f_aarch64_memory_pair_general_offset(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_pair_simdfp_offset_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_offset(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_simdfp_offset_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_offset(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_pair_general_offset_decode_test(v_enc))))) {
        f_aarch64_memory_pair_general_offset(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_general_offset_decode_test(v_enc))))) {
        f_aarch64_memory_pair_general_offset(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_pair_simdfp_offset_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_offset(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_simdfp_offset_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_offset(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((true) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0011")), iface.bits_lit(4U, "0010"))) && ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) && ((true) && ((true) && ((true) && ((true) && (true)))))))))) {
      const auto v_opc = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2"));
      const auto v_V = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1"));
      const auto v_L = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1"));
      if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_pair_general_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_general_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_general_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_general_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_pair_simdfp_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_simdfp_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_tags_mcsettaganddatapairpre_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcsettaganddatapairpre(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_general_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_general_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_pair_simdfp_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_simdfp_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_pair_general_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_general_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_general_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_general_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_pair_simdfp_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_L, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_pair_simdfp_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_pair_simdfp_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((true) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0011")), iface.bits_lit(4U, "0011"))) && ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "000000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) && (true)))))))))) {
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2"));
      const auto v_V = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opc = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_opc, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_general_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && (f_aarch64_memory_single_general_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_simdfp_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_simdfp_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_simdfp_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && (f_aarch64_memory_single_simdfp_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_general_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && (f_aarch64_memory_single_general_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_simdfp_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_simdfp_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_opc, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_general_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_simdfp_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_simdfp_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_general_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_simdfp_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_offset_normal(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_simdfp_immediate_signed_offset_normal_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_offset_normal(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0011")), iface.bits_lit(4U, "0011"))) && ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "000000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) && (true)))))))))) {
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2"));
      const auto v_V = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opc = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_opc, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_general_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && (f_aarch64_memory_single_general_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_simdfp_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_simdfp_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_simdfp_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && (f_aarch64_memory_single_simdfp_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_general_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && (f_aarch64_memory_single_general_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_simdfp_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_simdfp_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_opc, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_general_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_simdfp_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_simdfp_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_simdfp_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_post_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_simdfp_immediate_signed_post_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_post_idx(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0011")), iface.bits_lit(4U, "0011"))) && ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "000000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) && (true)))))))))) {
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2"));
      const auto v_V = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opc = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      if ((true) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_signed_offset_unpriv_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_unpriv(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_signed_offset_unpriv_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_unpriv(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_general_immediate_signed_offset_unpriv_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_unpriv(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && (f_aarch64_memory_single_general_immediate_signed_offset_unpriv_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_unpriv(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_signed_offset_unpriv_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_unpriv(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_signed_offset_unpriv_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_unpriv(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_general_immediate_signed_offset_unpriv_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_unpriv(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && (f_aarch64_memory_single_general_immediate_signed_offset_unpriv_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_unpriv(v_enc);
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_signed_offset_unpriv_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_unpriv(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_signed_offset_unpriv_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_unpriv(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_general_immediate_signed_offset_unpriv_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_unpriv(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_signed_offset_unpriv_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_unpriv(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_signed_offset_unpriv_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_offset_unpriv(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0011")), iface.bits_lit(4U, "0011"))) && ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "000000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) && (true)))))))))) {
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2"));
      const auto v_V = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opc = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_opc, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_general_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && (f_aarch64_memory_single_general_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_simdfp_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_simdfp_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_simdfp_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && (f_aarch64_memory_single_simdfp_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_general_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && (f_aarch64_memory_single_general_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_simdfp_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_simdfp_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_opc, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_general_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_simdfp_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_simdfp_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_simdfp_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_pre_idx(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_simdfp_immediate_signed_pre_idx_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_signed_pre_idx(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0011")), iface.bits_lit(4U, "0011"))) && ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "100000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) && (true)))))))))) {
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2"));
      const auto v_V = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1"));
      const auto v_A = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1"));
      const auto v_R = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1"));
      const auto v_o3 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opc = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3"));
      if ((true) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((true) && ((true) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opc, iface.bits_lit(3U, "001")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((true) && ((true) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_opc, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "010")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((true) && ((true) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((true) && ((true) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_opc, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "110")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((true) && ((true) && ((true) && (true)))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "001"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "010"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "110"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "111"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_swp_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_swp(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "001"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "010"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "110"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "111"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_swp_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_swp(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "001"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "010"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "110"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "111"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_swp_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_swp(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && (f_aarch64_memory_ordered_rcpc_decode_test(v_enc)))))))) {
        f_aarch64_memory_ordered_rcpc(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "001"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "010"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "110"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "111"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_swp_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_swp(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "001"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "010"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "110"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "111"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_swp_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_swp(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "001"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "010"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "110"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "111"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_swp_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_swp(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "001"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "010"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "110"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "111"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_swp_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_swp(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && (f_aarch64_memory_ordered_rcpc_decode_test(v_enc)))))))) {
        f_aarch64_memory_ordered_rcpc(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "001"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "010"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "110"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "111"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_swp_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_swp(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "001"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "010"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "110"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "111"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_swp_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_swp(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "001"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "010"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "110"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "111"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_swp_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_swp(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "001"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "010"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "110"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "111"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_swp_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_swp(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && (f_aarch64_memory_ordered_rcpc_decode_test(v_enc)))))))) {
        f_aarch64_memory_ordered_rcpc(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "001"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "010"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "110"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "111"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_swp_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_swp(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "001"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "010"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "110"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "111"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_swp_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_swp(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "001"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "010"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "110"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "111"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_swp_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_swp(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "001"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "010"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "110"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "111"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_swp_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_swp(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && (f_aarch64_memory_ordered_rcpc_decode_test(v_enc)))))))) {
        f_aarch64_memory_ordered_rcpc(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "001"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "010"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "100"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "101"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "110"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "111"))) && (f_aarch64_memory_atomicops_ld_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_ld(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_A, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_R, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(3U, "000"))) && (f_aarch64_memory_atomicops_swp_decode_test(v_enc)))))))) {
        f_aarch64_memory_atomicops_swp(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0011")), iface.bits_lit(4U, "0011"))) && ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "100000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) && (true)))))))))) {
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2"));
      const auto v_V = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opc = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_option = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("3"));
      if ((true) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_option, iface.bits_lit(3U, "010")), iface.bits_lit(3U, "000")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_opc, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((! (iface.f_eq_bits(v_option, iface.bits_lit(3U, "011")))) && (f_aarch64_memory_single_general_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_option, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_single_general_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((! (iface.f_eq_bits(v_option, iface.bits_lit(3U, "011")))) && (f_aarch64_memory_single_general_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_option, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_single_general_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((! (iface.f_eq_bits(v_option, iface.bits_lit(3U, "011")))) && (f_aarch64_memory_single_general_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_option, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_single_general_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((! (iface.f_eq_bits(v_option, iface.bits_lit(3U, "011")))) && (f_aarch64_memory_single_general_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_option, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_single_general_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((! (iface.f_eq_bits(v_option, iface.bits_lit(3U, "011")))) && (f_aarch64_memory_single_simdfp_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_simdfp_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_option, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_single_simdfp_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_simdfp_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((! (iface.f_eq_bits(v_option, iface.bits_lit(3U, "011")))) && (f_aarch64_memory_single_simdfp_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_simdfp_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_option, iface.bits_lit(3U, "011"))) && (f_aarch64_memory_single_simdfp_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_simdfp_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((true) && (f_aarch64_memory_single_simdfp_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_simdfp_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((true) && (f_aarch64_memory_single_simdfp_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_simdfp_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((true) && (f_aarch64_memory_single_general_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((true) && (f_aarch64_memory_single_general_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((true) && (f_aarch64_memory_single_general_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((true) && (f_aarch64_memory_single_general_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((true) && (f_aarch64_memory_single_simdfp_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_simdfp_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((true) && (f_aarch64_memory_single_simdfp_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_simdfp_register(v_enc);
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_opc, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((true) && (f_aarch64_memory_single_general_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((true) && (f_aarch64_memory_single_general_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((true) && (f_aarch64_memory_single_general_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((true) && (f_aarch64_memory_single_simdfp_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_simdfp_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((true) && (f_aarch64_memory_single_simdfp_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_simdfp_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((true) && (f_aarch64_memory_single_general_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((true) && (f_aarch64_memory_single_general_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((true) && (f_aarch64_memory_single_general_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((true) && (f_aarch64_memory_single_simdfp_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_simdfp_register(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((true) && (f_aarch64_memory_single_simdfp_register_decode_test(v_enc)))))) {
        f_aarch64_memory_single_simdfp_register(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0011")), iface.bits_lit(4U, "0011"))) && ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "100000"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))) && (true)))))))))) {
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2"));
      const auto v_V = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1"));
      const auto v_M = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1"));
      const auto v_W = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1"));
      if ((! (iface.f_eq_bits(v_size, iface.bits_lit(2U, "11")))) && ((true) && ((true) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_W, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_single_general_immediate_signed_pac_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_immediate_signed_pac(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_W, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_single_general_immediate_signed_pac_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_immediate_signed_pac(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_W, iface.bits_lit(1U, "0"))) && (f_aarch64_memory_single_general_immediate_signed_pac_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_immediate_signed_pac(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_W, iface.bits_lit(1U, "1"))) && (f_aarch64_memory_single_general_immediate_signed_pac_decode_test(v_enc)))))) {
        f_aarch64_memory_single_general_immediate_signed_pac(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((true) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0011")), iface.bits_lit(4U, "0011"))) && ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((true) && ((true) && ((true) && ((true) && (true)))))))))) {
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2"));
      const auto v_V = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("26"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opc = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_opc, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_general_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && (f_aarch64_memory_single_general_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_simdfp_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_simdfp_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_simdfp_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && (f_aarch64_memory_single_simdfp_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_general_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && (f_aarch64_memory_single_general_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_simdfp_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_simdfp_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_opc, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_general_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_simdfp_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_simdfp_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_general_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_general_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && (f_aarch64_memory_single_general_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_general_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && (f_aarch64_memory_single_simdfp_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_V, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && (f_aarch64_memory_single_simdfp_immediate_unsigned_decode_test(v_enc))))) {
        f_aarch64_memory_single_simdfp_immediate_unsigned(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } // if
  } else if ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("24"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "01110")), iface.bits_lit(5U, "01010"))) && (true))) {
    if ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0110"))) && ((true) && ((true) && (true))))))))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6"));
      if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "111000")), iface.bits_lit(6U, "011000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "100000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "111110")), iface.bits_lit(6U, "000110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "111110")), iface.bits_lit(6U, "001110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "111110")), iface.bits_lit(6U, "000010"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "111100")), iface.bits_lit(6U, "000100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "111000")), iface.bits_lit(6U, "001000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "110000")), iface.bits_lit(6U, "010000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000010"))) && (f_aarch64_integer_arithmetic_div_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_div(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000011"))) && (f_aarch64_integer_arithmetic_div_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_div(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "111110")), iface.bits_lit(6U, "000100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001000"))) && (f_aarch64_integer_shift_variable_decode_test(v_enc))))) {
        f_aarch64_integer_shift_variable(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001001"))) && (f_aarch64_integer_shift_variable_decode_test(v_enc))))) {
        f_aarch64_integer_shift_variable(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001010"))) && (f_aarch64_integer_shift_variable_decode_test(v_enc))))) {
        f_aarch64_integer_shift_variable(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001011"))) && (f_aarch64_integer_shift_variable_decode_test(v_enc))))) {
        f_aarch64_integer_shift_variable(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "111011")), iface.bits_lit(6U, "010011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "010000"))) && (f_aarch64_integer_crc_decode_test(v_enc))))) {
        f_aarch64_integer_crc(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "010001"))) && (f_aarch64_integer_crc_decode_test(v_enc))))) {
        f_aarch64_integer_crc(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "010010"))) && (f_aarch64_integer_crc_decode_test(v_enc))))) {
        f_aarch64_integer_crc(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "010100"))) && (f_aarch64_integer_crc_decode_test(v_enc))))) {
        f_aarch64_integer_crc(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "010101"))) && (f_aarch64_integer_crc_decode_test(v_enc))))) {
        f_aarch64_integer_crc(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "010110"))) && (f_aarch64_integer_crc_decode_test(v_enc))))) {
        f_aarch64_integer_crc(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000000"))) && (f_aarch64_integer_arithmetic_pointer_mcsubtracttaggedaddress_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_pointer_mcsubtracttaggedaddress(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000010"))) && (f_aarch64_integer_arithmetic_div_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_div(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000011"))) && (f_aarch64_integer_arithmetic_div_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_div(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000100"))) && (f_aarch64_integer_tags_mcinsertrandomtag_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcinsertrandomtag(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000101"))) && (f_aarch64_integer_tags_mcinserttagmask_decode_test(v_enc))))) {
        f_aarch64_integer_tags_mcinserttagmask(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001000"))) && (f_aarch64_integer_shift_variable_decode_test(v_enc))))) {
        f_aarch64_integer_shift_variable(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001001"))) && (f_aarch64_integer_shift_variable_decode_test(v_enc))))) {
        f_aarch64_integer_shift_variable(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001010"))) && (f_aarch64_integer_shift_variable_decode_test(v_enc))))) {
        f_aarch64_integer_shift_variable(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001011"))) && (f_aarch64_integer_shift_variable_decode_test(v_enc))))) {
        f_aarch64_integer_shift_variable(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001100"))) && (f_aarch64_integer_pac_pacga_dp_2src_decode_test(v_enc))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "111001")), iface.bits_lit(6U, "010000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "111010")), iface.bits_lit(6U, "010000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "010011"))) && (f_aarch64_integer_crc_decode_test(v_enc))))) {
        f_aarch64_integer_crc(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "010111"))) && (f_aarch64_integer_crc_decode_test(v_enc))))) {
        f_aarch64_integer_crc(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000000"))) && (f_aarch64_integer_arithmetic_pointer_mcsubtracttaggedaddresssetflags_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_pointer_mcsubtracttaggedaddresssetflags(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0110"))) && ((true) && ((true) && (true))))))))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opcode2 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6"));
      const auto v_Rn = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"));
      if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "100000"))) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode2, iface.bits_lit(5U, "00010")), iface.bits_lit(5U, "00010"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode2, iface.bits_lit(5U, "00100")), iface.bits_lit(5U, "00100"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode2, iface.bits_lit(5U, "01000")), iface.bits_lit(5U, "01000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode2, iface.bits_lit(5U, "10000")), iface.bits_lit(5U, "10000"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00000"))) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "111110")), iface.bits_lit(6U, "000110"))) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00000"))) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "111000")), iface.bits_lit(6U, "001000"))) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00000"))) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "110000")), iface.bits_lit(6U, "010000"))) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((true) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00000"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000000"))) && ((true) && (f_aarch64_integer_arithmetic_rbit_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_rbit(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00000"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000001"))) && ((true) && (f_aarch64_integer_arithmetic_rev_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_rev(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00000"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000010"))) && ((true) && (f_aarch64_integer_arithmetic_rev_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_rev(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00000"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000011"))) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00000"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000100"))) && ((true) && (f_aarch64_integer_arithmetic_cnt_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_cnt(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00000"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000101"))) && ((true) && (f_aarch64_integer_arithmetic_cnt_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_cnt(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00000"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000000"))) && ((true) && (f_aarch64_integer_arithmetic_rbit_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_rbit(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00000"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000001"))) && ((true) && (f_aarch64_integer_arithmetic_rev_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_rev(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00000"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000010"))) && ((true) && (f_aarch64_integer_arithmetic_rev_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_rev(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00000"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000011"))) && ((true) && (f_aarch64_integer_arithmetic_rev_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_rev(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00000"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000100"))) && ((true) && (f_aarch64_integer_arithmetic_cnt_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_cnt(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00000"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000101"))) && ((true) && (f_aarch64_integer_arithmetic_cnt_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_cnt(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000000"))) && ((true) && (f_aarch64_integer_pac_pacia_dp_1src_decode_test(v_enc))))))) {
        f_aarch64_integer_pac_pacia_dp_1src(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000001"))) && ((true) && (f_aarch64_integer_pac_pacib_dp_1src_decode_test(v_enc))))))) {
        f_aarch64_integer_pac_pacib_dp_1src(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000010"))) && ((true) && (f_aarch64_integer_pac_pacda_dp_1src_decode_test(v_enc))))))) {
        f_aarch64_integer_pac_pacda_dp_1src(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000011"))) && ((true) && (f_aarch64_integer_pac_pacdb_dp_1src_decode_test(v_enc))))))) {
        f_aarch64_integer_pac_pacdb_dp_1src(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000100"))) && ((true) && (f_aarch64_integer_pac_autia_dp_1src_decode_test(v_enc))))))) {
        f_aarch64_integer_pac_autia_dp_1src(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000101"))) && ((true) && (f_aarch64_integer_pac_autib_dp_1src_decode_test(v_enc))))))) {
        f_aarch64_integer_pac_autib_dp_1src(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000110"))) && ((true) && (f_aarch64_integer_pac_autda_dp_1src_decode_test(v_enc))))))) {
        f_aarch64_integer_pac_autda_dp_1src(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000111"))) && ((true) && (f_aarch64_integer_pac_autdb_dp_1src_decode_test(v_enc))))))) {
        f_aarch64_integer_pac_autdb_dp_1src(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001000"))) && ((iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111"))) && (f_aarch64_integer_pac_pacia_dp_1src_decode_test(v_enc))))))) {
        f_aarch64_integer_pac_pacia_dp_1src(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001001"))) && ((iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111"))) && (f_aarch64_integer_pac_pacib_dp_1src_decode_test(v_enc))))))) {
        f_aarch64_integer_pac_pacib_dp_1src(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001010"))) && ((iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111"))) && (f_aarch64_integer_pac_pacda_dp_1src_decode_test(v_enc))))))) {
        f_aarch64_integer_pac_pacda_dp_1src(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001011"))) && ((iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111"))) && (f_aarch64_integer_pac_pacdb_dp_1src_decode_test(v_enc))))))) {
        f_aarch64_integer_pac_pacdb_dp_1src(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001100"))) && ((iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111"))) && (f_aarch64_integer_pac_autia_dp_1src_decode_test(v_enc))))))) {
        f_aarch64_integer_pac_autia_dp_1src(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001101"))) && ((iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111"))) && (f_aarch64_integer_pac_autib_dp_1src_decode_test(v_enc))))))) {
        f_aarch64_integer_pac_autib_dp_1src(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001110"))) && ((iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111"))) && (f_aarch64_integer_pac_autda_dp_1src_decode_test(v_enc))))))) {
        f_aarch64_integer_pac_autda_dp_1src(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001111"))) && ((iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111"))) && (f_aarch64_integer_pac_autdb_dp_1src_decode_test(v_enc))))))) {
        f_aarch64_integer_pac_autdb_dp_1src(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "010000"))) && ((iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111"))) && (f_aarch64_integer_pac_strip_dp_1src_decode_test(v_enc))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "010001"))) && ((iface.f_eq_bits(v_Rn, iface.bits_lit(5U, "11111"))) && (f_aarch64_integer_pac_strip_dp_1src_decode_test(v_enc))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "111110")), iface.bits_lit(6U, "010010"))) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "111100")), iface.bits_lit(6U, "010100"))) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00001"))) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "111000")), iface.bits_lit(6U, "011000"))) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1000")), iface.bits_lit(4U, "0000"))) && ((true) && ((true) && (true))))))))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opc = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("2"));
      const auto v_N = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1"));
      const auto v_imm6 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6"));
      if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_imm6, iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "100000")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_integer_logical_shiftedreg_decode_test(v_enc)))))) {
        f_aarch64_integer_logical_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_integer_logical_shiftedreg_decode_test(v_enc)))))) {
        f_aarch64_integer_logical_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_integer_logical_shiftedreg_decode_test(v_enc)))))) {
        f_aarch64_integer_logical_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_integer_logical_shiftedreg_decode_test(v_enc)))))) {
        f_aarch64_integer_logical_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_integer_logical_shiftedreg_decode_test(v_enc)))))) {
        f_aarch64_integer_logical_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_integer_logical_shiftedreg_decode_test(v_enc)))))) {
        f_aarch64_integer_logical_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_integer_logical_shiftedreg_decode_test(v_enc)))))) {
        f_aarch64_integer_logical_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_integer_logical_shiftedreg_decode_test(v_enc)))))) {
        f_aarch64_integer_logical_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_integer_logical_shiftedreg_decode_test(v_enc)))))) {
        f_aarch64_integer_logical_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_integer_logical_shiftedreg_decode_test(v_enc)))))) {
        f_aarch64_integer_logical_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_integer_logical_shiftedreg_decode_test(v_enc)))))) {
        f_aarch64_integer_logical_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_integer_logical_shiftedreg_decode_test(v_enc)))))) {
        f_aarch64_integer_logical_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_integer_logical_shiftedreg_decode_test(v_enc)))))) {
        f_aarch64_integer_logical_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_integer_logical_shiftedreg_decode_test(v_enc)))))) {
        f_aarch64_integer_logical_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "0"))) && ((true) && (f_aarch64_integer_logical_shiftedreg_decode_test(v_enc)))))) {
        f_aarch64_integer_logical_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opc, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_N, iface.bits_lit(1U, "1"))) && ((true) && (f_aarch64_integer_logical_shiftedreg_decode_test(v_enc)))))) {
        f_aarch64_integer_logical_shiftedreg(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "1000"))) && ((true) && ((true) && (true))))))))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_op = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_shift = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_imm6 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6"));
      if ((true) && ((true) && ((true) && ((iface.f_eq_bits(v_shift, iface.bits_lit(2U, "11"))) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((true) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_imm6, iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "100000"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((true) && ((true) && (f_aarch64_integer_arithmetic_add_sub_shiftedreg_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_add_sub_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((true) && ((true) && (f_aarch64_integer_arithmetic_add_sub_shiftedreg_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_add_sub_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((true) && ((true) && (f_aarch64_integer_arithmetic_add_sub_shiftedreg_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_add_sub_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((true) && ((true) && (f_aarch64_integer_arithmetic_add_sub_shiftedreg_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_add_sub_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((true) && ((true) && (f_aarch64_integer_arithmetic_add_sub_shiftedreg_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_add_sub_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((true) && ((true) && (f_aarch64_integer_arithmetic_add_sub_shiftedreg_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_add_sub_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((true) && ((true) && (f_aarch64_integer_arithmetic_add_sub_shiftedreg_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_add_sub_shiftedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((true) && ((true) && (f_aarch64_integer_arithmetic_add_sub_shiftedreg_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_add_sub_shiftedreg(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "1001"))) && ((true) && ((true) && (true))))))))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_op = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opt = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_imm3 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("3"));
      if ((true) && ((true) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_imm3, iface.bits_lit(3U, "101")), iface.bits_lit(3U, "101"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_imm3, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "110"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_opt, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_opt, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opt, iface.bits_lit(2U, "00"))) && ((true) && (f_aarch64_integer_arithmetic_add_sub_extendedreg_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_add_sub_extendedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opt, iface.bits_lit(2U, "00"))) && ((true) && (f_aarch64_integer_arithmetic_add_sub_extendedreg_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_add_sub_extendedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opt, iface.bits_lit(2U, "00"))) && ((true) && (f_aarch64_integer_arithmetic_add_sub_extendedreg_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_add_sub_extendedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opt, iface.bits_lit(2U, "00"))) && ((true) && (f_aarch64_integer_arithmetic_add_sub_extendedreg_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_add_sub_extendedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opt, iface.bits_lit(2U, "00"))) && ((true) && (f_aarch64_integer_arithmetic_add_sub_extendedreg_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_add_sub_extendedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opt, iface.bits_lit(2U, "00"))) && ((true) && (f_aarch64_integer_arithmetic_add_sub_extendedreg_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_add_sub_extendedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opt, iface.bits_lit(2U, "00"))) && ((true) && (f_aarch64_integer_arithmetic_add_sub_extendedreg_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_add_sub_extendedreg(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opt, iface.bits_lit(2U, "00"))) && ((true) && (f_aarch64_integer_arithmetic_add_sub_extendedreg_decode_test(v_enc))))))) {
        f_aarch64_integer_arithmetic_add_sub_extendedreg(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "000000"))) && (true))))))))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_op = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_arithmetic_add_sub_carry_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_add_sub_carry(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (f_aarch64_integer_arithmetic_add_sub_carry_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_add_sub_carry(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_arithmetic_add_sub_carry_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_add_sub_carry(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (f_aarch64_integer_arithmetic_add_sub_carry_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_add_sub_carry(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_arithmetic_add_sub_carry_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_add_sub_carry(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (f_aarch64_integer_arithmetic_add_sub_carry_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_add_sub_carry(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_arithmetic_add_sub_carry_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_add_sub_carry(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (f_aarch64_integer_arithmetic_add_sub_carry_decode_test(v_enc))))) {
        f_aarch64_integer_arithmetic_add_sub_carry(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "011111")), iface.bits_lit(6U, "000001"))) && (true))))))))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_op = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_o2 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("4"), /*wd*/ iface.bigint_lit("1"));
      if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((true) && ((true) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_flags_rmif_decode_test(v_enc)))))) {
        f_aarch64_integer_flags_rmif(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((true) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "001111")), iface.bits_lit(6U, "000010"))) && (true))))))))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_op = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opcode2 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("6"));
      const auto v_sz = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1"));
      const auto v_o3 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("4"), /*wd*/ iface.bigint_lit("1"));
      const auto v_mask = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("4"));
      if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((true) && ((true) && ((true) && (true))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_opcode2, iface.bits_lit(6U, "000000")))) && ((true) && ((true) && (true))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(6U, "000000"))) && ((true) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && (! (iface.f_eq_bits(v_mask, iface.bits_lit(4U, "1101")))))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(6U, "000000"))) && ((true) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))) && (true))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(6U, "000000"))) && ((iface.f_eq_bits(v_sz, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_mask, iface.bits_lit(4U, "1101"))) && (f_aarch64_integer_flags_setf_decode_test(v_enc))))))))) {
        f_aarch64_integer_flags_setf(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(6U, "000000"))) && ((iface.f_eq_bits(v_sz, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_mask, iface.bits_lit(4U, "1101"))) && (f_aarch64_integer_flags_setf_decode_test(v_enc))))))))) {
        f_aarch64_integer_flags_setf(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((true) && ((true) && ((true) && ((true) && (true))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((true) && ((true) && ((true) && ((true) && ((true) && (true))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0010"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "000010")), iface.bits_lit(6U, "000000"))) && (true))))))))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_op = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_o2 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("1"));
      const auto v_o3 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("4"), /*wd*/ iface.bigint_lit("1"));
      if ((true) && ((true) && ((true) && ((true) && (iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_conditional_compare_register_decode_test(v_enc))))))) {
        f_aarch64_integer_conditional_compare_register(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_conditional_compare_register_decode_test(v_enc))))))) {
        f_aarch64_integer_conditional_compare_register(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_conditional_compare_register_decode_test(v_enc))))))) {
        f_aarch64_integer_conditional_compare_register(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_conditional_compare_register_decode_test(v_enc))))))) {
        f_aarch64_integer_conditional_compare_register(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0010"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6")), iface.bits_lit(6U, "000010")), iface.bits_lit(6U, "000010"))) && (true))))))))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_op = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_o2 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("1"));
      const auto v_o3 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("4"), /*wd*/ iface.bigint_lit("1"));
      if ((true) && ((true) && ((true) && ((true) && (iface.f_eq_bits(v_o3, iface.bits_lit(1U, "1"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_conditional_compare_immediate_decode_test(v_enc))))))) {
        f_aarch64_integer_conditional_compare_immediate(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_conditional_compare_immediate_decode_test(v_enc))))))) {
        f_aarch64_integer_conditional_compare_immediate(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_conditional_compare_immediate_decode_test(v_enc))))))) {
        f_aarch64_integer_conditional_compare_immediate(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o3, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_conditional_compare_immediate_decode_test(v_enc))))))) {
        f_aarch64_integer_conditional_compare_immediate(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100"))) && ((true) && ((true) && (true))))))))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_op = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_op2 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2"));
      if ((true) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_op2, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "00"))) && (f_aarch64_integer_conditional_select_decode_test(v_enc)))))) {
        f_aarch64_integer_conditional_select(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "01"))) && (f_aarch64_integer_conditional_select_decode_test(v_enc)))))) {
        f_aarch64_integer_conditional_select(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "00"))) && (f_aarch64_integer_conditional_select_decode_test(v_enc)))))) {
        f_aarch64_integer_conditional_select(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "01"))) && (f_aarch64_integer_conditional_select_decode_test(v_enc)))))) {
        f_aarch64_integer_conditional_select(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "00"))) && (f_aarch64_integer_conditional_select_decode_test(v_enc)))))) {
        f_aarch64_integer_conditional_select(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "01"))) && (f_aarch64_integer_conditional_select_decode_test(v_enc)))))) {
        f_aarch64_integer_conditional_select(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "00"))) && (f_aarch64_integer_conditional_select_decode_test(v_enc)))))) {
        f_aarch64_integer_conditional_select(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "01"))) && (f_aarch64_integer_conditional_select_decode_test(v_enc)))))) {
        f_aarch64_integer_conditional_select(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1000")), iface.bits_lit(4U, "1000"))) && ((true) && ((true) && (true))))))))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_op54 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("2"));
      const auto v_op31 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("3"));
      const auto v_o0 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("1"));
      if ((true) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "010"))) && (iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "011"))) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "100"))) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "110"))) && (iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "111"))) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "01"))) && ((true) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_op54, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((true) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "000"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_arithmetic_mul_uniform_add_sub_decode_test(v_enc)))))) {
        f_aarch64_integer_arithmetic_mul_uniform_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "000"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && (f_aarch64_integer_arithmetic_mul_uniform_add_sub_decode_test(v_enc)))))) {
        f_aarch64_integer_arithmetic_mul_uniform_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "001"))) && (iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "001"))) && (iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "010"))) && (iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "101"))) && (iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "101"))) && (iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "110"))) && (iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "000"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_arithmetic_mul_uniform_add_sub_decode_test(v_enc)))))) {
        f_aarch64_integer_arithmetic_mul_uniform_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "000"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && (f_aarch64_integer_arithmetic_mul_uniform_add_sub_decode_test(v_enc)))))) {
        f_aarch64_integer_arithmetic_mul_uniform_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "001"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_arithmetic_mul_widening_32_64_decode_test(v_enc)))))) {
        f_aarch64_integer_arithmetic_mul_widening_32_64(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "001"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && (f_aarch64_integer_arithmetic_mul_widening_32_64_decode_test(v_enc)))))) {
        f_aarch64_integer_arithmetic_mul_widening_32_64(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "010"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_arithmetic_mul_widening_64_128hi_decode_test(v_enc)))))) {
        f_aarch64_integer_arithmetic_mul_widening_64_128hi(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_arithmetic_mul_widening_32_64_decode_test(v_enc)))))) {
        f_aarch64_integer_arithmetic_mul_widening_32_64(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "101"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && (f_aarch64_integer_arithmetic_mul_widening_32_64_decode_test(v_enc)))))) {
        f_aarch64_integer_arithmetic_mul_widening_32_64(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op54, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op31, iface.bits_lit(3U, "110"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && (f_aarch64_integer_arithmetic_mul_widening_64_128hi_decode_test(v_enc)))))) {
        f_aarch64_integer_arithmetic_mul_widening_64_128hi(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } // if
  } else if ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("24"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "01110")), iface.bits_lit(5U, "01110"))) && (true))) {
    if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0111")), iface.bits_lit(4U, "0101"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "110000011")), iface.bits_lit(9U, "000000010"))) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0010"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0111")), iface.bits_lit(4U, "0101"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "110000011")), iface.bits_lit(9U, "000000010"))) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0111")), iface.bits_lit(4U, "0101"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "110000011")), iface.bits_lit(9U, "000000010"))) && (true)))))) {
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("5"));
      if ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "01000")), iface.bits_lit(5U, "01000")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11100")), iface.bits_lit(5U, "00000")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "10000")), iface.bits_lit(5U, "10000")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))) && (true)) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00100"))) && (f_aarch64_vector_crypto_aes_round_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_aes_round(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00101"))) && (f_aarch64_vector_crypto_aes_round_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_aes_round(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00110"))) && (f_aarch64_vector_crypto_aes_mix_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_aes_mix(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00111"))) && (f_aarch64_vector_crypto_aes_mix_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_aes_mix(v_enc);
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (true)) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0101"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000100011")), iface.bits_lit(9U, "000000000"))) && (true)))))) {
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3"));
      if ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))) && (true)) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_vector_crypto_sha3op_sha1_hash_choose_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_sha3op_sha1_hash_choose(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_vector_crypto_sha3op_sha1_hash_parity_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_sha3op_sha1_hash_parity(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && (f_aarch64_vector_crypto_sha3op_sha1_hash_majority_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_sha3op_sha1_hash_majority(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && (f_aarch64_vector_crypto_sha3op_sha1_sched0_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_sha3op_sha1_sched0(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && (f_aarch64_vector_crypto_sha3op_sha256_hash_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_sha3op_sha256_hash(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && (f_aarch64_vector_crypto_sha3op_sha256_hash_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_sha3op_sha256_hash(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && (f_aarch64_vector_crypto_sha3op_sha256_sched1_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_sha3op_sha256_sched1(v_enc);
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (true)) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0101"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000100011")), iface.bits_lit(9U, "000000010"))) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0101"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0111")), iface.bits_lit(4U, "0101"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "110000011")), iface.bits_lit(9U, "000000010"))) && (true)))))) {
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("5"));
      if ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "00100")), iface.bits_lit(5U, "00100")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "01000")), iface.bits_lit(5U, "01000")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "10000")), iface.bits_lit(5U, "10000")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))) && (true)) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00000"))) && (f_aarch64_vector_crypto_sha2op_sha1_hash_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_sha2op_sha1_hash(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00001"))) && (f_aarch64_vector_crypto_sha2op_sha1_sched1_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_sha2op_sha1_sched1(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00010"))) && (f_aarch64_vector_crypto_sha2op_sha256_sched0_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_sha2op_sha256_sched0(v_enc);
      } else if ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00011")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (true)) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0110"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0111")), iface.bits_lit(4U, "0101"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "110000011")), iface.bits_lit(9U, "000000010"))) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0111"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000100001")), iface.bits_lit(9U, "000000000"))) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0111"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0111")), iface.bits_lit(4U, "0101"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "110000011")), iface.bits_lit(9U, "000000010"))) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "0101"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000100001")), iface.bits_lit(9U, "000000001"))) && (true)))))) {
      const auto v_op = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_imm5 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"));
      const auto v_imm4 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("4"));
      if ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_imm4, iface.bits_lit(4U, "0001")), iface.bits_lit(4U, "0001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_imm4, iface.bits_lit(4U, "0010")), iface.bits_lit(4U, "0010"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_imm4, iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_imm4, iface.bits_lit(4U, "0000"))) && (f_aarch64_vector_transfer_vector_cpy_dup_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_transfer_vector_cpy_dup_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_imm4, iface.bits_lit(4U, "1000")), iface.bits_lit(4U, "1000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_imm5, iface.bits_lit(5U, "01111")), iface.bits_lit(5U, "00000"))) && (iface.f_eq_bits(v_imm4, iface.bits_lit(4U, "0000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((true) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "0101"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000100001")), iface.bits_lit(9U, "000000001"))) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "0101"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0111"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "110000011")), iface.bits_lit(9U, "000000010"))) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "0101"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "1000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000110001")), iface.bits_lit(9U, "000000001"))) && (true)))))) {
      const auto v_U = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_a = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("3"));
      if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_fp16_extended_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_fp16_extended_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && (f_aarch64_vector_arithmetic_binary_uniform_recps_fp16_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_recps_fp16_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && (f_aarch64_vector_arithmetic_binary_uniform_rsqrts_fp16_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_rsqrts_fp16_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && (f_aarch64_vector_arithmetic_binary_uniform_sub_fp16_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_sub_fp16_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "0101"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "1000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000110001")), iface.bits_lit(9U, "000010001"))) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "0101"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1111"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "110000011")), iface.bits_lit(9U, "000000010"))) && (true)))))) {
      const auto v_U = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_a = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("5"));
      if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11000")), iface.bits_lit(5U, "00000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11100")), iface.bits_lit(5U, "01000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11000")), iface.bits_lit(5U, "10000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11110")), iface.bits_lit(5U, "11000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11100")), iface.bits_lit(5U, "01100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_float_tieaway_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_float_tieaway_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_int_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_int_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))) && (f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01101"))) && (f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01110"))) && (f_aarch64_vector_arithmetic_unary_cmp_fp16_lessthan_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_fp16_lessthan_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_unary_special_recip_fp16_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_special_recip_fp16_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))) && (f_aarch64_vector_arithmetic_unary_special_frecpx_fp16_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_special_frecpx_fp16(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_float_tieaway_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_float_tieaway_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_int_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_int_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))) && (f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01101"))) && (f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_unary_special_sqrt_est_fp16_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_special_sqrt_est_fp16_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "0101"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000100001")), iface.bits_lit(9U, "000100000"))) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "0101"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000100001")), iface.bits_lit(9U, "000100001"))) && (true)))))) {
      const auto v_U = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("4"));
      if ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1110")), iface.bits_lit(4U, "0010")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "0100")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1000")), iface.bits_lit(4U, "1000")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0000")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0000"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_accum_sisd_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_accum_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_accum_sisd_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_accum_sisd(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "0101"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0111")), iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "110000011")), iface.bits_lit(9U, "000000010"))) && (true)))))) {
      const auto v_U = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("5"));
      if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11110")), iface.bits_lit(5U, "00000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00010"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11110")), iface.bits_lit(5U, "00100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11110")), iface.bits_lit(5U, "10000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11110")), iface.bits_lit(5U, "11000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11100")), iface.bits_lit(5U, "01100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00011"))) && (f_aarch64_vector_arithmetic_unary_add_saturating_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_add_saturating_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00111"))) && (f_aarch64_vector_arithmetic_unary_diff_neg_sat_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_diff_neg_sat_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01000"))) && (f_aarch64_vector_arithmetic_unary_cmp_int_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_int_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01001"))) && (f_aarch64_vector_arithmetic_unary_cmp_int_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_int_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01010"))) && (f_aarch64_vector_arithmetic_unary_cmp_int_lessthan_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_int_lessthan_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01011"))) && (f_aarch64_vector_arithmetic_unary_diff_neg_int_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_diff_neg_int_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10010"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10100"))) && (f_aarch64_vector_arithmetic_unary_extract_sat_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_extract_sat_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))) && (f_aarch64_vector_arithmetic_unary_float_conv_float_tieaway_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_float_tieaway_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_unary_float_conv_int_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_int_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))) && (f_aarch64_vector_arithmetic_unary_cmp_float_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_float_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01101"))) && (f_aarch64_vector_arithmetic_unary_cmp_float_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_float_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01110"))) && (f_aarch64_vector_arithmetic_unary_cmp_float_lessthan_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_float_lessthan_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_unary_special_recip_float_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_special_recip_float_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))) && (f_aarch64_vector_arithmetic_unary_special_frecpx_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_special_frecpx(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00011"))) && (f_aarch64_vector_arithmetic_unary_add_saturating_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_add_saturating_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00111"))) && (f_aarch64_vector_arithmetic_unary_diff_neg_sat_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_diff_neg_sat_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01000"))) && (f_aarch64_vector_arithmetic_unary_cmp_int_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_int_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01001"))) && (f_aarch64_vector_arithmetic_unary_cmp_int_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_int_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01010"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01011"))) && (f_aarch64_vector_arithmetic_unary_diff_neg_int_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_diff_neg_int_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10010"))) && (f_aarch64_vector_arithmetic_unary_extract_sqxtun_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_extract_sqxtun_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10100"))) && (f_aarch64_vector_arithmetic_unary_extract_sat_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_extract_sat_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10110"))) && (f_aarch64_vector_arithmetic_unary_float_xtn_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_xtn_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))) && (f_aarch64_vector_arithmetic_unary_float_conv_float_tieaway_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_float_tieaway_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_unary_float_conv_int_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_int_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))) && (f_aarch64_vector_arithmetic_unary_cmp_float_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_float_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01101"))) && (f_aarch64_vector_arithmetic_unary_cmp_float_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_float_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_unary_special_sqrt_est_float_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_special_sqrt_est_float_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "0101"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0111")), iface.bits_lit(4U, "0110"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "110000011")), iface.bits_lit(9U, "000000010"))) && (true)))))) {
      const auto v_U = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("5"));
      if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11000")), iface.bits_lit(5U, "00000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11100")), iface.bits_lit(5U, "01000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11000")), iface.bits_lit(5U, "10000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11110")), iface.bits_lit(5U, "11000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11100")), iface.bits_lit(5U, "11100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_reduce_add_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_add_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))) && (f_aarch64_vector_reduce_fp16_maxnm_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_fp16_maxnm_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01101"))) && (f_aarch64_vector_reduce_fp16_add_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_fp16_add_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))) && (f_aarch64_vector_reduce_fp16_max_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_fp16_max_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))) && (f_aarch64_vector_reduce_fp16_maxnm_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_fp16_maxnm_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))) && (f_aarch64_vector_reduce_fp16_max_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_fp16_max_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))) && (f_aarch64_vector_reduce_fp_maxnm_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_fp_maxnm_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01101"))) && (f_aarch64_vector_reduce_fp_add_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_fp_add_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))) && (f_aarch64_vector_reduce_fp_max_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_fp_max_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))) && (f_aarch64_vector_reduce_fp_maxnm_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_fp_maxnm_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))) && (f_aarch64_vector_reduce_fp_max_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_fp_max_sisd(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "0101"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "100000011")), iface.bits_lit(9U, "100000010"))) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "0101"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "010000011")), iface.bits_lit(9U, "010000010"))) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "0101"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000000011")), iface.bits_lit(9U, "000000000"))) && (true)))))) {
      const auto v_U = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("4"));
      if ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "0000")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "0100")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1000")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1010")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1100")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1110")), iface.bits_lit(4U, "1110")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1001"))) && (f_aarch64_vector_arithmetic_binary_disparate_mul_dmacc_sisd_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_mul_dmacc_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1011"))) && (f_aarch64_vector_arithmetic_binary_disparate_mul_dmacc_sisd_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_mul_dmacc_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1101"))) && (f_aarch64_vector_arithmetic_binary_disparate_mul_double_sisd_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_mul_double_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1001")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1011")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1101")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "0101"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000000001")), iface.bits_lit(9U, "000000001"))) && (true)))))) {
      const auto v_U = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("5"));
      if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11110")), iface.bits_lit(5U, "00010"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11100")), iface.bits_lit(5U, "01100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11110")), iface.bits_lit(5U, "10010"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00001"))) && (f_aarch64_vector_arithmetic_binary_uniform_add_saturating_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_add_saturating_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00101"))) && (f_aarch64_vector_arithmetic_binary_uniform_sub_saturating_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_sub_saturating_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00110"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_int_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_int_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00111"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_int_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_int_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01000"))) && (f_aarch64_vector_arithmetic_binary_uniform_shift_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_shift_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01001"))) && (f_aarch64_vector_arithmetic_binary_uniform_shift_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_shift_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01010"))) && (f_aarch64_vector_arithmetic_binary_uniform_shift_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_shift_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01011"))) && (f_aarch64_vector_arithmetic_binary_uniform_shift_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_shift_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10000"))) && (f_aarch64_vector_arithmetic_binary_uniform_add_wrapping_single_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_add_wrapping_single_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10001"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_bitwise_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_bitwise_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10110"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_fp_extended_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_fp_extended_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))) && (f_aarch64_vector_arithmetic_binary_uniform_recps_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_recps_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))) && (f_aarch64_vector_arithmetic_binary_uniform_rsqrts_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_rsqrts_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00001"))) && (f_aarch64_vector_arithmetic_binary_uniform_add_saturating_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_add_saturating_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00101"))) && (f_aarch64_vector_arithmetic_binary_uniform_sub_saturating_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_sub_saturating_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00110"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_int_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_int_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00111"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_int_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_int_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01000"))) && (f_aarch64_vector_arithmetic_binary_uniform_shift_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_shift_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01001"))) && (f_aarch64_vector_arithmetic_binary_uniform_shift_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_shift_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01010"))) && (f_aarch64_vector_arithmetic_binary_uniform_shift_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_shift_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01011"))) && (f_aarch64_vector_arithmetic_binary_uniform_shift_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_shift_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10000"))) && (f_aarch64_vector_arithmetic_binary_uniform_add_wrapping_single_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_add_wrapping_single_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10001"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_bitwise_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_bitwise_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10110"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_binary_uniform_sub_fp_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_sub_fp_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "0101"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000000001")), iface.bits_lit(9U, "000000001"))) && (true)))))) {
      const auto v_U = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_immh = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("5"));
      if ((true) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11100")), iface.bits_lit(5U, "10100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11100")), iface.bits_lit(5U, "11000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000"))) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00000"))) && (f_aarch64_vector_shift_right_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_right_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00010"))) && (f_aarch64_vector_shift_right_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_right_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00100"))) && (f_aarch64_vector_shift_right_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_right_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00110"))) && (f_aarch64_vector_shift_right_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_right_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01010"))) && (f_aarch64_vector_shift_left_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_left_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01110"))) && (f_aarch64_vector_shift_left_sat_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_left_sat_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10010"))) && (f_aarch64_vector_shift_right_narrow_uniform_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_right_narrow_uniform_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10011"))) && (f_aarch64_vector_shift_right_narrow_uniform_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_right_narrow_uniform_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))) && (f_aarch64_vector_shift_conv_int_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_conv_int_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))) && (f_aarch64_vector_shift_conv_float_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_conv_float_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00000"))) && (f_aarch64_vector_shift_right_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_right_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00010"))) && (f_aarch64_vector_shift_right_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_right_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00100"))) && (f_aarch64_vector_shift_right_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_right_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00110"))) && (f_aarch64_vector_shift_right_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_right_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01000"))) && (f_aarch64_vector_shift_right_insert_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_right_insert_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01010"))) && (f_aarch64_vector_shift_left_insert_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_left_insert_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))) && (f_aarch64_vector_shift_left_sat_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_left_sat_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01110"))) && (f_aarch64_vector_shift_left_sat_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_left_sat_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10000"))) && (f_aarch64_vector_shift_right_narrow_nonuniform_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_right_narrow_nonuniform_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10001"))) && (f_aarch64_vector_shift_right_narrow_nonuniform_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_right_narrow_nonuniform_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10010"))) && (f_aarch64_vector_shift_right_narrow_uniform_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_right_narrow_uniform_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10011"))) && (f_aarch64_vector_shift_right_narrow_uniform_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_right_narrow_uniform_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))) && (f_aarch64_vector_shift_conv_int_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_conv_int_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((! (iface.f_eq_bits(v_immh, iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))) && (f_aarch64_vector_shift_conv_float_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_shift_conv_float_sisd(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "0101"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000000001")), iface.bits_lit(9U, "000000001"))) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "0101"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000000001")), iface.bits_lit(9U, "000000000"))) && (true)))))) {
      const auto v_U = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("4"));
      if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0010"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1010"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0011"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_double_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_double_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0111"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_double_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_double_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1011"))) && (f_aarch64_vector_arithmetic_binary_element_mul_double_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_double_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1100"))) && (f_aarch64_vector_arithmetic_binary_element_mul_high_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_high_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1101"))) && (f_aarch64_vector_arithmetic_binary_element_mul_high_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_high_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_fp16_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_fp16_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_fp16_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_fp16_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1001"))) && (f_aarch64_vector_arithmetic_binary_element_mul_fp16_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_fp16_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_fp_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_fp_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_fp_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_fp_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1001"))) && (f_aarch64_vector_arithmetic_binary_element_mul_fp_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_fp_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1101"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_high_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_high_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1111"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_high_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_high_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1001"))) && (f_aarch64_vector_arithmetic_binary_element_mul_fp16_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_fp16_sisd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1001"))) && (f_aarch64_vector_arithmetic_binary_element_mul_fp_sisd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_fp_sisd(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1011")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000100011")), iface.bits_lit(9U, "000000000"))) && (true)))))) {
      const auto v_op2 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_len = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("13"), /*wd*/ iface.bigint_lit("2"));
      const auto v_op = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("1"));
      if ((iface.f_eq_bits(iface.f_and_bits(v_op2, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))) && ((true) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_len, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && (f_aarch64_vector_transfer_vector_table_decode_test(v_enc))))) {
        f_aarch64_vector_transfer_vector_table(v_enc);
      } else if ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_len, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && (f_aarch64_vector_transfer_vector_table_decode_test(v_enc))))) {
        f_aarch64_vector_transfer_vector_table(v_enc);
      } else if ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_len, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && (f_aarch64_vector_transfer_vector_table_decode_test(v_enc))))) {
        f_aarch64_vector_transfer_vector_table(v_enc);
      } else if ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_len, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && (f_aarch64_vector_transfer_vector_table_decode_test(v_enc))))) {
        f_aarch64_vector_transfer_vector_table(v_enc);
      } else if ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_len, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && (f_aarch64_vector_transfer_vector_table_decode_test(v_enc))))) {
        f_aarch64_vector_transfer_vector_table(v_enc);
      } else if ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_len, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && (f_aarch64_vector_transfer_vector_table_decode_test(v_enc))))) {
        f_aarch64_vector_transfer_vector_table(v_enc);
      } else if ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_len, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && (f_aarch64_vector_transfer_vector_table_decode_test(v_enc))))) {
        f_aarch64_vector_transfer_vector_table(v_enc);
      } else if ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_len, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && (f_aarch64_vector_transfer_vector_table_decode_test(v_enc))))) {
        f_aarch64_vector_transfer_vector_table(v_enc);
      } else if ((iface.f_eq_bits(iface.f_and_bits(v_op2, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((true) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1011")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000100011")), iface.bits_lit(9U, "000000010"))) && (true)))))) {
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3"));
      if (iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_vector_transfer_vector_permute_unzip_decode_test(v_enc))) {
        f_aarch64_vector_transfer_vector_permute_unzip(v_enc);
      } else if ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && (f_aarch64_vector_transfer_vector_permute_transpose_decode_test(v_enc))) {
        f_aarch64_vector_transfer_vector_permute_transpose(v_enc);
      } else if ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && (f_aarch64_vector_transfer_vector_permute_zip_decode_test(v_enc))) {
        f_aarch64_vector_transfer_vector_permute_zip(v_enc);
      } else if (iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && (f_aarch64_vector_transfer_vector_permute_unzip_decode_test(v_enc))) {
        f_aarch64_vector_transfer_vector_permute_unzip(v_enc);
      } else if ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && (f_aarch64_vector_transfer_vector_permute_transpose_decode_test(v_enc))) {
        f_aarch64_vector_transfer_vector_permute_transpose(v_enc);
      } else if ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && (f_aarch64_vector_transfer_vector_permute_zip_decode_test(v_enc))) {
        f_aarch64_vector_transfer_vector_permute_zip(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1011")), iface.bits_lit(4U, "0010"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000100001")), iface.bits_lit(9U, "000000000"))) && (true)))))) {
      const auto v_op2 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      if (iface.f_eq_bits(iface.f_and_bits(v_op2, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_op2, iface.bits_lit(2U, "00"))) && (f_aarch64_vector_transfer_vector_extract_decode_test(v_enc))) {
        f_aarch64_vector_transfer_vector_extract(v_enc);
      } else if (iface.f_eq_bits(iface.f_and_bits(v_op2, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000100001")), iface.bits_lit(9U, "000000001"))) && (true)))))) {
      const auto v_Q = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"));
      const auto v_op = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_imm5 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"));
      const auto v_imm4 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("4"));
      if ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_imm5, iface.bits_lit(5U, "01111")), iface.bits_lit(5U, "00000"))) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_imm4, iface.bits_lit(4U, "0000"))) && (f_aarch64_vector_transfer_vector_cpy_dup_simd_decode_test(v_enc)))))) {
        f_aarch64_vector_transfer_vector_cpy_dup_simd(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_imm4, iface.bits_lit(4U, "0001"))) && (f_aarch64_vector_transfer_integer_dup_decode_test(v_enc)))))) {
        f_aarch64_vector_transfer_integer_dup(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(v_imm4, iface.bits_lit(4U, "0010")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(v_imm4, iface.bits_lit(4U, "0100")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(v_imm4, iface.bits_lit(4U, "0110")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_imm4, iface.bits_lit(4U, "1000")), iface.bits_lit(4U, "1000")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(v_imm4, iface.bits_lit(4U, "0011")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_imm4, iface.bits_lit(4U, "0101"))) && (f_aarch64_vector_transfer_integer_move_signed_decode_test(v_enc)))))) {
        f_aarch64_vector_transfer_integer_move_signed(v_enc);
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_imm4, iface.bits_lit(4U, "0111"))) && (f_aarch64_vector_transfer_integer_move_unsigned_decode_test(v_enc)))))) {
        f_aarch64_vector_transfer_integer_move_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((true) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_imm4, iface.bits_lit(4U, "0011"))) && (f_aarch64_vector_transfer_integer_insert_decode_test(v_enc)))))) {
        f_aarch64_vector_transfer_integer_insert(v_enc);
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_imm4, iface.bits_lit(4U, "0101"))) && (f_aarch64_vector_transfer_integer_move_signed_decode_test(v_enc)))))) {
        f_aarch64_vector_transfer_integer_move_signed(v_enc);
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_imm5, iface.bits_lit(5U, "01111")), iface.bits_lit(5U, "01000"))) && ((iface.f_eq_bits(v_imm4, iface.bits_lit(4U, "0111"))) && (f_aarch64_vector_transfer_integer_move_unsigned_decode_test(v_enc)))))) {
        f_aarch64_vector_transfer_integer_move_unsigned(v_enc);
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((true) && ((true) && (f_aarch64_vector_transfer_vector_insert_decode_test(v_enc)))))) {
        f_aarch64_vector_transfer_vector_insert(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000100001")), iface.bits_lit(9U, "000000001"))) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0111"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "110000011")), iface.bits_lit(9U, "000000010"))) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "1000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000110001")), iface.bits_lit(9U, "000000001"))) && (true)))))) {
      const auto v_U = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_a = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("3"));
      if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_2008_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_2008(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_fp16_fused_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_fp16_fused(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && (f_aarch64_vector_arithmetic_binary_uniform_add_fp16_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_add_fp16(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_fp16_extended_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_fp16_extended_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_1985_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_1985(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && (f_aarch64_vector_arithmetic_binary_uniform_recps_fp16_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_recps_fp16_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_2008_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_2008(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_fp16_fused_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_fp16_fused(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && (f_aarch64_vector_arithmetic_binary_uniform_sub_fp16_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_sub_fp16_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_1985_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_1985(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && (f_aarch64_vector_arithmetic_binary_uniform_rsqrts_fp16_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_rsqrts_fp16_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_2008_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_2008(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && (f_aarch64_vector_arithmetic_binary_uniform_add_fp16_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_add_fp16(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_fp16_product_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_fp16_product(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_1985_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_1985(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && (f_aarch64_vector_arithmetic_binary_uniform_div_fp16_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_div_fp16(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_2008_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_2008(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && (f_aarch64_vector_arithmetic_binary_uniform_sub_fp16_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_sub_fp16_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_1985_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_1985(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "1000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000110001")), iface.bits_lit(9U, "000010001"))) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1111"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "110000011")), iface.bits_lit(9U, "000000010"))) && (true)))))) {
      const auto v_U = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_a = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("5"));
      if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11000")), iface.bits_lit(5U, "00000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11100")), iface.bits_lit(5U, "01000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11000")), iface.bits_lit(5U, "10000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11100")), iface.bits_lit(5U, "01100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11000"))) && (f_aarch64_vector_arithmetic_unary_fp16_round_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_round(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11001"))) && (f_aarch64_vector_arithmetic_unary_fp16_round_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_round(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_float_tieaway_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_float_tieaway_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_int_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_int_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))) && (f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01101"))) && (f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01110"))) && (f_aarch64_vector_arithmetic_unary_cmp_fp16_lessthan_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_fp16_lessthan_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))) && (f_aarch64_vector_arithmetic_unary_diff_neg_fp16_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_diff_neg_fp16(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11000"))) && (f_aarch64_vector_arithmetic_unary_fp16_round_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_round(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11001"))) && (f_aarch64_vector_arithmetic_unary_fp16_round_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_round(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_unary_special_recip_fp16_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_special_recip_fp16_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11000"))) && (f_aarch64_vector_arithmetic_unary_fp16_round_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_round(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11001"))) && (f_aarch64_vector_arithmetic_unary_fp16_round_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_round(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_float_tieaway_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_float_tieaway_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_int_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_int_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))) && (f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01101"))) && (f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))) && (f_aarch64_vector_arithmetic_unary_diff_neg_fp16_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_diff_neg_fp16(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11001"))) && (f_aarch64_vector_arithmetic_unary_fp16_round_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_round(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_unary_special_sqrt_est_fp16_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_special_sqrt_est_fp16_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_a, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))) && (f_aarch64_vector_arithmetic_unary_special_sqrt_fp16_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_special_sqrt_fp16(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000100001")), iface.bits_lit(9U, "000100000"))) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000100001")), iface.bits_lit(9U, "000100001"))) && (true)))))) {
      const auto v_Q = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"));
      const auto v_U = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("4"));
      if ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0011")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0011")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0000")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0010"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_int_dotp_decode_test(v_enc)))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_int_dotp(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1000")), iface.bits_lit(4U, "1000")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0011"))) && (f_aarch64_vector_arithmetic_binary_uniform_mat_mul_int_usdot_decode_test(v_enc)))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mat_mul_int_usdot(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0000"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_accum_simd_decode_test(v_enc)))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_accum_simd(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_accum_simd_decode_test(v_enc)))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_accum_simd(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0010"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_int_dotp_decode_test(v_enc)))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_int_dotp(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "1000"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_fp_complex_decode_test(v_enc)))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_fp_complex(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "1100"))) && (f_aarch64_vector_arithmetic_binary_uniform_add_fp_complex_decode_test(v_enc)))))) {
        f_aarch64_vector_arithmetic_binary_uniform_add_fp_complex(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1101")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1111")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1111"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_int_bfdot_decode_test(v_enc)))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_int_bfdot(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1101")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0011")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1111")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1111"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_acc_bf16_long_decode_test(v_enc)))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_acc_bf16_long(v_enc);
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "0"))) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "0100")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1101")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "0100")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1110")), iface.bits_lit(4U, "0110")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0100"))) && (f_aarch64_vector_arithmetic_binary_uniform_mat_mul_int_mla_decode_test(v_enc)))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mat_mul_int_mla(v_enc);
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101"))) && (f_aarch64_vector_arithmetic_binary_uniform_mat_mul_int_mla_decode_test(v_enc)))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mat_mul_int_mla(v_enc);
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1101"))) && (f_aarch64_vector_bfmmla_decode_test(v_enc)))))) {
        f_aarch64_vector_bfmmla(v_enc);
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0100"))) && (f_aarch64_vector_arithmetic_binary_uniform_mat_mul_int_mla_decode_test(v_enc)))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mat_mul_int_mla(v_enc);
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0111")), iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "110000011")), iface.bits_lit(9U, "000000010"))) && (true)))))) {
      const auto v_U = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("5"));
      if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11110")), iface.bits_lit(5U, "10000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11100")), iface.bits_lit(5U, "01100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00000"))) && (f_aarch64_vector_arithmetic_unary_rev_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_rev(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00001"))) && (f_aarch64_vector_arithmetic_unary_rev_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_rev(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00010"))) && (f_aarch64_vector_arithmetic_unary_add_pairwise_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_add_pairwise(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00011"))) && (f_aarch64_vector_arithmetic_unary_add_saturating_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_add_saturating_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00100"))) && (f_aarch64_vector_arithmetic_unary_clsz_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_clsz(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00101"))) && (f_aarch64_vector_arithmetic_unary_cnt_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cnt(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00110"))) && (f_aarch64_vector_arithmetic_unary_add_pairwise_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_add_pairwise(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00111"))) && (f_aarch64_vector_arithmetic_unary_diff_neg_sat_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_diff_neg_sat_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01000"))) && (f_aarch64_vector_arithmetic_unary_cmp_int_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_int_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01001"))) && (f_aarch64_vector_arithmetic_unary_cmp_int_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_int_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01010"))) && (f_aarch64_vector_arithmetic_unary_cmp_int_lessthan_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_int_lessthan_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01011"))) && (f_aarch64_vector_arithmetic_unary_diff_neg_int_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_diff_neg_int_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10010"))) && (f_aarch64_vector_arithmetic_unary_extract_nosat_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_extract_nosat(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10100"))) && (f_aarch64_vector_arithmetic_unary_extract_sat_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_extract_sat_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10110"))) && (f_aarch64_vector_arithmetic_unary_float_narrow_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_narrow(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10111"))) && (f_aarch64_vector_arithmetic_unary_float_widen_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_widen(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11000"))) && (f_aarch64_vector_arithmetic_unary_float_round_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_round(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11001"))) && (f_aarch64_vector_arithmetic_unary_float_round_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_round(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))) && (f_aarch64_vector_arithmetic_unary_float_conv_float_tieaway_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_float_tieaway_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_unary_float_conv_int_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_int_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11110"))) && (f_aarch64_vector_arithmetic_unary_float_round_frint_32_64_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_round_frint_32_64(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))) && (f_aarch64_vector_arithmetic_unary_float_round_frint_32_64_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_round_frint_32_64(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))) && (f_aarch64_vector_arithmetic_unary_cmp_float_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_float_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01101"))) && (f_aarch64_vector_arithmetic_unary_cmp_float_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_float_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01110"))) && (f_aarch64_vector_arithmetic_unary_cmp_float_lessthan_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_float_lessthan_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))) && (f_aarch64_vector_arithmetic_unary_diff_neg_float_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_diff_neg_float(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11000"))) && (f_aarch64_vector_arithmetic_unary_float_round_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_round(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11001"))) && (f_aarch64_vector_arithmetic_unary_float_round_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_round(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))) && (f_aarch64_vector_arithmetic_unary_special_recip_int_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_special_recip_int(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_unary_special_recip_float_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_special_recip_float_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10110"))) && (f_aarch64_vector_cvt_bf16_vector_decode_test(v_enc))))) {
        f_aarch64_vector_cvt_bf16_vector(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00000"))) && (f_aarch64_vector_arithmetic_unary_rev_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_rev(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00010"))) && (f_aarch64_vector_arithmetic_unary_add_pairwise_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_add_pairwise(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00011"))) && (f_aarch64_vector_arithmetic_unary_add_saturating_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_add_saturating_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00100"))) && (f_aarch64_vector_arithmetic_unary_clsz_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_clsz(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00110"))) && (f_aarch64_vector_arithmetic_unary_add_pairwise_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_add_pairwise(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00111"))) && (f_aarch64_vector_arithmetic_unary_diff_neg_sat_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_diff_neg_sat_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01000"))) && (f_aarch64_vector_arithmetic_unary_cmp_int_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_int_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01001"))) && (f_aarch64_vector_arithmetic_unary_cmp_int_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_int_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01010"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01011"))) && (f_aarch64_vector_arithmetic_unary_diff_neg_int_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_diff_neg_int_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10010"))) && (f_aarch64_vector_arithmetic_unary_extract_sqxtun_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_extract_sqxtun_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10011"))) && (f_aarch64_vector_arithmetic_unary_shift_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_shift(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10100"))) && (f_aarch64_vector_arithmetic_unary_extract_sat_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_extract_sat_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10110"))) && (f_aarch64_vector_arithmetic_unary_float_xtn_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_xtn_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11000"))) && (f_aarch64_vector_arithmetic_unary_float_round_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_round(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11001"))) && (f_aarch64_vector_arithmetic_unary_float_round_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_round(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))) && (f_aarch64_vector_arithmetic_unary_float_conv_float_tieaway_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_float_tieaway_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_unary_float_conv_int_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_int_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11110"))) && (f_aarch64_vector_arithmetic_unary_float_round_frint_32_64_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_round_frint_32_64(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))) && (f_aarch64_vector_arithmetic_unary_float_round_frint_32_64_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_round_frint_32_64(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00101"))) && (f_aarch64_vector_arithmetic_unary_not_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_not(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00101"))) && (f_aarch64_vector_arithmetic_unary_rbit_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_rbit(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))) && (f_aarch64_vector_arithmetic_unary_cmp_float_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_float_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01101"))) && (f_aarch64_vector_arithmetic_unary_cmp_float_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_cmp_float_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))) && (f_aarch64_vector_arithmetic_unary_diff_neg_float_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_diff_neg_float(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11001"))) && (f_aarch64_vector_arithmetic_unary_float_round_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_round(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))) && (f_aarch64_vector_arithmetic_unary_special_sqrt_est_int_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_special_sqrt_est_int(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_unary_special_sqrt_est_float_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_special_sqrt_est_float_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))) && (f_aarch64_vector_arithmetic_unary_special_sqrt_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_unary_special_sqrt(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0111")), iface.bits_lit(4U, "0110"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "110000011")), iface.bits_lit(9U, "000000010"))) && (true)))))) {
      const auto v_U = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("5"));
      if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11110")), iface.bits_lit(5U, "00000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00010"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11100")), iface.bits_lit(5U, "00100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11110")), iface.bits_lit(5U, "01000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01110"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11000")), iface.bits_lit(5U, "10000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11110")), iface.bits_lit(5U, "11000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11100")), iface.bits_lit(5U, "11100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00011"))) && (f_aarch64_vector_reduce_add_long_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_add_long(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01010"))) && (f_aarch64_vector_reduce_int_max_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_int_max(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_reduce_int_max_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_int_max(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_reduce_add_simd_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_add_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))) && (f_aarch64_vector_reduce_fp16_maxnm_simd_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_fp16_maxnm_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))) && (f_aarch64_vector_reduce_fp16_max_simd_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_fp16_max_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))) && (f_aarch64_vector_reduce_fp16_maxnm_simd_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_fp16_maxnm_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))) && (f_aarch64_vector_reduce_fp16_max_simd_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_fp16_max_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00011"))) && (f_aarch64_vector_reduce_add_long_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_add_long(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01010"))) && (f_aarch64_vector_reduce_int_max_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_int_max(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_reduce_int_max_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_int_max(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))) && (f_aarch64_vector_reduce_fp_maxnm_simd_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_fp_maxnm_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))) && (f_aarch64_vector_reduce_fp_max_simd_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_fp_max_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))) && (f_aarch64_vector_reduce_fp_maxnm_simd_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_fp_maxnm_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))) && (f_aarch64_vector_reduce_fp_max_simd_decode_test(v_enc))))) {
        f_aarch64_vector_reduce_fp_max_simd(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "100000011")), iface.bits_lit(9U, "100000010"))) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "010000011")), iface.bits_lit(9U, "010000010"))) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000000011")), iface.bits_lit(9U, "000000000"))) && (true)))))) {
      const auto v_U = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("4"));
      if ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1111")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0000"))) && (f_aarch64_vector_arithmetic_binary_disparate_add_sub_long_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_add_sub_long(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001"))) && (f_aarch64_vector_arithmetic_binary_disparate_add_sub_wide_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_add_sub_wide(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0010"))) && (f_aarch64_vector_arithmetic_binary_disparate_add_sub_long_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_add_sub_long(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0011"))) && (f_aarch64_vector_arithmetic_binary_disparate_add_sub_wide_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_add_sub_wide(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0100"))) && (f_aarch64_vector_arithmetic_binary_disparate_add_sub_narrow_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_add_sub_narrow(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101"))) && (f_aarch64_vector_arithmetic_binary_disparate_diff_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_diff(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0110"))) && (f_aarch64_vector_arithmetic_binary_disparate_add_sub_narrow_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_add_sub_narrow(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0111"))) && (f_aarch64_vector_arithmetic_binary_disparate_diff_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_diff(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1000"))) && (f_aarch64_vector_arithmetic_binary_disparate_mul_accum_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_mul_accum(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1001"))) && (f_aarch64_vector_arithmetic_binary_disparate_mul_dmacc_simd_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_mul_dmacc_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1010"))) && (f_aarch64_vector_arithmetic_binary_disparate_mul_accum_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_mul_accum(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1011"))) && (f_aarch64_vector_arithmetic_binary_disparate_mul_dmacc_simd_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_mul_dmacc_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1100"))) && (f_aarch64_vector_arithmetic_binary_disparate_mul_product_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_mul_product(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1101"))) && (f_aarch64_vector_arithmetic_binary_disparate_mul_double_simd_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_mul_double_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1110"))) && (f_aarch64_vector_arithmetic_binary_disparate_mul_poly_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_mul_poly(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0000"))) && (f_aarch64_vector_arithmetic_binary_disparate_add_sub_long_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_add_sub_long(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001"))) && (f_aarch64_vector_arithmetic_binary_disparate_add_sub_wide_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_add_sub_wide(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0010"))) && (f_aarch64_vector_arithmetic_binary_disparate_add_sub_long_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_add_sub_long(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0011"))) && (f_aarch64_vector_arithmetic_binary_disparate_add_sub_wide_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_add_sub_wide(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0100"))) && (f_aarch64_vector_arithmetic_binary_disparate_add_sub_narrow_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_add_sub_narrow(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101"))) && (f_aarch64_vector_arithmetic_binary_disparate_diff_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_diff(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0110"))) && (f_aarch64_vector_arithmetic_binary_disparate_add_sub_narrow_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_add_sub_narrow(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0111"))) && (f_aarch64_vector_arithmetic_binary_disparate_diff_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_diff(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1000"))) && (f_aarch64_vector_arithmetic_binary_disparate_mul_accum_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_mul_accum(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1001")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1010"))) && (f_aarch64_vector_arithmetic_binary_disparate_mul_accum_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_mul_accum(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1011")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1100"))) && (f_aarch64_vector_arithmetic_binary_disparate_mul_product_decode_test(v_enc)))) {
        f_aarch64_vector_arithmetic_binary_disparate_mul_product(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1101")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1110")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000000001")), iface.bits_lit(9U, "000000001"))) && (true)))))) {
      const auto v_U = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("5"));
      if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00000"))) && (f_aarch64_vector_arithmetic_binary_uniform_add_halving_truncating_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_add_halving_truncating(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00001"))) && (f_aarch64_vector_arithmetic_binary_uniform_add_saturating_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_add_saturating_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00010"))) && (f_aarch64_vector_arithmetic_binary_uniform_add_halving_rounding_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_add_halving_rounding(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00100"))) && (f_aarch64_vector_arithmetic_binary_uniform_sub_int_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_sub_int(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00101"))) && (f_aarch64_vector_arithmetic_binary_uniform_sub_saturating_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_sub_saturating_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00110"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_int_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_int_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00111"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_int_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_int_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01000"))) && (f_aarch64_vector_arithmetic_binary_uniform_shift_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_shift_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01001"))) && (f_aarch64_vector_arithmetic_binary_uniform_shift_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_shift_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01010"))) && (f_aarch64_vector_arithmetic_binary_uniform_shift_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_shift_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01011"))) && (f_aarch64_vector_arithmetic_binary_uniform_shift_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_shift_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_single_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_single(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01101"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_single_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_single(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01110"))) && (f_aarch64_vector_arithmetic_binary_uniform_diff_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_diff(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))) && (f_aarch64_vector_arithmetic_binary_uniform_diff_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_diff(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10000"))) && (f_aarch64_vector_arithmetic_binary_uniform_add_wrapping_single_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_add_wrapping_single_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10001"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_bitwise_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_bitwise_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10010"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_int_accum_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_int_accum(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10011"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_int_product_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_int_product(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10100"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_pair_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_pair(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10101"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_pair_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_pair(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10110"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10111"))) && (f_aarch64_vector_arithmetic_binary_uniform_add_wrapping_pair_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_add_wrapping_pair(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11000"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_fp_2008_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_fp_2008(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11001"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_fp_fused_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_fp_fused(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_binary_uniform_add_fp_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_add_fp(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_fp_extended_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_fp_extended_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11110"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_fp_1985_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_fp_1985(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))) && (f_aarch64_vector_arithmetic_binary_uniform_recps_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_recps_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00011"))) && (f_aarch64_vector_arithmetic_binary_uniform_logical_and_orr_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_logical_and_orr(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_fp_mul_norounding_lower_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_fp_mul_norounding_lower(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00011"))) && (f_aarch64_vector_arithmetic_binary_uniform_logical_and_orr_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_logical_and_orr(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11000"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_fp_2008_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_fp_2008(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11001"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_fp_fused_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_fp_fused(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_binary_uniform_sub_fp_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_sub_fp_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11110"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_fp_1985_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_fp_1985(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))) && (f_aarch64_vector_arithmetic_binary_uniform_rsqrts_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_rsqrts_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00011"))) && (f_aarch64_vector_arithmetic_binary_uniform_logical_and_orr_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_logical_and_orr(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_fp_mul_norounding_lower_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_fp_mul_norounding_lower(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00011"))) && (f_aarch64_vector_arithmetic_binary_uniform_logical_and_orr_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_logical_and_orr(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00000"))) && (f_aarch64_vector_arithmetic_binary_uniform_add_halving_truncating_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_add_halving_truncating(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00001"))) && (f_aarch64_vector_arithmetic_binary_uniform_add_saturating_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_add_saturating_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00010"))) && (f_aarch64_vector_arithmetic_binary_uniform_add_halving_rounding_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_add_halving_rounding(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00100"))) && (f_aarch64_vector_arithmetic_binary_uniform_sub_int_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_sub_int(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00101"))) && (f_aarch64_vector_arithmetic_binary_uniform_sub_saturating_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_sub_saturating_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00110"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_int_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_int_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00111"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_int_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_int_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01000"))) && (f_aarch64_vector_arithmetic_binary_uniform_shift_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_shift_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01001"))) && (f_aarch64_vector_arithmetic_binary_uniform_shift_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_shift_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01010"))) && (f_aarch64_vector_arithmetic_binary_uniform_shift_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_shift_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01011"))) && (f_aarch64_vector_arithmetic_binary_uniform_shift_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_shift_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_single_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_single(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01101"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_single_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_single(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01110"))) && (f_aarch64_vector_arithmetic_binary_uniform_diff_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_diff(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111"))) && (f_aarch64_vector_arithmetic_binary_uniform_diff_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_diff(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10000"))) && (f_aarch64_vector_arithmetic_binary_uniform_add_wrapping_single_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_add_wrapping_single_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10001"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_bitwise_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_bitwise_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10010"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_int_accum_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_int_accum(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10011"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_int_product_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_int_product(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10100"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_pair_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_pair(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10101"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_pair_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_pair(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10110"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11000"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_fp_2008_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_fp_2008(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_binary_uniform_add_fp_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_add_fp(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_fp_product_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_fp_product(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11110"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_fp_1985_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_fp_1985(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))) && (f_aarch64_vector_arithmetic_binary_uniform_div_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_div(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00011"))) && (f_aarch64_vector_arithmetic_binary_uniform_logical_bsl_eor_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_logical_bsl_eor(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11001"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_fp_mul_norounding_upper_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_fp_mul_norounding_upper(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00011"))) && (f_aarch64_vector_arithmetic_binary_uniform_logical_bsl_eor_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_logical_bsl_eor(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11000"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_fp_2008_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_fp_2008(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11010"))) && (f_aarch64_vector_arithmetic_binary_uniform_sub_fp_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_sub_fp_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101"))) && (f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11110"))) && (f_aarch64_vector_arithmetic_binary_uniform_max_min_fp_1985_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_max_min_fp_1985(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00011"))) && (f_aarch64_vector_arithmetic_binary_uniform_logical_bsl_eor_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_logical_bsl_eor(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11001"))) && (f_aarch64_vector_arithmetic_binary_uniform_mul_fp_mul_norounding_upper_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_mul_fp_mul_norounding_upper(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00011"))) && (f_aarch64_vector_arithmetic_binary_uniform_logical_bsl_eor_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_uniform_logical_bsl_eor(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000000001")), iface.bits_lit(9U, "000000001"))) && (true)))))) {
      const auto v_Q = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("1"));
      const auto v_op = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_cmode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("4"));
      const auto v_o2 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1"));
      if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_cmode, iface.bits_lit(4U, "1000")), iface.bits_lit(4U, "0000"))) && (iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_cmode, iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && (f_aarch64_vector_logical_decode_test(v_enc)))))) {
        f_aarch64_vector_logical(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_cmode, iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0001"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && (f_aarch64_vector_logical_decode_test(v_enc)))))) {
        f_aarch64_vector_logical(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_cmode, iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "1000"))) && (iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_cmode, iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "1000"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && (f_aarch64_vector_logical_decode_test(v_enc)))))) {
        f_aarch64_vector_logical(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_cmode, iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "1001"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && (f_aarch64_vector_logical_decode_test(v_enc)))))) {
        f_aarch64_vector_logical(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_cmode, iface.bits_lit(4U, "1110")), iface.bits_lit(4U, "1100"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && (f_aarch64_vector_logical_decode_test(v_enc)))))) {
        f_aarch64_vector_logical(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_cmode, iface.bits_lit(4U, "1110")), iface.bits_lit(4U, "1100"))) && (iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_cmode, iface.bits_lit(4U, "1110"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && (f_aarch64_vector_logical_decode_test(v_enc)))))) {
        f_aarch64_vector_logical(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_cmode, iface.bits_lit(4U, "1110"))) && (iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_cmode, iface.bits_lit(4U, "1111"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && (f_aarch64_vector_logical_decode_test(v_enc)))))) {
        f_aarch64_vector_logical(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_cmode, iface.bits_lit(4U, "1111"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1"))) && (f_aarch64_vector_fp16_movi_decode_test(v_enc)))))) {
        f_aarch64_vector_fp16_movi(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_o2, iface.bits_lit(1U, "1")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_cmode, iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0000"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && (f_aarch64_vector_logical_decode_test(v_enc)))))) {
        f_aarch64_vector_logical(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_cmode, iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0001"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && (f_aarch64_vector_logical_decode_test(v_enc)))))) {
        f_aarch64_vector_logical(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_cmode, iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "1000"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && (f_aarch64_vector_logical_decode_test(v_enc)))))) {
        f_aarch64_vector_logical(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_cmode, iface.bits_lit(4U, "1101")), iface.bits_lit(4U, "1001"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && (f_aarch64_vector_logical_decode_test(v_enc)))))) {
        f_aarch64_vector_logical(v_enc);
      } else if ((true) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_cmode, iface.bits_lit(4U, "1110")), iface.bits_lit(4U, "1100"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && (f_aarch64_vector_logical_decode_test(v_enc)))))) {
        f_aarch64_vector_logical(v_enc);
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_cmode, iface.bits_lit(4U, "1110"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && (f_aarch64_vector_logical_decode_test(v_enc)))))) {
        f_aarch64_vector_logical(v_enc);
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_cmode, iface.bits_lit(4U, "1111"))) && (iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_cmode, iface.bits_lit(4U, "1110"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && (f_aarch64_vector_logical_decode_test(v_enc)))))) {
        f_aarch64_vector_logical(v_enc);
      } else if ((iface.f_eq_bits(v_Q, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_cmode, iface.bits_lit(4U, "1111"))) && ((iface.f_eq_bits(v_o2, iface.bits_lit(1U, "0"))) && (f_aarch64_vector_logical_decode_test(v_enc)))))) {
        f_aarch64_vector_logical(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) && ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0000")))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000000001")), iface.bits_lit(9U, "000000001"))) && (true)))))) {
      const auto v_U = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("5"));
      if ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00001")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00011")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00101")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00111")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01001")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01011")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01101")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01111")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10101")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11110")), iface.bits_lit(5U, "10110")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(5U, "11100")), iface.bits_lit(5U, "11000")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11101")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11110")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00000"))) && (f_aarch64_vector_shift_right_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_right_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00010"))) && (f_aarch64_vector_shift_right_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_right_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00100"))) && (f_aarch64_vector_shift_right_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_right_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00110"))) && (f_aarch64_vector_shift_right_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_right_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01000")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01010"))) && (f_aarch64_vector_shift_left_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_left_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01110"))) && (f_aarch64_vector_shift_left_sat_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_left_sat_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10000"))) && (f_aarch64_vector_shift_right_narrow_logical_decode_test(v_enc)))) {
        f_aarch64_vector_shift_right_narrow_logical(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10001"))) && (f_aarch64_vector_shift_right_narrow_logical_decode_test(v_enc)))) {
        f_aarch64_vector_shift_right_narrow_logical(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10010"))) && (f_aarch64_vector_shift_right_narrow_uniform_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_right_narrow_uniform_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10011"))) && (f_aarch64_vector_shift_right_narrow_uniform_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_right_narrow_uniform_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10100"))) && (f_aarch64_vector_shift_left_long_decode_test(v_enc)))) {
        f_aarch64_vector_shift_left_long(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))) && (f_aarch64_vector_shift_conv_int_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_conv_int_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))) && (f_aarch64_vector_shift_conv_float_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_conv_float_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00000"))) && (f_aarch64_vector_shift_right_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_right_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00010"))) && (f_aarch64_vector_shift_right_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_right_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00100"))) && (f_aarch64_vector_shift_right_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_right_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "00110"))) && (f_aarch64_vector_shift_right_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_right_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01000"))) && (f_aarch64_vector_shift_right_insert_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_right_insert_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01010"))) && (f_aarch64_vector_shift_left_insert_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_left_insert_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01100"))) && (f_aarch64_vector_shift_left_sat_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_left_sat_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "01110"))) && (f_aarch64_vector_shift_left_sat_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_left_sat_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10000"))) && (f_aarch64_vector_shift_right_narrow_nonuniform_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_right_narrow_nonuniform_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10001"))) && (f_aarch64_vector_shift_right_narrow_nonuniform_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_right_narrow_nonuniform_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10010"))) && (f_aarch64_vector_shift_right_narrow_uniform_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_right_narrow_uniform_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10011"))) && (f_aarch64_vector_shift_right_narrow_uniform_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_right_narrow_uniform_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "10100"))) && (f_aarch64_vector_shift_left_long_decode_test(v_enc)))) {
        f_aarch64_vector_shift_left_long(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11100"))) && (f_aarch64_vector_shift_conv_int_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_conv_int_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(5U, "11111"))) && (f_aarch64_vector_shift_conv_float_simd_decode_test(v_enc)))) {
        f_aarch64_vector_shift_conv_float_simd(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "11"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000000001")), iface.bits_lit(9U, "000000001"))) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0000"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000000001")), iface.bits_lit(9U, "000000000"))) && (true)))))) {
      const auto v_U = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_size = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("4"));
      if ((true) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0010"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_long_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_long(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0011"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_double_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_double_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0110"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_long_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_long(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0111"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_double_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_double_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1000"))) && (f_aarch64_vector_arithmetic_binary_element_mul_int_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_int(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1010"))) && (f_aarch64_vector_arithmetic_binary_element_mul_long_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_long(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1011"))) && (f_aarch64_vector_arithmetic_binary_element_mul_double_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_double_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1100"))) && (f_aarch64_vector_arithmetic_binary_element_mul_high_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_high_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1101"))) && (f_aarch64_vector_arithmetic_binary_element_mul_high_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_high_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1110"))) && (f_aarch64_vector_arithmetic_binary_element_dotp_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_dotp(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_fp16_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_fp16_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_fp16_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_fp16_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1001"))) && (f_aarch64_vector_arithmetic_binary_element_mul_fp16_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_fp16_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1111"))) && (f_aarch64_vector_arithmetic_binary_element_mat_mul_int_dotp_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mat_mul_int_dotp(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1111"))) && (f_aarch64_vector_arithmetic_binary_element_bfdot_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_bfdot(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_fp_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_fp_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_fp_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_fp_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1001"))) && (f_aarch64_vector_arithmetic_binary_element_mul_fp_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_fp_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0000"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_mul_norounding_i_lower_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_mul_norounding_i_lower(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0100"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_mul_norounding_i_lower_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_mul_norounding_i_lower(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1111"))) && (f_aarch64_vector_arithmetic_binary_element_mat_mul_int_dotp_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mat_mul_int_dotp(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1111"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_bf16_long_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_bf16_long(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0000"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_int_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_int(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0010"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_long_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_long(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0100"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_int_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_int(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0110"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_long_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_long(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1010"))) && (f_aarch64_vector_arithmetic_binary_element_mul_long_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_long(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1101"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_high_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_high_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1110"))) && (f_aarch64_vector_arithmetic_binary_element_dotp_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_dotp(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((true) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1111"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_high_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_high_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1001"))) && (f_aarch64_vector_arithmetic_binary_element_mul_fp16_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_fp16_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0001"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_complex_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_complex(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(iface.f_and_bits(v_size, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1001"))) && (f_aarch64_vector_arithmetic_binary_element_mul_fp_simd_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_fp_simd(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "0001"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_complex_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_complex(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1000"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_mul_norounding_i_upper_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_mul_norounding_i_upper(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1100"))) && (f_aarch64_vector_arithmetic_binary_element_mul_acc_mul_norounding_i_upper_decode_test(v_enc))))) {
        f_aarch64_vector_arithmetic_binary_element_mul_acc_mul_norounding_i_upper(v_enc);
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0011"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0111"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1000"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_U, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_size, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1100"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1100"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "1000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000110000")), iface.bits_lit(9U, "000100000"))) && (true)))))) {
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2"));
      if ((iface.f_eq_bits(v_opcode, iface.bits_lit(2U, "00"))) && (f_aarch64_vector_crypto_sm3_sm3tt1a_decode_test(v_enc))) {
        f_aarch64_vector_crypto_sm3_sm3tt1a(v_enc);
      } else if ((iface.f_eq_bits(v_opcode, iface.bits_lit(2U, "01"))) && (f_aarch64_vector_crypto_sm3_sm3tt1b_decode_test(v_enc))) {
        f_aarch64_vector_crypto_sm3_sm3tt1b(v_enc);
      } else if ((iface.f_eq_bits(v_opcode, iface.bits_lit(2U, "10"))) && (f_aarch64_vector_crypto_sm3_sm3tt2a_decode_test(v_enc))) {
        f_aarch64_vector_crypto_sm3_sm3tt2a(v_enc);
      } else if ((iface.f_eq_bits(v_opcode, iface.bits_lit(2U, "11"))) && (f_aarch64_vector_crypto_sm3_sm3tt2b_decode_test(v_enc))) {
        f_aarch64_vector_crypto_sm3_sm3tt2b(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1100"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "1100"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000101100")), iface.bits_lit(9U, "000100000"))) && (true)))))) {
      const auto v_O = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("1"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2"));
      if ((iface.f_eq_bits(v_O, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(2U, "00"))) && (f_aarch64_vector_crypto_sha512_sha512h_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_sha512_sha512h(v_enc);
      } else if ((iface.f_eq_bits(v_O, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(2U, "01"))) && (f_aarch64_vector_crypto_sha512_sha512h2_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_sha512_sha512h2(v_enc);
      } else if ((iface.f_eq_bits(v_O, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(2U, "10"))) && (f_aarch64_vector_crypto_sha512_sha512su1_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_sha512_sha512su1(v_enc);
      } else if ((iface.f_eq_bits(v_O, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(2U, "11"))) && (f_aarch64_vector_crypto_sha3_rax1_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_sha3_rax1(v_enc);
      } else if ((iface.f_eq_bits(v_O, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(2U, "00"))) && (f_aarch64_vector_crypto_sm3_sm3partw1_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_sm3_sm3partw1(v_enc);
      } else if ((iface.f_eq_bits(v_O, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(2U, "01"))) && (f_aarch64_vector_crypto_sm3_sm3partw2_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_sm3_sm3partw2(v_enc);
      } else if ((iface.f_eq_bits(v_O, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(2U, "10"))) && (f_aarch64_vector_crypto_sm4_sm4enckey_decode_test(v_enc)))) {
        f_aarch64_vector_crypto_sm4_sm4enckey(v_enc);
      } else if ((iface.f_eq_bits(v_O, iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(2U, "11")))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1100"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000100000")), iface.bits_lit(9U, "000000000"))) && (true)))))) {
      const auto v_Op0 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("2"));
      if ((iface.f_eq_bits(v_Op0, iface.bits_lit(2U, "00"))) && (f_aarch64_vector_crypto_sha3_eor3_decode_test(v_enc))) {
        f_aarch64_vector_crypto_sha3_eor3(v_enc);
      } else if ((iface.f_eq_bits(v_Op0, iface.bits_lit(2U, "01"))) && (f_aarch64_vector_crypto_sha3_bcax_decode_test(v_enc))) {
        f_aarch64_vector_crypto_sha3_bcax(v_enc);
      } else if ((iface.f_eq_bits(v_Op0, iface.bits_lit(2U, "10"))) && (f_aarch64_vector_crypto_sm3_sm3ss1_decode_test(v_enc))) {
        f_aarch64_vector_crypto_sm3_sm3ss1(v_enc);
      } else if (iface.f_eq_bits(v_Op0, iface.bits_lit(2U, "11"))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1100"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "0000"))) && ((true) && (true)))))) {
      if (f_aarch64_vector_crypto_sha3_xar_decode_test(v_enc)) {
        f_aarch64_vector_crypto_sha3_xar(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1100"))) && ((true) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1000"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "111111100")), iface.bits_lit(9U, "000100000"))) && (true)))))) {
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("2"));
      if ((iface.f_eq_bits(v_opcode, iface.bits_lit(2U, "00"))) && (f_aarch64_vector_crypto_sha512_sha512su0_decode_test(v_enc))) {
        f_aarch64_vector_crypto_sha512_sha512su0(v_enc);
      } else if ((iface.f_eq_bits(v_opcode, iface.bits_lit(2U, "01"))) && (f_aarch64_vector_crypto_sm4_sm4enc_decode_test(v_enc))) {
        f_aarch64_vector_crypto_sm4_sm4enc(v_enc);
      } else if (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "1000"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((true) && ((true) && (true)))))) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0101")), iface.bits_lit(4U, "0001"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0000"))) && ((true) && (true)))))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_ptype = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_rmode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("2"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"));
      const auto v_scale = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("6"));
      if ((true) && ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "100")), iface.bits_lit(3U, "100"))) && (true)))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_rmode, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "000"))) && (true)))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_rmode, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "010"))) && (true)))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_rmode, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "000"))) && (true)))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_rmode, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "010"))) && (true)))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "10"))) && ((true) && ((true) && (true)))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((true) && ((true) && ((true) && (true)))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((true) && ((true) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_scale, iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "000000")))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && ((true) && (f_aarch64_float_convert_fix_decode_test(v_enc)))))))) {
        f_aarch64_float_convert_fix(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0101")), iface.bits_lit(4U, "0001"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000111111")), iface.bits_lit(9U, "000000000"))) && (true)))))) {
      const auto v_sf = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_ptype = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_rmode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("2"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("3"));
      if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_rmode, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "010"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_rmode, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "100"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_rmode, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "010"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_rmode, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "100"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "10"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "100")), iface.bits_lit(3U, "000"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "10"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "100"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((true) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(v_rmode, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "110"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(v_rmode, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "110"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(iface.f_and_bits(v_rmode, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "110"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "110"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "10"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "110"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "110"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(iface.f_and_bits(v_rmode, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "110"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(iface.f_and_bits(v_rmode, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "110"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(iface.f_and_bits(v_rmode, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "110"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(iface.f_and_bits(v_rmode, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(3U, "110")), iface.bits_lit(3U, "110"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "010"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "011"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "100"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "101"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "110"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "111"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "10"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "000"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else if ((iface.f_eq_bits(v_sf, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_rmode, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(3U, "001"))) && (f_aarch64_float_convert_int_decode_test(v_enc))))))) {
        f_aarch64_float_convert_int(v_enc);
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0101")), iface.bits_lit(4U, "0001"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000011111")), iface.bits_lit(9U, "000010000"))) && (true)))))) {
      const auto v_M = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_ptype = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("6"));
      if ((true) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "100000")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((true) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000000"))) && (f_aarch64_float_arithmetic_unary_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_unary(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000001"))) && (f_aarch64_float_arithmetic_unary_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_unary(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000010"))) && (f_aarch64_float_arithmetic_unary_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_unary(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000011"))) && (f_aarch64_float_arithmetic_unary_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_unary(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000100")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000101"))) && (f_aarch64_float_convert_fp_decode_test(v_enc)))))) {
        f_aarch64_float_convert_fp(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000110")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000111"))) && (f_aarch64_float_convert_fp_decode_test(v_enc)))))) {
        f_aarch64_float_convert_fp(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001000"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001001"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001010"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001011"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001100"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001101")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001110"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001111"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "010000"))) && (f_aarch64_float_arithmetic_round_frint_32_64_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint_32_64(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "010001"))) && (f_aarch64_float_arithmetic_round_frint_32_64_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint_32_64(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "010010"))) && (f_aarch64_float_arithmetic_round_frint_32_64_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint_32_64(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "010011"))) && (f_aarch64_float_arithmetic_round_frint_32_64_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint_32_64(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "111100")), iface.bits_lit(6U, "010100")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "111000")), iface.bits_lit(6U, "011000")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000000"))) && (f_aarch64_float_arithmetic_unary_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_unary(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000001"))) && (f_aarch64_float_arithmetic_unary_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_unary(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000010"))) && (f_aarch64_float_arithmetic_unary_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_unary(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000011"))) && (f_aarch64_float_arithmetic_unary_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_unary(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000100"))) && (f_aarch64_float_convert_fp_decode_test(v_enc)))))) {
        f_aarch64_float_convert_fp(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000101")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000110"))) && (f_aarch64_vector_cvt_bf16_scalar_decode_test(v_enc)))))) {
        f_aarch64_vector_cvt_bf16_scalar(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000111"))) && (f_aarch64_float_convert_fp_decode_test(v_enc)))))) {
        f_aarch64_float_convert_fp(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001000"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001001"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001010"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001011"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001100"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001101")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001110"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001111"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "010000"))) && (f_aarch64_float_arithmetic_round_frint_32_64_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint_32_64(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "010001"))) && (f_aarch64_float_arithmetic_round_frint_32_64_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint_32_64(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "010010"))) && (f_aarch64_float_arithmetic_round_frint_32_64_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint_32_64(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "010011"))) && (f_aarch64_float_arithmetic_round_frint_32_64_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint_32_64(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "111100")), iface.bits_lit(6U, "010100")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "111000")), iface.bits_lit(6U, "011000")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "10"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "100000")), iface.bits_lit(6U, "000000")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000000"))) && (f_aarch64_float_arithmetic_unary_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_unary(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000001"))) && (f_aarch64_float_arithmetic_unary_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_unary(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000010"))) && (f_aarch64_float_arithmetic_unary_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_unary(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000011"))) && (f_aarch64_float_arithmetic_unary_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_unary(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000100"))) && (f_aarch64_float_convert_fp_decode_test(v_enc)))))) {
        f_aarch64_float_convert_fp(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "000101"))) && (f_aarch64_float_convert_fp_decode_test(v_enc)))))) {
        f_aarch64_float_convert_fp(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "111110")), iface.bits_lit(6U, "000110")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001000"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001001"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001010"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001011"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001100"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001101")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001110"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(6U, "001111"))) && (f_aarch64_float_arithmetic_round_frint_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_round_frint(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(6U, "110000")), iface.bits_lit(6U, "010000")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "1"))) && ((true) && ((true) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0101")), iface.bits_lit(4U, "0001"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000001111")), iface.bits_lit(9U, "000001000"))) && (true)))))) {
      const auto v_M = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_ptype = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_op = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("14"), /*wd*/ iface.bigint_lit("2"));
      const auto v_opcode2 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"));
      if ((true) && ((true) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode2, iface.bits_lit(5U, "00001")), iface.bits_lit(5U, "00001"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode2, iface.bits_lit(5U, "00010")), iface.bits_lit(5U, "00010"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode2, iface.bits_lit(5U, "00100")), iface.bits_lit(5U, "00100"))))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_op, iface.bits_lit(2U, "01")), iface.bits_lit(2U, "01"))) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(v_op, iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "10"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((true) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00000"))) && (f_aarch64_float_compare_uncond_decode_test(v_enc))))))) {
        f_aarch64_float_compare_uncond(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "01000"))) && (f_aarch64_float_compare_uncond_decode_test(v_enc))))))) {
        f_aarch64_float_compare_uncond(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "10000"))) && (f_aarch64_float_compare_uncond_decode_test(v_enc))))))) {
        f_aarch64_float_compare_uncond(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "11000"))) && (f_aarch64_float_compare_uncond_decode_test(v_enc))))))) {
        f_aarch64_float_compare_uncond(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00000"))) && (f_aarch64_float_compare_uncond_decode_test(v_enc))))))) {
        f_aarch64_float_compare_uncond(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "01000"))) && (f_aarch64_float_compare_uncond_decode_test(v_enc))))))) {
        f_aarch64_float_compare_uncond(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "10000"))) && (f_aarch64_float_compare_uncond_decode_test(v_enc))))))) {
        f_aarch64_float_compare_uncond(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "11000"))) && (f_aarch64_float_compare_uncond_decode_test(v_enc))))))) {
        f_aarch64_float_compare_uncond(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "00000"))) && (f_aarch64_float_compare_uncond_decode_test(v_enc))))))) {
        f_aarch64_float_compare_uncond(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "01000"))) && (f_aarch64_float_compare_uncond_decode_test(v_enc))))))) {
        f_aarch64_float_compare_uncond(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "10000"))) && (f_aarch64_float_compare_uncond_decode_test(v_enc))))))) {
        f_aarch64_float_compare_uncond(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode2, iface.bits_lit(5U, "11000"))) && (f_aarch64_float_compare_uncond_decode_test(v_enc))))))) {
        f_aarch64_float_compare_uncond(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "1"))) && ((true) && ((true) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0101")), iface.bits_lit(4U, "0001"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000000111")), iface.bits_lit(9U, "000000100"))) && (true)))))) {
      const auto v_M = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_ptype = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_imm5 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"));
      if ((true) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_imm5, iface.bits_lit(5U, "00001")), iface.bits_lit(5U, "00001")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_imm5, iface.bits_lit(5U, "00010")), iface.bits_lit(5U, "00010")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_imm5, iface.bits_lit(5U, "00100")), iface.bits_lit(5U, "00100")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_imm5, iface.bits_lit(5U, "01000")), iface.bits_lit(5U, "01000")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_imm5, iface.bits_lit(5U, "10000")), iface.bits_lit(5U, "10000")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "10"))) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((true) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_imm5, iface.bits_lit(5U, "00000"))) && (f_aarch64_float_move_fp_imm_decode_test(v_enc)))))) {
        f_aarch64_float_move_fp_imm(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_imm5, iface.bits_lit(5U, "00000"))) && (f_aarch64_float_move_fp_imm_decode_test(v_enc)))))) {
        f_aarch64_float_move_fp_imm(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_imm5, iface.bits_lit(5U, "00000"))) && (f_aarch64_float_move_fp_imm_decode_test(v_enc)))))) {
        f_aarch64_float_move_fp_imm(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "1"))) && ((true) && ((true) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0101")), iface.bits_lit(4U, "0001"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000000011")), iface.bits_lit(9U, "000000001"))) && (true)))))) {
      const auto v_M = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_ptype = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_op = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("4"), /*wd*/ iface.bigint_lit("1"));
      if ((true) && ((true) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "10"))) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((true) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && (f_aarch64_float_compare_cond_decode_test(v_enc)))))) {
        f_aarch64_float_compare_cond(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && (f_aarch64_float_compare_cond_decode_test(v_enc)))))) {
        f_aarch64_float_compare_cond(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && (f_aarch64_float_compare_cond_decode_test(v_enc)))))) {
        f_aarch64_float_compare_cond(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && (f_aarch64_float_compare_cond_decode_test(v_enc)))))) {
        f_aarch64_float_compare_cond(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "0"))) && (f_aarch64_float_compare_cond_decode_test(v_enc)))))) {
        f_aarch64_float_compare_cond(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_op, iface.bits_lit(1U, "1"))) && (f_aarch64_float_compare_cond_decode_test(v_enc)))))) {
        f_aarch64_float_compare_cond(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "1"))) && ((true) && ((true) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0101")), iface.bits_lit(4U, "0001"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000000011")), iface.bits_lit(9U, "000000010"))) && (true)))))) {
      const auto v_M = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_ptype = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_opcode = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("4"));
      if ((true) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1001")), iface.bits_lit(4U, "1001")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1010")), iface.bits_lit(4U, "1010")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((true) && (iface.f_eq_bits(iface.f_and_bits(v_opcode, iface.bits_lit(4U, "1100")), iface.bits_lit(4U, "1100")))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((true) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "10"))) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((true) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0000"))) && (f_aarch64_float_arithmetic_mul_product_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_mul_product(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001"))) && (f_aarch64_float_arithmetic_div_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_div(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0010"))) && (f_aarch64_float_arithmetic_add_sub_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0011"))) && (f_aarch64_float_arithmetic_add_sub_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0100"))) && (f_aarch64_float_arithmetic_max_min_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_max_min(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101"))) && (f_aarch64_float_arithmetic_max_min_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_max_min(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0110"))) && (f_aarch64_float_arithmetic_max_min_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_max_min(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0111"))) && (f_aarch64_float_arithmetic_max_min_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_max_min(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1000"))) && (f_aarch64_float_arithmetic_mul_product_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_mul_product(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0000"))) && (f_aarch64_float_arithmetic_mul_product_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_mul_product(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001"))) && (f_aarch64_float_arithmetic_div_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_div(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0010"))) && (f_aarch64_float_arithmetic_add_sub_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0011"))) && (f_aarch64_float_arithmetic_add_sub_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0100"))) && (f_aarch64_float_arithmetic_max_min_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_max_min(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101"))) && (f_aarch64_float_arithmetic_max_min_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_max_min(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0110"))) && (f_aarch64_float_arithmetic_max_min_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_max_min(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0111"))) && (f_aarch64_float_arithmetic_max_min_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_max_min(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1000"))) && (f_aarch64_float_arithmetic_mul_product_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_mul_product(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0000"))) && (f_aarch64_float_arithmetic_mul_product_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_mul_product(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0001"))) && (f_aarch64_float_arithmetic_div_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_div(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0010"))) && (f_aarch64_float_arithmetic_add_sub_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0011"))) && (f_aarch64_float_arithmetic_add_sub_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0100"))) && (f_aarch64_float_arithmetic_max_min_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_max_min(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0101"))) && (f_aarch64_float_arithmetic_max_min_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_max_min(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0110"))) && (f_aarch64_float_arithmetic_max_min_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_max_min(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "0111"))) && (f_aarch64_float_arithmetic_max_min_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_max_min(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_opcode, iface.bits_lit(4U, "1000"))) && (f_aarch64_float_arithmetic_mul_product_decode_test(v_enc)))))) {
        f_aarch64_float_arithmetic_mul_product(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "1"))) && ((true) && ((true) && (true)))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0101")), iface.bits_lit(4U, "0001"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("19"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0100")), iface.bits_lit(4U, "0100"))) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("9")), iface.bits_lit(9U, "000000011")), iface.bits_lit(9U, "000000011"))) && (true)))))) {
      const auto v_M = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_ptype = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      if ((true) && ((true) && (iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "10"))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && (f_aarch64_float_move_fp_select_decode_test(v_enc))))) {
        f_aarch64_float_move_fp_select(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && (f_aarch64_float_move_fp_select_decode_test(v_enc))))) {
        f_aarch64_float_move_fp_select(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && (f_aarch64_float_move_fp_select_decode_test(v_enc))))) {
        f_aarch64_float_move_fp_select(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "1"))) && ((true) && (true))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else if ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("28"), /*wd*/ iface.bigint_lit("4")), iface.bits_lit(4U, "0101")), iface.bits_lit(4U, "0001"))) && ((true) && ((iface.f_eq_bits(iface.f_and_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10")), iface.bits_lit(2U, "10"))) && ((true) && ((true) && (true)))))) {
      const auto v_M = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("31"), /*wd*/ iface.bigint_lit("1"));
      const auto v_S = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("29"), /*wd*/ iface.bigint_lit("1"));
      const auto v_ptype = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("2"));
      const auto v_o1 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("1"));
      const auto v_o0 = iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("15"), /*wd*/ iface.bigint_lit("1"));
      if ((true) && ((true) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "10"))) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((true) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "1"))) && ((true) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && (f_aarch64_float_arithmetic_mul_add_sub_decode_test(v_enc))))))) {
        f_aarch64_float_arithmetic_mul_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && (f_aarch64_float_arithmetic_mul_add_sub_decode_test(v_enc))))))) {
        f_aarch64_float_arithmetic_mul_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && (f_aarch64_float_arithmetic_mul_add_sub_decode_test(v_enc))))))) {
        f_aarch64_float_arithmetic_mul_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "00"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && (f_aarch64_float_arithmetic_mul_add_sub_decode_test(v_enc))))))) {
        f_aarch64_float_arithmetic_mul_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && (f_aarch64_float_arithmetic_mul_add_sub_decode_test(v_enc))))))) {
        f_aarch64_float_arithmetic_mul_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && (f_aarch64_float_arithmetic_mul_add_sub_decode_test(v_enc))))))) {
        f_aarch64_float_arithmetic_mul_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && (f_aarch64_float_arithmetic_mul_add_sub_decode_test(v_enc))))))) {
        f_aarch64_float_arithmetic_mul_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "01"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && (f_aarch64_float_arithmetic_mul_add_sub_decode_test(v_enc))))))) {
        f_aarch64_float_arithmetic_mul_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && (f_aarch64_float_arithmetic_mul_add_sub_decode_test(v_enc))))))) {
        f_aarch64_float_arithmetic_mul_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && (f_aarch64_float_arithmetic_mul_add_sub_decode_test(v_enc))))))) {
        f_aarch64_float_arithmetic_mul_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "0"))) && (f_aarch64_float_arithmetic_mul_add_sub_decode_test(v_enc))))))) {
        f_aarch64_float_arithmetic_mul_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_S, iface.bits_lit(1U, "0"))) && ((iface.f_eq_bits(v_ptype, iface.bits_lit(2U, "11"))) && ((iface.f_eq_bits(v_o1, iface.bits_lit(1U, "1"))) && ((iface.f_eq_bits(v_o0, iface.bits_lit(1U, "1"))) && (f_aarch64_float_arithmetic_mul_add_sub_decode_test(v_enc))))))) {
        f_aarch64_float_arithmetic_mul_add_sub(v_enc);
      } else if ((iface.f_eq_bits(v_M, iface.bits_lit(1U, "1"))) && ((true) && ((true) && ((true) && (true))))) {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } else {
        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
      } // if
    } else {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } // if
  } else {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } // if

} // f_A64_decoder


} // namespace aslp
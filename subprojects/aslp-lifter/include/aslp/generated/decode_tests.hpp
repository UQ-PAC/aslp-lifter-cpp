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
bool aslp_lifter<Traits>::f_aarch64_branch_conditional_compare_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "01111110000000000000000000000000")), iface.bits_lit(32U, "00110100000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_branch_conditional_compare_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_branch_conditional_cond_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111000000000000000000010000")), iface.bits_lit(32U, "01010100000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_branch_conditional_cond_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_branch_conditional_test_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "01111110000000000000000000000000")), iface.bits_lit(32U, "00110110000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_branch_conditional_test_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_branch_unconditional_dret_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(v_enc, iface.bits_lit(35U, "11010110 10111111 00000011 11100000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_branch_unconditional_dret_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_branch_unconditional_eret_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111000000000000")), iface.bits_lit(32U, "11010110100111110000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_branch_unconditional_eret_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_branch_unconditional_immediate_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "01111100000000000000000000000000")), iface.bits_lit(32U, "00010100000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_branch_unconditional_immediate_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_branch_unconditional_register_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111110100111111111000000000000")), iface.bits_lit(32U, "11010110000111110000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_branch_unconditional_register_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_float_arithmetic_add_sub_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110110000000000")), iface.bits_lit(32U, "00011110001000000010100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_float_arithmetic_add_sub_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_float_arithmetic_div_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00011110001000000001100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_float_arithmetic_div_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_float_arithmetic_max_min_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001100110000000000")), iface.bits_lit(32U, "00011110001000000100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_float_arithmetic_max_min_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_float_arithmetic_mul_add_sub_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111000000000000000000000000")), iface.bits_lit(32U, "00011111000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_float_arithmetic_mul_add_sub_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_float_arithmetic_mul_product_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000000111110000000000")), iface.bits_lit(32U, "00011110001000000000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_float_arithmetic_mul_product_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_float_arithmetic_round_frint_32_64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111100111110000000000")), iface.bits_lit(32U, "00011110001010000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_float_arithmetic_round_frint_32_64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_float_arithmetic_round_frint_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111000111110000000000")), iface.bits_lit(32U, "00011110001001000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_float_arithmetic_round_frint_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_float_arithmetic_unary_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111100111110000000000")), iface.bits_lit(32U, "00011110001000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_float_arithmetic_unary_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_float_compare_cond_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000000000110000000000")), iface.bits_lit(32U, "00011110001000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_float_compare_cond_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_float_compare_uncond_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000111")), iface.bits_lit(32U, "00011110001000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_float_compare_uncond_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_float_convert_fix_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "01111111001000000000000000000000")), iface.bits_lit(32U, "00011110000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_float_convert_fix_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_float_convert_fp_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111100111110000000000")), iface.bits_lit(32U, "00011110001000100100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_float_convert_fp_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_float_convert_int_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "01111111001000001111110000000000")), iface.bits_lit(32U, "00011110001000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_float_convert_int_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_float_move_fp_imm_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000000001111111100000")), iface.bits_lit(32U, "00011110001000000001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_float_move_fp_imm_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_float_move_fp_select_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000000000110000000000")), iface.bits_lit(32U, "00011110001000000000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_float_move_fp_select_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_arithmetic_add_sub_carry_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00011111111000001111110000000000")), iface.bits_lit(32U, "00011010000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_arithmetic_add_sub_carry_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_arithmetic_add_sub_extendedreg_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00011111111000000000000000000000")), iface.bits_lit(32U, "00001011001000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_arithmetic_add_sub_extendedreg_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_arithmetic_add_sub_immediate_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00011111100000000000000000000000")), iface.bits_lit(32U, "00010001000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_arithmetic_add_sub_immediate_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_arithmetic_add_sub_shiftedreg_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00011111001000000000000000000000")), iface.bits_lit(32U, "00001011000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_arithmetic_add_sub_shiftedreg_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_arithmetic_address_pc_rel_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00011111000000000000000000000000")), iface.bits_lit(32U, "00010000000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_arithmetic_address_pc_rel_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_arithmetic_cnt_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "01111111111111111111100000000000")), iface.bits_lit(32U, "01011010110000000001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_arithmetic_cnt_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_arithmetic_div_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "01111111111000001111100000000000")), iface.bits_lit(32U, "00011010110000000000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_arithmetic_div_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_arithmetic_mul_uniform_add_sub_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "01111111111000000000000000000000")), iface.bits_lit(32U, "00011011000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_arithmetic_mul_uniform_add_sub_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_arithmetic_mul_widening_32_64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111011000000000000000000000")), iface.bits_lit(32U, "10011011001000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_arithmetic_mul_widening_32_64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_arithmetic_mul_widening_64_128hi_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111011000001000000000000000")), iface.bits_lit(32U, "10011011010000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_arithmetic_mul_widening_64_128hi_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_arithmetic_pointer_mcsubtracttaggedaddress_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "10011010110000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_arithmetic_pointer_mcsubtracttaggedaddress_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_arithmetic_pointer_mcsubtracttaggedaddresssetflags_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "10111010110000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_arithmetic_pointer_mcsubtracttaggedaddresssetflags_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_arithmetic_rbit_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "01111111111111111111110000000000")), iface.bits_lit(32U, "01011010110000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_arithmetic_rbit_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_arithmetic_rev_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "01111111111111111111000000000000")), iface.bits_lit(32U, "01011010110000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_arithmetic_rev_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_bitfield_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00011111100000000000000000000000")), iface.bits_lit(32U, "00010011000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_bitfield_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_conditional_compare_immediate_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111111000000000110000010000")), iface.bits_lit(32U, "00111010010000000000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_conditional_compare_immediate_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_conditional_compare_register_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111111000000000110000010000")), iface.bits_lit(32U, "00111010010000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_conditional_compare_register_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_conditional_select_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111111000000000100000000000")), iface.bits_lit(32U, "00011010100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_conditional_select_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_crc_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "01111111111000001110000000000000")), iface.bits_lit(32U, "00011010110000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_crc_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_flags_axflag_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111000011111111")), iface.bits_lit(32U, "11010101000000000100000001011111"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_flags_axflag_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_flags_cfinv_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111000011111111")), iface.bits_lit(32U, "11010101000000000100000000011111"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_flags_cfinv_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_flags_rmif_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "01111111111000000111110000010000")), iface.bits_lit(32U, "00111010000000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_flags_rmif_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_flags_setf_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "01111111111111111011110000011111")), iface.bits_lit(32U, "00111010000000000000100000001101"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_flags_setf_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_flags_xaflag_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111000011111111")), iface.bits_lit(32U, "11010101000000000100000000111111"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_flags_xaflag_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_ins_ext_extract_immediate_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "01111111101000000000000000000000")), iface.bits_lit(32U, "00010011100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_ins_ext_extract_immediate_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_ins_ext_insert_movewide_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00011111100000000000000000000000")), iface.bits_lit(32U, "00010010100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_ins_ext_insert_movewide_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_logical_immediate_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00011111100000000000000000000000")), iface.bits_lit(32U, "00010010000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_logical_immediate_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_logical_shiftedreg_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00011111000000000000000000000000")), iface.bits_lit(32U, "00001010000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_logical_shiftedreg_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_pac_autda_dp_1src_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111101110000000000")), iface.bits_lit(32U, "11011010110000010001100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_pac_autda_dp_1src_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_pac_autdb_dp_1src_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111101110000000000")), iface.bits_lit(32U, "11011010110000010001110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_pac_autdb_dp_1src_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_pac_autia_dp_1src_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111101110000000000")), iface.bits_lit(32U, "11011010110000010001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_pac_autia_dp_1src_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_pac_autia_hint_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111000000011111")), iface.bits_lit(32U, "11010101000000110010000000011111"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_pac_autia_hint_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_pac_autib_dp_1src_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111101110000000000")), iface.bits_lit(32U, "11011010110000010001010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_pac_autib_dp_1src_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_pac_autib_hint_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111000000011111")), iface.bits_lit(32U, "11010101000000110010000000011111"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_pac_autib_hint_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_pac_pacda_dp_1src_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111101110000000000")), iface.bits_lit(32U, "11011010110000010000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_pac_pacda_dp_1src_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_pac_pacdb_dp_1src_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111101110000000000")), iface.bits_lit(32U, "11011010110000010000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_pac_pacdb_dp_1src_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_pac_pacga_dp_2src_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "10011010110000000011000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_pac_pacga_dp_2src_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_pac_pacia_dp_1src_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111101110000000000")), iface.bits_lit(32U, "11011010110000010000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_pac_pacia_dp_1src_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_pac_pacia_hint_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111000000011111")), iface.bits_lit(32U, "11010101000000110010000000011111"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_pac_pacia_hint_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_pac_pacib_dp_1src_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111101110000000000")), iface.bits_lit(32U, "11011010110000010000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_pac_pacib_dp_1src_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_pac_pacib_hint_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111000000011111")), iface.bits_lit(32U, "11010101000000110010000000011111"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_pac_pacib_hint_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_pac_strip_dp_1src_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111100000000000")), iface.bits_lit(32U, "11011010110000010100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_pac_strip_dp_1src_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_pac_strip_hint_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(v_enc, iface.bits_lit(35U, "11010101 00000011 00100000 11111111"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_pac_strip_hint_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_shift_variable_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "01111111111000001111000000000000")), iface.bits_lit(32U, "00011010110000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_shift_variable_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcaddtag_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000000000000000000000")), iface.bits_lit(32U, "10010001100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcaddtag_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcgettag_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000000000110000000000")), iface.bits_lit(32U, "11011001011000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcgettag_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcgettagarray_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111110000000000")), iface.bits_lit(32U, "11011001111000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcgettagarray_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcinsertrandomtag_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "10011010110000000001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcinsertrandomtag_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcinserttagmask_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "10011010110000000001010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcinserttagmask_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcsettag_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000000000110000000000")), iface.bits_lit(32U, "11011001001000000000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcsettag_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcsettaganddatapair_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000000000000000000000")), iface.bits_lit(32U, "01101001000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcsettaganddatapair_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcsettaganddatapairpost_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000000000000000000000")), iface.bits_lit(32U, "01101000100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcsettaganddatapairpost_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcsettaganddatapairpre_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000000000000000000000")), iface.bits_lit(32U, "01101001100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcsettaganddatapairpre_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcsettagandzeroarray_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111110000000000")), iface.bits_lit(32U, "11011001001000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcsettagandzeroarray_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcsettagandzerodata_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000000000110000000000")), iface.bits_lit(32U, "11011001011000000000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcsettagandzerodata_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcsettagandzerodatapost_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000000000110000000000")), iface.bits_lit(32U, "11011001011000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcsettagandzerodatapost_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcsettagandzerodatapre_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000000000110000000000")), iface.bits_lit(32U, "11011001011000000000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcsettagandzerodatapre_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcsettagarray_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111110000000000")), iface.bits_lit(32U, "11011001101000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcsettagarray_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcsettagpair_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000000000110000000000")), iface.bits_lit(32U, "11011001101000000000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcsettagpair_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcsettagpairandzerodata_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000000000110000000000")), iface.bits_lit(32U, "11011001111000000000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcsettagpairandzerodata_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcsettagpairandzerodatapost_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000000000110000000000")), iface.bits_lit(32U, "11011001111000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcsettagpairandzerodatapost_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcsettagpairandzerodatapre_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000000000110000000000")), iface.bits_lit(32U, "11011001111000000000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcsettagpairandzerodatapre_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcsettagpairpost_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000000000110000000000")), iface.bits_lit(32U, "11011001101000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcsettagpairpost_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcsettagpairpre_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000000000110000000000")), iface.bits_lit(32U, "11011001101000000000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcsettagpairpre_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcsettagpost_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000000000110000000000")), iface.bits_lit(32U, "11011001001000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcsettagpost_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcsettagpre_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000000000110000000000")), iface.bits_lit(32U, "11011001001000000000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcsettagpre_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_integer_tags_mcsubtag_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000000000000000000000")), iface.bits_lit(32U, "11010001100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_integer_tags_mcsubtag_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_atomicops_cas_pair_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111101000000000000000000000")), iface.bits_lit(32U, "00001000001000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_atomicops_cas_pair_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_atomicops_cas_single_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111101000000111110000000000")), iface.bits_lit(32U, "00001000101000000111110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_atomicops_cas_single_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_atomicops_ld_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111001000001000110000000000")), iface.bits_lit(32U, "00111000001000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_atomicops_ld_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_atomicops_swp_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111001000001111110000000000")), iface.bits_lit(32U, "00111000001000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_atomicops_swp_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_exclusive_pair_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111101000000000000000000000")), iface.bits_lit(32U, "10001000001000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_exclusive_pair_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_exclusive_single_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111101000000000000000000000")), iface.bits_lit(32U, "00001000000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_exclusive_single_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_literal_general_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111000000000000000000000000")), iface.bits_lit(32U, "00011000000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_literal_general_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_literal_simdfp_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111000000000000000000000000")), iface.bits_lit(32U, "00011100000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_literal_simdfp_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_ordered_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111101000000000000000000000")), iface.bits_lit(32U, "00001000100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_ordered_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_ordered_rcpc_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111111000001111110000000000")), iface.bits_lit(32U, "00111000101000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_ordered_rcpc_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_pair_general_no_alloc_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111100000000000000000000000")), iface.bits_lit(32U, "00101000000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_pair_general_no_alloc_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_pair_general_offset_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111100000000000000000000000")), iface.bits_lit(32U, "00101001000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_pair_general_offset_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_pair_general_post_idx_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111100000000000000000000000")), iface.bits_lit(32U, "00101000100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_pair_general_post_idx_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_pair_general_pre_idx_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111100000000000000000000000")), iface.bits_lit(32U, "00101001100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_pair_general_pre_idx_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_pair_simdfp_no_alloc_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111100000000000000000000000")), iface.bits_lit(32U, "00101100000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_pair_simdfp_no_alloc_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_pair_simdfp_offset_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111100000000000000000000000")), iface.bits_lit(32U, "00101101000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_pair_simdfp_offset_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_pair_simdfp_post_idx_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111100000000000000000000000")), iface.bits_lit(32U, "00101100100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_pair_simdfp_post_idx_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_pair_simdfp_pre_idx_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111100000000000000000000000")), iface.bits_lit(32U, "00101101100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_pair_simdfp_pre_idx_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_single_general_immediate_signed_offset_lda_stl_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111001000000000110000000000")), iface.bits_lit(32U, "00011001000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_single_general_immediate_signed_offset_lda_stl_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_single_general_immediate_signed_offset_normal_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111001000000000110000000000")), iface.bits_lit(32U, "00111000000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_single_general_immediate_signed_offset_normal_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_single_general_immediate_signed_offset_unpriv_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111001000000000110000000000")), iface.bits_lit(32U, "00111000000000000000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_single_general_immediate_signed_offset_unpriv_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_single_general_immediate_signed_pac_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111001000000000010000000000")), iface.bits_lit(32U, "00111000001000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_single_general_immediate_signed_pac_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_single_general_immediate_signed_post_idx_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111001000000000110000000000")), iface.bits_lit(32U, "00111000000000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_single_general_immediate_signed_post_idx_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_single_general_immediate_signed_pre_idx_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111001000000000110000000000")), iface.bits_lit(32U, "00111000000000000000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_single_general_immediate_signed_pre_idx_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_single_general_immediate_unsigned_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111000000000000000000000000")), iface.bits_lit(32U, "00111001000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_single_general_immediate_unsigned_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_single_general_register_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111001000000000110000000000")), iface.bits_lit(32U, "00111000001000000000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_single_general_register_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_single_simdfp_immediate_signed_offset_normal_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111001000000000110000000000")), iface.bits_lit(32U, "00111100000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_single_simdfp_immediate_signed_offset_normal_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_single_simdfp_immediate_signed_post_idx_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111001000000000110000000000")), iface.bits_lit(32U, "00111100000000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_single_simdfp_immediate_signed_post_idx_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_single_simdfp_immediate_signed_pre_idx_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111001000000000110000000000")), iface.bits_lit(32U, "00111100000000000000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_single_simdfp_immediate_signed_pre_idx_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_single_simdfp_immediate_unsigned_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111000000000000000000000000")), iface.bits_lit(32U, "00111101000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_single_simdfp_immediate_unsigned_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_single_simdfp_register_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "00111111001000000000110000000000")), iface.bits_lit(32U, "00111100001000000000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_single_simdfp_register_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_vector_multiple_no_wb_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111101111110000000000000000")), iface.bits_lit(32U, "00001100000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_vector_multiple_no_wb_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_vector_multiple_post_inc_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111101000000000000000000000")), iface.bits_lit(32U, "00001100100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_vector_multiple_post_inc_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_vector_single_no_wb_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111100111110000000000000000")), iface.bits_lit(32U, "00001101000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_vector_single_no_wb_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_memory_vector_single_post_inc_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111100000000000000000000000")), iface.bits_lit(32U, "00001101100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_memory_vector_single_post_inc_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_system_barriers_dmb_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111000010011111")), iface.bits_lit(32U, "11010101000000110011000010011111"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_system_barriers_dmb_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_system_barriers_dsb_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111000010011111")), iface.bits_lit(32U, "11010101000000110011000010011111"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_system_barriers_dsb_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_system_barriers_isb_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111000010011111")), iface.bits_lit(32U, "11010101000000110011000010011111"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_system_barriers_isb_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_system_barriers_pssbb_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111000010011111")), iface.bits_lit(32U, "11010101000000110011000010011111"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_system_barriers_pssbb_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_system_barriers_sb_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111000010011111")), iface.bits_lit(32U, "11010101000000110011000010011111"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_system_barriers_sb_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_system_barriers_ssbb_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111000010011111")), iface.bits_lit(32U, "11010101000000110011000010011111"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_system_barriers_ssbb_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_system_exceptions_debug_breakpoint_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000000000000000011111")), iface.bits_lit(32U, "11010100001000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_system_exceptions_debug_breakpoint_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_system_exceptions_debug_exception_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000000000000000011100")), iface.bits_lit(32U, "11010100101000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_system_exceptions_debug_exception_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_system_exceptions_debug_halt_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000000000000000011111")), iface.bits_lit(32U, "11010100010000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_system_exceptions_debug_halt_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_system_exceptions_runtime_hvc_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000000000000000011111")), iface.bits_lit(32U, "11010100000000000000000000000010"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_system_exceptions_runtime_hvc_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_system_exceptions_runtime_smc_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000000000000000011111")), iface.bits_lit(32U, "11010100000000000000000000000011"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_system_exceptions_runtime_smc_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_system_exceptions_runtime_svc_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000000000000000011111")), iface.bits_lit(32U, "11010100000000000000000000000001"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_system_exceptions_runtime_svc_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_system_hints_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111000000011111")), iface.bits_lit(32U, "11010101000000110010000000011111"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_system_hints_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_system_monitors_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111000011111111")), iface.bits_lit(32U, "11010101000000110011000001011111"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_system_monitors_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_system_sysops_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110110000000000000000000")), iface.bits_lit(32U, "11010101000010000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_system_sysops_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_udf_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111110000000000000000")), iface.bits_lit(32U, "00000000000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_udf_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_disparate_add_sub_long_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001101110000000000")), iface.bits_lit(32U, "00001110001000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_disparate_add_sub_long_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_disparate_add_sub_narrow_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001101110000000000")), iface.bits_lit(32U, "00001110001000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_disparate_add_sub_narrow_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_disparate_add_sub_wide_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001101110000000000")), iface.bits_lit(32U, "00001110001000000001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_disparate_add_sub_wide_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_disparate_diff_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001101110000000000")), iface.bits_lit(32U, "00001110001000000101000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_disparate_diff_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_disparate_mul_accum_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001101110000000000")), iface.bits_lit(32U, "00001110001000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_disparate_mul_accum_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_disparate_mul_dmacc_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001000001101110000000000")), iface.bits_lit(32U, "00001110001000001001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_disparate_mul_dmacc_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_disparate_mul_dmacc_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001101110000000000")), iface.bits_lit(32U, "01011110001000001001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_disparate_mul_dmacc_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_disparate_mul_double_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001000001111110000000000")), iface.bits_lit(32U, "00001110001000001101000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_disparate_mul_double_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_disparate_mul_double_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "01011110001000001101000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_disparate_mul_double_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_disparate_mul_poly_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001000001111110000000000")), iface.bits_lit(32U, "00001110001000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_disparate_mul_poly_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_disparate_mul_product_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001111110000000000")), iface.bits_lit(32U, "00001110001000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_disparate_mul_product_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_bfdot_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111110000001111010000000000")), iface.bits_lit(32U, "00001111010000001111000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_bfdot_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_dotp_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111000000001111010000000000")), iface.bits_lit(32U, "00001111000000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_dotp_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mat_mul_int_dotp_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111010000001111010000000000")), iface.bits_lit(32U, "00001111000000001111000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mat_mul_int_dotp_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_acc_bf16_long_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111110000001111010000000000")), iface.bits_lit(32U, "00001111110000001111000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_acc_bf16_long_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_acc_complex_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111000000001001010000000000")), iface.bits_lit(32U, "00101111000000000001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_acc_complex_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_acc_double_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111000000001011010000000000")), iface.bits_lit(32U, "00001111000000000011000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_acc_double_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_acc_double_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111000000001011010000000000")), iface.bits_lit(32U, "01011111000000000011000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_acc_double_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_acc_fp16_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111110000001011010000000000")), iface.bits_lit(32U, "00001111000000000001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_acc_fp16_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_acc_fp16_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001011010000000000")), iface.bits_lit(32U, "01011111000000000001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_acc_fp16_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_acc_fp_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111100000001011010000000000")), iface.bits_lit(32U, "00001111100000000001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_acc_fp_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_acc_fp_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111100000001011010000000000")), iface.bits_lit(32U, "01011111100000000001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_acc_fp_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_acc_high_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111000000001101010000000000")), iface.bits_lit(32U, "00101111000000001101000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_acc_high_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_acc_high_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111000000001101010000000000")), iface.bits_lit(32U, "01111111000000001101000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_acc_high_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_acc_int_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111000000001011010000000000")), iface.bits_lit(32U, "00101111000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_acc_int_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_acc_long_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111000000001011010000000000")), iface.bits_lit(32U, "00001111000000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_acc_long_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_acc_mul_norounding_i_lower_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111100000001011010000000000")), iface.bits_lit(32U, "00001111100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_acc_mul_norounding_i_lower_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_acc_mul_norounding_i_upper_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111100000001011010000000000")), iface.bits_lit(32U, "00101111100000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_acc_mul_norounding_i_upper_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_double_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111000000001111010000000000")), iface.bits_lit(32U, "00001111000000001011000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_double_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_double_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111000000001111010000000000")), iface.bits_lit(32U, "01011111000000001011000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_double_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_fp16_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111110000001111010000000000")), iface.bits_lit(32U, "00001111000000001001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_fp16_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_fp16_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111110000001111010000000000")), iface.bits_lit(32U, "01011111000000001001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_fp16_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_fp_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111100000001111010000000000")), iface.bits_lit(32U, "00001111100000001001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_fp_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_fp_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111100000001111010000000000")), iface.bits_lit(32U, "01011111100000001001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_fp_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_high_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111000000001110010000000000")), iface.bits_lit(32U, "00001111000000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_high_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_high_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111000000001110010000000000")), iface.bits_lit(32U, "01011111000000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_high_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_int_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111000000001111010000000000")), iface.bits_lit(32U, "00001111000000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_int_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_element_mul_long_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111000000001111010000000000")), iface.bits_lit(32U, "00001111000000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_element_mul_long_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_add_fp16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111111000001111110000000000")), iface.bits_lit(32U, "00001110010000000001010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_add_fp16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_add_fp_complex_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001000001110110000000000")), iface.bits_lit(32U, "00101110000000001110010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_add_fp_complex_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_add_fp_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111101000001111110000000000")), iface.bits_lit(32U, "00001110001000001101010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_add_fp_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_add_halving_rounding_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001111110000000000")), iface.bits_lit(32U, "00001110001000000001010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_add_halving_rounding_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_add_halving_truncating_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001111110000000000")), iface.bits_lit(32U, "00001110001000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_add_halving_truncating_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_add_saturating_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001111110000000000")), iface.bits_lit(32U, "00001110001000000000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_add_saturating_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_add_saturating_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111001000001111110000000000")), iface.bits_lit(32U, "01011110001000000000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_add_saturating_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_add_wrapping_pair_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001000001111110000000000")), iface.bits_lit(32U, "00001110001000001011110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_add_wrapping_pair_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_add_wrapping_single_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001111110000000000")), iface.bits_lit(32U, "00001110001000001000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_add_wrapping_single_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_add_wrapping_single_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111001000001111110000000000")), iface.bits_lit(32U, "01011110001000001000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_add_wrapping_single_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_cmp_bitwise_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001111110000000000")), iface.bits_lit(32U, "00001110001000001000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_cmp_bitwise_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_cmp_bitwise_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111001000001111110000000000")), iface.bits_lit(32U, "01011110001000001000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_cmp_bitwise_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111011000001111010000000000")), iface.bits_lit(32U, "00001110010000000010010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111011000001111010000000000")), iface.bits_lit(32U, "01011110010000000010010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_cmp_fp16_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001111010000000000")), iface.bits_lit(32U, "00001110001000001110010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111001000001111010000000000")), iface.bits_lit(32U, "01011110001000001110010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_cmp_fp_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_cmp_int_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001111010000000000")), iface.bits_lit(32U, "00001110001000000011010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_cmp_int_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_cmp_int_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111001000001111010000000000")), iface.bits_lit(32U, "01011110001000000011010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_cmp_int_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_diff_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001111010000000000")), iface.bits_lit(32U, "00001110001000000111010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_diff_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_div_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111101000001111110000000000")), iface.bits_lit(32U, "00101110001000001111110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_div_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_div_fp16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111000001111110000000000")), iface.bits_lit(32U, "00101110010000000011110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_div_fp16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_logical_and_orr_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001000001111110000000000")), iface.bits_lit(32U, "00001110001000000001110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_logical_and_orr_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_logical_bsl_eor_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001000001111110000000000")), iface.bits_lit(32U, "00101110001000000001110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_logical_bsl_eor_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mat_mul_int_mla_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111111000001111010000000000")), iface.bits_lit(32U, "01001110100000001010010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mat_mul_int_mla_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mat_mul_int_usdot_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111000001111110000000000")), iface.bits_lit(32U, "00001110100000001001110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mat_mul_int_usdot_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_1985_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111011000001111110000000000")), iface.bits_lit(32U, "00001110010000000011010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_1985_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_2008_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111011000001111110000000000")), iface.bits_lit(32U, "00001110010000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_max_min_fp16_2008_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_max_min_fp_1985_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001111110000000000")), iface.bits_lit(32U, "00001110001000001111010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_max_min_fp_1985_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_max_min_fp_2008_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001111110000000000")), iface.bits_lit(32U, "00001110001000001100010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_max_min_fp_2008_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_max_min_pair_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001111010000000000")), iface.bits_lit(32U, "00001110001000001010010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_max_min_pair_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_max_min_single_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001111010000000000")), iface.bits_lit(32U, "00001110001000000110010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_max_min_single_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_acc_bf16_long_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111000001111110000000000")), iface.bits_lit(32U, "00101110110000001111110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_acc_bf16_long_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_fp16_extended_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111000001111110000000000")), iface.bits_lit(32U, "00001110010000000001110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_fp16_extended_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_fp16_extended_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01011110010000000001110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_fp16_extended_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_fp16_fused_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111011000001111110000000000")), iface.bits_lit(32U, "00001110010000000000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_fp16_fused_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_fp16_product_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111000001111110000000000")), iface.bits_lit(32U, "00101110010000000001110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_fp16_product_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_fp_complex_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001000001110010000000000")), iface.bits_lit(32U, "00101110000000001100010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_fp_complex_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_fp_extended_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111101000001111110000000000")), iface.bits_lit(32U, "00001110001000001101110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_fp_extended_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_fp_extended_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001111110000000000")), iface.bits_lit(32U, "01011110001000001101110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_fp_extended_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_fp_fused_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001000001111110000000000")), iface.bits_lit(32U, "00001110001000001100110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_fp_fused_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_fp_mul_norounding_lower_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001000001111110000000000")), iface.bits_lit(32U, "00001110001000001110110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_fp_mul_norounding_lower_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_fp_mul_norounding_upper_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001000001111110000000000")), iface.bits_lit(32U, "00101110001000001100110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_fp_mul_norounding_upper_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_fp_product_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111101000001111110000000000")), iface.bits_lit(32U, "00101110001000001101110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_fp_product_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_int_accum_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001111110000000000")), iface.bits_lit(32U, "00001110001000001001010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_int_accum_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_int_bfdot_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111000001111110000000000")), iface.bits_lit(32U, "00101110010000001111110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_int_bfdot_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_int_dotp_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001111110000000000")), iface.bits_lit(32U, "00001110000000001001010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_int_dotp_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_accum_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001000001111010000000000")), iface.bits_lit(32U, "00101110000000001000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_accum_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_accum_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111010000000000")), iface.bits_lit(32U, "01111110000000001000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_accum_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001111110000000000")), iface.bits_lit(32U, "00001110001000001011010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111001000001111110000000000")), iface.bits_lit(32U, "01011110001000001011010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_int_doubling_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_mul_int_product_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001111110000000000")), iface.bits_lit(32U, "00001110001000001001110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_mul_int_product_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_recps_fp16_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111000001111110000000000")), iface.bits_lit(32U, "00001110010000000011110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_recps_fp16_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_recps_fp16_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01011110010000000011110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_recps_fp16_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_recps_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111101000001111110000000000")), iface.bits_lit(32U, "00001110001000001111110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_recps_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_recps_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001111110000000000")), iface.bits_lit(32U, "01011110001000001111110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_recps_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_rsqrts_fp16_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111000001111110000000000")), iface.bits_lit(32U, "00001110110000000011110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_rsqrts_fp16_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_rsqrts_fp16_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01011110110000000011110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_rsqrts_fp16_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_rsqrts_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111101000001111110000000000")), iface.bits_lit(32U, "00001110101000001111110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_rsqrts_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_rsqrts_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001111110000000000")), iface.bits_lit(32U, "01011110101000001111110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_rsqrts_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_shift_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001110010000000000")), iface.bits_lit(32U, "00001110001000000100010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_shift_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_shift_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111001000001110010000000000")), iface.bits_lit(32U, "01011110001000000100010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_shift_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_sub_fp16_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111111000001111110000000000")), iface.bits_lit(32U, "00001110110000000001010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_sub_fp16_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_sub_fp16_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01111110110000000001010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_sub_fp16_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_sub_fp_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111101000001111110000000000")), iface.bits_lit(32U, "00001110101000001101010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_sub_fp_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_sub_fp_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001111110000000000")), iface.bits_lit(32U, "01111110101000001101010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_sub_fp_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_sub_int_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001111110000000000")), iface.bits_lit(32U, "00001110001000000010010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_sub_int_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_sub_saturating_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001000001111110000000000")), iface.bits_lit(32U, "00001110001000000010110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_sub_saturating_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_binary_uniform_sub_saturating_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111001000001111110000000000")), iface.bits_lit(32U, "01011110001000000010110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_binary_uniform_sub_saturating_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_add_pairwise_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001111111011110000000000")), iface.bits_lit(32U, "00001110001000000010100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_add_pairwise_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_add_saturating_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001111111111110000000000")), iface.bits_lit(32U, "00001110001000000011100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_add_saturating_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_add_saturating_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111001111111111110000000000")), iface.bits_lit(32U, "01011110001000000011100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_add_saturating_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_clsz_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001111111111110000000000")), iface.bits_lit(32U, "00001110001000000100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_clsz_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cmp_float_bulk_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111101111111110110000000000")), iface.bits_lit(32U, "00001110101000001100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_cmp_float_bulk_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cmp_float_bulk_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111101111111110110000000000")), iface.bits_lit(32U, "01011110101000001100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_cmp_float_bulk_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cmp_float_lessthan_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111101111111111110000000000")), iface.bits_lit(32U, "00001110101000001110100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_cmp_float_lessthan_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cmp_float_lessthan_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101111111111110000000000")), iface.bits_lit(32U, "01011110101000001110100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_cmp_float_lessthan_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111111111111110110000000000")), iface.bits_lit(32U, "00001110111110001100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111111111111110110000000000")), iface.bits_lit(32U, "01011110111110001100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_cmp_fp16_bulk_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cmp_fp16_lessthan_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111111111111110000000000")), iface.bits_lit(32U, "00001110111110001110100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_cmp_fp16_lessthan_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cmp_fp16_lessthan_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111110000000000")), iface.bits_lit(32U, "01011110111110001110100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_cmp_fp16_lessthan_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cmp_int_bulk_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001111111110110000000000")), iface.bits_lit(32U, "00001110001000001000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_cmp_int_bulk_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cmp_int_bulk_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111001111111110110000000000")), iface.bits_lit(32U, "01011110001000001000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_cmp_int_bulk_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cmp_int_lessthan_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001111111111110000000000")), iface.bits_lit(32U, "00001110001000001010100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_cmp_int_lessthan_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cmp_int_lessthan_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111110000000000")), iface.bits_lit(32U, "01011110001000001010100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_cmp_int_lessthan_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_cnt_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001111111111110000000000")), iface.bits_lit(32U, "00001110001000000101100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_cnt_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_diff_neg_float_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111101111111111110000000000")), iface.bits_lit(32U, "00001110101000001111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_diff_neg_float_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_diff_neg_fp16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111111111111111110000000000")), iface.bits_lit(32U, "00001110111110001111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_diff_neg_fp16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_diff_neg_int_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001111111111110000000000")), iface.bits_lit(32U, "00001110001000001011100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_diff_neg_int_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_diff_neg_int_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111001111111111110000000000")), iface.bits_lit(32U, "01011110001000001011100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_diff_neg_int_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_diff_neg_sat_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001111111111110000000000")), iface.bits_lit(32U, "00001110001000000111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_diff_neg_sat_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_diff_neg_sat_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111001111111111110000000000")), iface.bits_lit(32U, "01011110001000000111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_diff_neg_sat_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_extract_nosat_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001111111111110000000000")), iface.bits_lit(32U, "00001110001000010010100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_extract_nosat_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_extract_sat_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001111111111110000000000")), iface.bits_lit(32U, "00001110001000010100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_extract_sat_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_extract_sat_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111001111111111110000000000")), iface.bits_lit(32U, "01011110001000010100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_extract_sat_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_extract_sqxtun_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001111111111110000000000")), iface.bits_lit(32U, "00101110001000010010100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_extract_sqxtun_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_extract_sqxtun_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111110000000000")), iface.bits_lit(32U, "01111110001000010010100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_extract_sqxtun_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001111111110110000000000")), iface.bits_lit(32U, "00001110001000011010100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111001111111110110000000000")), iface.bits_lit(32U, "01011110001000011010100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_float_conv_float_bulk_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_float_conv_float_tieaway_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111101111111111110000000000")), iface.bits_lit(32U, "00001110001000011100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_float_conv_float_tieaway_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_float_conv_float_tieaway_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111101111111111110000000000")), iface.bits_lit(32U, "01011110001000011100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_float_conv_float_tieaway_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_float_conv_int_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111101111111111110000000000")), iface.bits_lit(32U, "00001110001000011101100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_float_conv_int_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_float_conv_int_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111101111111111110000000000")), iface.bits_lit(32U, "01011110001000011101100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_float_conv_int_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_float_narrow_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111101111111111110000000000")), iface.bits_lit(32U, "00001110001000010110100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_float_narrow_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_float_round_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001111111110110000000000")), iface.bits_lit(32U, "00001110001000011000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_float_round_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_float_round_frint_32_64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111101111111110110000000000")), iface.bits_lit(32U, "00001110001000011110100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_float_round_frint_32_64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_float_widen_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111101111111111110000000000")), iface.bits_lit(32U, "00001110001000010111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_float_widen_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_float_xtn_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111101111111111110000000000")), iface.bits_lit(32U, "00101110001000010110100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_float_xtn_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_float_xtn_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101111111111110000000000")), iface.bits_lit(32U, "01111110001000010110100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_float_xtn_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111011111111110110000000000")), iface.bits_lit(32U, "00001110011110011010100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111011111111110110000000000")), iface.bits_lit(32U, "01011110011110011010100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_fp16_conv_float_bulk_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_fp16_conv_float_tieaway_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111111111111111110000000000")), iface.bits_lit(32U, "00001110011110011100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_fp16_conv_float_tieaway_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_fp16_conv_float_tieaway_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111111111111111110000000000")), iface.bits_lit(32U, "01011110011110011100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_fp16_conv_float_tieaway_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_fp16_conv_int_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111111111111111110000000000")), iface.bits_lit(32U, "00001110011110011101100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_fp16_conv_int_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_fp16_conv_int_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111111111111111110000000000")), iface.bits_lit(32U, "01011110011110011101100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_fp16_conv_int_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_fp16_round_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111011111111110110000000000")), iface.bits_lit(32U, "00001110011110011000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_fp16_round_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_not_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111111111111110000000000")), iface.bits_lit(32U, "00101110001000000101100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_not_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_rbit_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111111111111110000000000")), iface.bits_lit(32U, "00101110011000000101100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_rbit_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_rev_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001111111110110000000000")), iface.bits_lit(32U, "00001110001000000000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_rev_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_shift_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001111111111110000000000")), iface.bits_lit(32U, "00101110001000010011100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_shift_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_special_frecpx_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101111111111110000000000")), iface.bits_lit(32U, "01011110101000011111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_special_frecpx_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_special_frecpx_fp16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111110000000000")), iface.bits_lit(32U, "01011110111110011111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_special_frecpx_fp16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_special_recip_float_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111101111111111110000000000")), iface.bits_lit(32U, "00001110101000011101100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_special_recip_float_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_special_recip_float_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101111111111110000000000")), iface.bits_lit(32U, "01011110101000011101100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_special_recip_float_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_special_recip_fp16_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111111111111110000000000")), iface.bits_lit(32U, "00001110111110011101100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_special_recip_fp16_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_special_recip_fp16_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111110000000000")), iface.bits_lit(32U, "01011110111110011101100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_special_recip_fp16_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_special_recip_int_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111101111111111110000000000")), iface.bits_lit(32U, "00001110101000011100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_special_recip_int_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_special_sqrt_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111101111111111110000000000")), iface.bits_lit(32U, "00101110101000011111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_special_sqrt_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_special_sqrt_est_float_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111101111111111110000000000")), iface.bits_lit(32U, "00101110101000011101100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_special_sqrt_est_float_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_special_sqrt_est_float_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101111111111110000000000")), iface.bits_lit(32U, "01111110101000011101100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_special_sqrt_est_float_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_special_sqrt_est_fp16_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111111111111110000000000")), iface.bits_lit(32U, "00101110111110011101100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_special_sqrt_est_fp16_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_special_sqrt_est_fp16_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111110000000000")), iface.bits_lit(32U, "01111110111110011101100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_special_sqrt_est_fp16_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_special_sqrt_est_int_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111101111111111110000000000")), iface.bits_lit(32U, "00101110101000011100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_special_sqrt_est_int_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_arithmetic_unary_special_sqrt_fp16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111111111111110000000000")), iface.bits_lit(32U, "00101110111110011111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_arithmetic_unary_special_sqrt_fp16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_bfmmla_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01101110010000001110110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_bfmmla_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_aes_mix_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110110000000000")), iface.bits_lit(32U, "01001110001010000110100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_aes_mix_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_aes_round_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110110000000000")), iface.bits_lit(32U, "01001110001010000100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_aes_round_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sha2op_sha1_hash_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111110000000000")), iface.bits_lit(32U, "01011110001010000000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sha2op_sha1_hash_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sha2op_sha1_sched1_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111110000000000")), iface.bits_lit(32U, "01011110001010000001100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sha2op_sha1_sched1_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sha2op_sha256_sched0_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111110000000000")), iface.bits_lit(32U, "01011110001010000010100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sha2op_sha256_sched0_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sha3_bcax_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001000000000000000")), iface.bits_lit(32U, "11001110001000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sha3_bcax_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sha3_eor3_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001000000000000000")), iface.bits_lit(32U, "11001110000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sha3_eor3_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sha3_rax1_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "11001110011000001000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sha3_rax1_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sha3_xar_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000000000000000000000")), iface.bits_lit(32U, "11001110100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sha3_xar_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sha3op_sha1_hash_choose_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01011110000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sha3op_sha1_hash_choose_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sha3op_sha1_hash_majority_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01011110000000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sha3op_sha1_hash_majority_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sha3op_sha1_hash_parity_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01011110000000000001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sha3op_sha1_hash_parity_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sha3op_sha1_sched0_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01011110000000000011000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sha3op_sha1_sched0_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sha3op_sha256_hash_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110110000000000")), iface.bits_lit(32U, "01011110000000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sha3op_sha256_hash_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sha3op_sha256_sched1_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01011110000000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sha3op_sha256_sched1_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sha512_sha512h2_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "11001110011000001000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sha512_sha512h2_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sha512_sha512h_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "11001110011000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sha512_sha512h_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sha512_sha512su0_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111110000000000")), iface.bits_lit(32U, "11001110110000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sha512_sha512su0_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sha512_sha512su1_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "11001110011000001000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sha512_sha512su1_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sm3_sm3partw1_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "11001110011000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sm3_sm3partw1_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sm3_sm3partw2_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "11001110011000001100010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sm3_sm3partw2_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sm3_sm3ss1_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001000000000000000")), iface.bits_lit(32U, "11001110010000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sm3_sm3ss1_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sm3_sm3tt1a_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001100110000000000")), iface.bits_lit(32U, "11001110010000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sm3_sm3tt1a_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sm3_sm3tt1b_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001100110000000000")), iface.bits_lit(32U, "11001110010000001000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sm3_sm3tt1b_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sm3_sm3tt2a_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001100110000000000")), iface.bits_lit(32U, "11001110010000001000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sm3_sm3tt2a_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sm3_sm3tt2b_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001100110000000000")), iface.bits_lit(32U, "11001110010000001000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sm3_sm3tt2b_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sm4_sm4enc_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111110000000000")), iface.bits_lit(32U, "11001110110000001000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sm4_sm4enc_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_crypto_sm4_sm4enckey_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "11001110011000001100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_crypto_sm4_sm4enckey_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_cvt_bf16_scalar_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111110000000000")), iface.bits_lit(32U, "00011110011000110100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_cvt_bf16_scalar_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_cvt_bf16_vector_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111111111111110000000000")), iface.bits_lit(32U, "00001110101000010110100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_cvt_bf16_vector_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_fp16_movi_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111110001111110000000000")), iface.bits_lit(32U, "00001111000000001111110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_fp16_movi_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_logical_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111111110000000110000000000")), iface.bits_lit(32U, "00001111000000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_logical_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_reduce_add_long_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001111111111110000000000")), iface.bits_lit(32U, "00001110001100000011100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_reduce_add_long_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_reduce_add_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001111111111110000000000")), iface.bits_lit(32U, "00001110001100011011100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_reduce_add_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_reduce_add_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111110000000000")), iface.bits_lit(32U, "01011110001100011011100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_reduce_add_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_reduce_fp16_add_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101111111111110000000000")), iface.bits_lit(32U, "01011110001100001101100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_reduce_fp16_add_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_reduce_fp16_max_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111011111111111110000000000")), iface.bits_lit(32U, "00001110001100001111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_reduce_fp16_max_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_reduce_fp16_max_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111110000000000")), iface.bits_lit(32U, "01011110001100001111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_reduce_fp16_max_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_reduce_fp16_maxnm_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111011111111111110000000000")), iface.bits_lit(32U, "00001110001100001100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_reduce_fp16_maxnm_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_reduce_fp16_maxnm_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111110000000000")), iface.bits_lit(32U, "01011110001100001100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_reduce_fp16_maxnm_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_reduce_fp_add_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101111111111110000000000")), iface.bits_lit(32U, "01111110001100001101100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_reduce_fp_add_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_reduce_fp_max_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001111111111110000000000")), iface.bits_lit(32U, "00101110001100001111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_reduce_fp_max_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_reduce_fp_max_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111110000000000")), iface.bits_lit(32U, "01111110001100001111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_reduce_fp_max_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_reduce_fp_maxnm_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001111111111110000000000")), iface.bits_lit(32U, "00101110001100001100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_reduce_fp_maxnm_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_reduce_fp_maxnm_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111110000000000")), iface.bits_lit(32U, "01111110001100001100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_reduce_fp_maxnm_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_reduce_int_max_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111001111101111110000000000")), iface.bits_lit(32U, "00001110001100001010100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_reduce_int_max_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_shift_conv_float_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111100000001111110000000000")), iface.bits_lit(32U, "00001111000000001111110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_shift_conv_float_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_shift_conv_float_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111100000001111110000000000")), iface.bits_lit(32U, "01011111000000001111110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_shift_conv_float_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_shift_conv_int_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111100000001111110000000000")), iface.bits_lit(32U, "00001111000000001110010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_shift_conv_int_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_shift_conv_int_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111100000001111110000000000")), iface.bits_lit(32U, "01011111000000001110010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_shift_conv_int_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_shift_left_insert_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111100000001111110000000000")), iface.bits_lit(32U, "00101111000000000101010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_shift_left_insert_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_shift_left_insert_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111100000001111110000000000")), iface.bits_lit(32U, "01111111000000000101010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_shift_left_insert_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_shift_left_long_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111100000001111110000000000")), iface.bits_lit(32U, "00001111000000001010010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_shift_left_long_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_shift_left_sat_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111100000001110110000000000")), iface.bits_lit(32U, "00001111000000000110010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_shift_left_sat_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_shift_left_sat_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111100000001110110000000000")), iface.bits_lit(32U, "01011111000000000110010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_shift_left_sat_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_shift_left_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111100000001111110000000000")), iface.bits_lit(32U, "00001111000000000101010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_shift_left_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_shift_left_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111100000001111110000000000")), iface.bits_lit(32U, "01011111000000000101010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_shift_left_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_shift_right_insert_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111100000001111110000000000")), iface.bits_lit(32U, "00101111000000000100010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_shift_right_insert_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_shift_right_insert_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111100000001111110000000000")), iface.bits_lit(32U, "01111111000000000100010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_shift_right_insert_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_shift_right_narrow_logical_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111100000001111010000000000")), iface.bits_lit(32U, "00001111000000001000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_shift_right_narrow_logical_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_shift_right_narrow_nonuniform_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111100000001111010000000000")), iface.bits_lit(32U, "00101111000000001000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_shift_right_narrow_nonuniform_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_shift_right_narrow_nonuniform_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111100000001111010000000000")), iface.bits_lit(32U, "01111111000000001000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_shift_right_narrow_nonuniform_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_shift_right_narrow_uniform_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111100000001111010000000000")), iface.bits_lit(32U, "00001111000000001001010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_shift_right_narrow_uniform_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_shift_right_narrow_uniform_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111100000001111010000000000")), iface.bits_lit(32U, "01011111000000001001010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_shift_right_narrow_uniform_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_shift_right_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10011111100000001100110000000000")), iface.bits_lit(32U, "00001111000000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_shift_right_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_shift_right_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11011111100000001100110000000000")), iface.bits_lit(32U, "01011111000000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_shift_right_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_transfer_integer_dup_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111000001111110000000000")), iface.bits_lit(32U, "00001110000000000000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_transfer_integer_dup_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_transfer_integer_insert_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01001110000000000001110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_transfer_integer_insert_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_transfer_integer_move_signed_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111000001111110000000000")), iface.bits_lit(32U, "00001110000000000010110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_transfer_integer_move_signed_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_transfer_integer_move_unsigned_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111000001111110000000000")), iface.bits_lit(32U, "00001110000000000011110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_transfer_integer_move_unsigned_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_transfer_vector_cpy_dup_simd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111000001111110000000000")), iface.bits_lit(32U, "00001110000000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_transfer_vector_cpy_dup_simd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_transfer_vector_cpy_dup_sisd_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01011110000000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_transfer_vector_cpy_dup_sisd_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_transfer_vector_extract_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111000001000010000000000")), iface.bits_lit(32U, "00101110000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_transfer_vector_extract_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_transfer_vector_insert_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001000010000000000")), iface.bits_lit(32U, "01101110000000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_transfer_vector_insert_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_transfer_vector_permute_transpose_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001000001011110000000000")), iface.bits_lit(32U, "00001110000000000010100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_transfer_vector_permute_transpose_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_transfer_vector_permute_unzip_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001000001011110000000000")), iface.bits_lit(32U, "00001110000000000001100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_transfer_vector_permute_unzip_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_transfer_vector_permute_zip_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111001000001011110000000000")), iface.bits_lit(32U, "00001110000000000011100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_transfer_vector_permute_zip_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_aarch64_vector_transfer_vector_table_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "10111111111000001000110000000000")), iface.bits_lit(32U, "00001110000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_aarch64_vector_transfer_vector_table_decode_test


} // namespace aslp
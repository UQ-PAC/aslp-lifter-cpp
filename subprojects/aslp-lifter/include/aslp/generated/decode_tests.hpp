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
bool aslp_lifter<Traits>::f_ABS_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000101101010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ABS_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ADDPL_R_RI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111100000000000")), iface.bits_lit(32U, "00000100011000000101000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ADDPL_R_RI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ADDVL_R_RI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111100000000000")), iface.bits_lit(32U, "00000100001000000101000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ADDVL_R_RI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ADD_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ADD_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ADD_Z_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111100000000000000")), iface.bits_lit(32U, "00100101001000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ADD_Z_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ADD_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000100001000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ADD_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ADR_Z_AZ_D_s32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111000000000000")), iface.bits_lit(32U, "00000100001000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ADR_Z_AZ_D_s32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ADR_Z_AZ_D_u32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111000000000000")), iface.bits_lit(32U, "00000100011000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ADR_Z_AZ_D_u32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ADR_Z_AZ_SD_same_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001111000000000000")), iface.bits_lit(32U, "00000100101000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ADR_Z_AZ_SD_same_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ANDS_P_P_PP_Z_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001100001000010000")), iface.bits_lit(32U, "00100101010000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ANDS_P_P_PP_Z_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ANDV_R_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000110100010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ANDV_R_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_AND_P_P_PP_Z_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001100001000010000")), iface.bits_lit(32U, "00100101000000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_AND_P_P_PP_Z_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_AND_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000110100000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_AND_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_AND_Z_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111000000000000000000")), iface.bits_lit(32U, "00000101100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_AND_Z_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_AND_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "00000100001000000011000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_AND_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ASRD_Z_P_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000001001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ASRD_Z_P_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ASRR_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000101001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ASRR_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ASR_Z_P_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ASR_Z_P_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ASR_Z_P_ZW___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000110001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ASR_Z_P_ZW___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ASR_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000100001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ASR_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ASR_Z_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000100001000001001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ASR_Z_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ASR_Z_ZW___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000100001000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ASR_Z_ZW___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BFCVTNT_Z_P_Z_S2BF_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100100100010101010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BFCVTNT_Z_P_Z_S2BF_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BFCVT_Z_P_Z_S2BF_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101100010101010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BFCVT_Z_P_Z_S2BF_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BFDOT_Z_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01100100011000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BFDOT_Z_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BFDOT_Z_ZZZi___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01100100011000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BFDOT_Z_ZZZi___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BFMLALB_Z_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01100100111000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BFMLALB_Z_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BFMLALB_Z_ZZZi___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111010000000000")), iface.bits_lit(32U, "01100100111000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BFMLALB_Z_ZZZi___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BFMLALT_Z_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01100100111000001000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BFMLALT_Z_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BFMLALT_Z_ZZZi___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111010000000000")), iface.bits_lit(32U, "01100100111000000100010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BFMLALT_Z_ZZZi___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BFMMLA_Z_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01100100011000001110010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BFMMLA_Z_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BICS_P_P_PP_Z_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001100001000010000")), iface.bits_lit(32U, "00100101010000000100000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BICS_P_P_PP_Z_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BIC_P_P_PP_Z_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001100001000010000")), iface.bits_lit(32U, "00100101000000000100000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BIC_P_P_PP_Z_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BIC_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000110110000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BIC_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BIC_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "00000100111000000011000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BIC_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BRKAS_P_P_P_Z_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111100001000010000")), iface.bits_lit(32U, "00100101010100000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BRKAS_P_P_P_Z_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BRKA_P_P_P___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111100001000000000")), iface.bits_lit(32U, "00100101000100000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BRKA_P_P_P___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BRKBS_P_P_P_Z_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111100001000010000")), iface.bits_lit(32U, "00100101110100000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BRKBS_P_P_P_Z_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BRKB_P_P_P___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111100001000000000")), iface.bits_lit(32U, "00100101100100000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BRKB_P_P_P___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BRKNS_P_P_PP___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111100001000010000")), iface.bits_lit(32U, "00100101010110000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BRKNS_P_P_PP___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BRKN_P_P_PP___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111100001000010000")), iface.bits_lit(32U, "00100101000110000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BRKN_P_P_PP___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BRKPAS_P_P_PP___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001100001000010000")), iface.bits_lit(32U, "00100101010000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BRKPAS_P_P_PP___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BRKPA_P_P_PP___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001100001000010000")), iface.bits_lit(32U, "00100101000000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BRKPA_P_P_PP___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BRKPBS_P_P_PP___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001100001000010000")), iface.bits_lit(32U, "00100101010000001100000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BRKPBS_P_P_PP___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_BRKPB_P_P_PP___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001100001000010000")), iface.bits_lit(32U, "00100101000000001100000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_BRKPB_P_P_PP___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CLASTA_R_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000101001100001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CLASTA_R_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CLASTA_V_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000101001010101000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CLASTA_V_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CLASTA_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000101001010001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CLASTA_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CLASTB_R_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000101001100011010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CLASTB_R_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CLASTB_V_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000101001010111000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CLASTB_V_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CLASTB_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000101001010011000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CLASTB_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CLS_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000110001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CLS_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CLZ_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000110011010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CLZ_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPEQ_P_P_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100101000000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPEQ_P_P_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPEQ_P_P_ZW___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100100000000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPEQ_P_P_ZW___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPEQ_P_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100100000000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPEQ_P_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPGE_P_P_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100101000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPGE_P_P_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPGE_P_P_ZW___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100100000000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPGE_P_P_ZW___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPGE_P_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100100000000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPGE_P_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPGT_P_P_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100101000000000000000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPGT_P_P_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPGT_P_P_ZW___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100100000000000100000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPGT_P_P_ZW___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPGT_P_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100100000000001000000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPGT_P_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPHI_P_P_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000000010000000010000")), iface.bits_lit(32U, "00100100001000000000000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPHI_P_P_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPHI_P_P_ZW___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100100000000001100000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPHI_P_P_ZW___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPHI_P_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100100000000000000000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPHI_P_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPHS_P_P_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000000010000000010000")), iface.bits_lit(32U, "00100100001000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPHS_P_P_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPHS_P_P_ZW___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100100000000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPHS_P_P_ZW___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPHS_P_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100100000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPHS_P_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPLE_P_P_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100101000000000010000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPLE_P_P_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPLE_P_P_ZW___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100100000000000110000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPLE_P_P_ZW___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPLO_P_P_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000000010000000010000")), iface.bits_lit(32U, "00100100001000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPLO_P_P_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPLO_P_P_ZW___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100100000000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPLO_P_P_ZW___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPLS_P_P_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000000010000000010000")), iface.bits_lit(32U, "00100100001000000010000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPLS_P_P_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPLS_P_P_ZW___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100100000000001110000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPLS_P_P_ZW___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPLT_P_P_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100101000000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPLT_P_P_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPLT_P_P_ZW___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100100000000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPLT_P_P_ZW___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPNE_P_P_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100101000000001000000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPNE_P_P_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPNE_P_P_ZW___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100100000000000010000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPNE_P_P_ZW___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CMPNE_P_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "00100100000000001010000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CMPNE_P_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CNOT_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000110111010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CNOT_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CNTB_R_S___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100001000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CNTB_R_S___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CNTD_R_S___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100111000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CNTD_R_S___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CNTH_R_S___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100011000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CNTH_R_S___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CNTP_R_P_P___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111100001000000000")), iface.bits_lit(32U, "00100101001000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CNTP_R_P_P___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CNTW_R_S___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100101000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CNTW_R_S___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CNT_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000110101010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CNT_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_COMPACT_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000101001000011000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_COMPACT_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CPY_Z_O_I___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001100001100000000000000")), iface.bits_lit(32U, "00000101000100000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CPY_Z_O_I___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CPY_Z_P_I___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001100001100000000000000")), iface.bits_lit(32U, "00000101000100000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CPY_Z_P_I___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CPY_Z_P_R___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000101001010001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CPY_Z_P_R___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CPY_Z_P_V___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000101001000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CPY_Z_P_V___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CTERMEQ_RR___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001111110000011111")), iface.bits_lit(32U, "00100101101000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CTERMEQ_RR___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_CTERMNE_RR___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001111110000011111")), iface.bits_lit(32U, "00100101101000000010000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_CTERMNE_RR___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_DECB_R_RS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100001100001110010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_DECB_R_RS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_DECD_R_RS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100111100001110010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_DECD_R_RS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_DECD_Z_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100111100001100010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_DECD_Z_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_DECH_R_RS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100011100001110010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_DECH_R_RS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_DECH_Z_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100011100001100010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_DECH_Z_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_DECP_R_P_R___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111111000000000")), iface.bits_lit(32U, "00100101001011011000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_DECP_R_P_R___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_DECP_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111111000000000")), iface.bits_lit(32U, "00100101001011011000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_DECP_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_DECW_R_RS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100101100001110010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_DECW_R_RS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_DECW_Z_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100101100001100010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_DECW_Z_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_DUPM_Z_I___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111000000000000000000")), iface.bits_lit(32U, "00000101110000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_DUPM_Z_I___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_DUP_Z_I___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111100000000000000")), iface.bits_lit(32U, "00100101001110001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_DUP_Z_I___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_DUP_Z_R___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111110000000000")), iface.bits_lit(32U, "00000101001000000011100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_DUP_Z_R___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_DUP_Z_Zi___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000101001000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_DUP_Z_Zi___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_EORS_P_P_PP_Z_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001100001000010000")), iface.bits_lit(32U, "00100101010000000100001000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_EORS_P_P_PP_Z_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_EORV_R_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000110010010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_EORV_R_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_EOR_P_P_PP_Z_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001100001000010000")), iface.bits_lit(32U, "00100101000000000100001000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_EOR_P_P_PP_Z_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_EOR_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000110010000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_EOR_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_EOR_Z_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111000000000000000000")), iface.bits_lit(32U, "00000101010000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_EOR_Z_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_EOR_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "00000100101000000011000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_EOR_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_EXT_Z_ZI_Des_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "00000101001000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_EXT_Z_ZI_Des_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FABD_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000010001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FABD_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FABS_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000111001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FABS_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FACGE_P_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "01100101000000001100000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FACGE_P_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FACGT_P_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "01100101000000001110000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FACGT_P_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FADDA_V_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000110000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FADDA_V_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FADDV_V_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FADDV_V_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FADD_Z_P_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110001111000000")), iface.bits_lit(32U, "01100101000110001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FADD_Z_P_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FADD_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FADD_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FADD_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "01100101000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FADD_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCADD_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111101110000000000000")), iface.bits_lit(32U, "01100100000000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCADD_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCMEQ_P_P_Z0___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000010000")), iface.bits_lit(32U, "01100101000100100010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCMEQ_P_P_Z0___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCMEQ_P_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "01100101000000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCMEQ_P_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCMGE_P_P_Z0___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000010000")), iface.bits_lit(32U, "01100101000100000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCMGE_P_P_Z0___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCMGE_P_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "01100101000000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCMGE_P_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCMGT_P_P_Z0___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000010000")), iface.bits_lit(32U, "01100101000100000010000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCMGT_P_P_Z0___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCMGT_P_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "01100101000000000100000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCMGT_P_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCMLA_Z_P_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001000000000000000")), iface.bits_lit(32U, "01100100000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCMLA_Z_P_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCMLA_Z_ZZZi_H_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111000000000000")), iface.bits_lit(32U, "01100100101000000001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCMLA_Z_ZZZi_H_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCMLA_Z_ZZZi_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111000000000000")), iface.bits_lit(32U, "01100100111000000001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCMLA_Z_ZZZi_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCMLE_P_P_Z0___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000010000")), iface.bits_lit(32U, "01100101000100010010000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCMLE_P_P_Z0___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCMLT_P_P_Z0___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000010000")), iface.bits_lit(32U, "01100101000100010010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCMLT_P_P_Z0___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCMNE_P_P_Z0___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000010000")), iface.bits_lit(32U, "01100101000100110010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCMNE_P_P_Z0___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCMNE_P_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "01100101000000000110000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCMNE_P_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCMUO_P_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000010000")), iface.bits_lit(32U, "01100101000000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCMUO_P_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCPY_Z_P_I___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001100001110000000000000")), iface.bits_lit(32U, "00000101000100001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCPY_Z_P_I___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCVTZS_Z_P_Z_D2W_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101110110001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCVTZS_Z_P_Z_D2W_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCVTZS_Z_P_Z_D2X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101110111101010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCVTZS_Z_P_Z_D2X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCVTZS_Z_P_Z_FP162H_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101010110101010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCVTZS_Z_P_Z_FP162H_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCVTZS_Z_P_Z_FP162W_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101010111001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCVTZS_Z_P_Z_FP162W_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCVTZS_Z_P_Z_FP162X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101010111101010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCVTZS_Z_P_Z_FP162X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCVTZS_Z_P_Z_S2W_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101100111001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCVTZS_Z_P_Z_S2W_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCVTZS_Z_P_Z_S2X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101110111001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCVTZS_Z_P_Z_S2X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCVTZU_Z_P_Z_D2W_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101110110011010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCVTZU_Z_P_Z_D2W_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCVTZU_Z_P_Z_D2X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101110111111010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCVTZU_Z_P_Z_D2X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCVTZU_Z_P_Z_FP162H_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101010110111010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCVTZU_Z_P_Z_FP162H_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCVTZU_Z_P_Z_FP162W_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101010111011010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCVTZU_Z_P_Z_FP162W_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCVTZU_Z_P_Z_FP162X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101010111111010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCVTZU_Z_P_Z_FP162X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCVTZU_Z_P_Z_S2W_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101100111011010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCVTZU_Z_P_Z_S2W_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCVTZU_Z_P_Z_S2X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101110111011010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCVTZU_Z_P_Z_S2X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCVT_Z_P_Z_D2H_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101110010001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCVT_Z_P_Z_D2H_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCVT_Z_P_Z_D2S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101110010101010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCVT_Z_P_Z_D2S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCVT_Z_P_Z_H2D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101110010011010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCVT_Z_P_Z_H2D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCVT_Z_P_Z_H2S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101100010011010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCVT_Z_P_Z_H2S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCVT_Z_P_Z_S2D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101110010111010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCVT_Z_P_Z_S2D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FCVT_Z_P_Z_S2H_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101100010001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FCVT_Z_P_Z_S2H_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FDIVR_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000011001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FDIVR_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FDIV_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000011011000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FDIV_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FDUP_Z_I___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00100101001110011100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FDUP_Z_I___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FEXPA_Z_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111110000000000")), iface.bits_lit(32U, "00000100001000001011100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FEXPA_Z_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMAD_Z_P_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000000000")), iface.bits_lit(32U, "01100101001000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMAD_Z_P_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMAXNMV_V_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000001000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMAXNMV_V_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMAXNM_Z_P_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110001111000000")), iface.bits_lit(32U, "01100101000111001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMAXNM_Z_P_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMAXNM_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000001001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMAXNM_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMAXV_V_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000001100010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMAXV_V_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMAX_Z_P_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110001111000000")), iface.bits_lit(32U, "01100101000111101000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMAX_Z_P_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMAX_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000001101000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMAX_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMINNMV_V_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000001010010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMINNMV_V_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMINNM_Z_P_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110001111000000")), iface.bits_lit(32U, "01100101000111011000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMINNM_Z_P_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMINNM_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000001011000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMINNM_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMINV_V_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000001110010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMINV_V_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMIN_Z_P_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110001111000000")), iface.bits_lit(32U, "01100101000111111000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMIN_Z_P_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMIN_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000001111000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMIN_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMLA_Z_P_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000000000")), iface.bits_lit(32U, "01100101001000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMLA_Z_P_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMLA_Z_ZZZi_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01100100111000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMLA_Z_ZZZi_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMLA_Z_ZZZi_H_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001111110000000000")), iface.bits_lit(32U, "01100100001000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMLA_Z_ZZZi_H_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMLA_Z_ZZZi_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01100100101000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMLA_Z_ZZZi_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMLS_Z_P_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000000000")), iface.bits_lit(32U, "01100101001000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMLS_Z_P_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMLS_Z_ZZZi_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01100100111000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMLS_Z_ZZZi_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMLS_Z_ZZZi_H_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001111110000000000")), iface.bits_lit(32U, "01100100001000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMLS_Z_ZZZi_H_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMLS_Z_ZZZi_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01100100101000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMLS_Z_ZZZi_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMMLA_Z_ZZZ_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01100100111000001110010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMMLA_Z_ZZZ_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMMLA_Z_ZZZ_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01100100101000001110010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMMLA_Z_ZZZ_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMSB_Z_P_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000000000")), iface.bits_lit(32U, "01100101001000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMSB_Z_P_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMULX_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000010101000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMULX_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMUL_Z_P_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110001111000000")), iface.bits_lit(32U, "01100101000110101000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMUL_Z_P_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMUL_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000000101000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMUL_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMUL_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "01100101000000000000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMUL_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMUL_Z_ZZi_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01100100111000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMUL_Z_ZZi_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMUL_Z_ZZi_H_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001111110000000000")), iface.bits_lit(32U, "01100100001000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMUL_Z_ZZi_H_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FMUL_Z_ZZi_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01100100101000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FMUL_Z_ZZi_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FNEG_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000111011010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FNEG_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FNMAD_Z_P_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000000000")), iface.bits_lit(32U, "01100101001000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FNMAD_Z_P_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FNMLA_Z_P_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000000000")), iface.bits_lit(32U, "01100101001000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FNMLA_Z_P_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FNMLS_Z_P_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000000000")), iface.bits_lit(32U, "01100101001000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FNMLS_Z_P_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FNMSB_Z_P_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000000000")), iface.bits_lit(32U, "01100101001000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FNMSB_Z_P_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FRECPE_Z_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111110000000000")), iface.bits_lit(32U, "01100101000011100011000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FRECPE_Z_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FRECPS_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "01100101000000000001100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FRECPS_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FRECPX_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000011001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FRECPX_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FRINTA_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000001001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FRINTA_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FRINTI_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000001111010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FRINTI_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FRINTM_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000000101010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FRINTM_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FRINTN_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FRINTN_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FRINTP_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000000011010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FRINTP_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FRINTX_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000001101010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FRINTX_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FRINTZ_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000000111010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FRINTZ_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FRSQRTE_Z_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111110000000000")), iface.bits_lit(32U, "01100101000011110011000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FRSQRTE_Z_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FRSQRTS_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "01100101000000000001110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FRSQRTS_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FSCALE_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000010011000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FSCALE_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FSQRT_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000011011010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FSQRT_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FSUBR_Z_P_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110001111000000")), iface.bits_lit(32U, "01100101000110111000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FSUBR_Z_P_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FSUBR_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000000111000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FSUBR_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FSUB_Z_P_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110001111000000")), iface.bits_lit(32U, "01100101000110011000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FSUB_Z_P_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FSUB_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "01100101000000011000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FSUB_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FSUB_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "01100101000000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FSUB_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FTMAD_Z_ZZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001110001111110000000000")), iface.bits_lit(32U, "01100101000100001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FTMAD_Z_ZZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FTSMUL_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "01100101000000000000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FTSMUL_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_FTSSEL_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000100001000001011000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_FTSSEL_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_INCB_R_RS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100001100001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_INCB_R_RS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_INCD_R_RS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100111100001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_INCD_R_RS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_INCD_Z_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100111100001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_INCD_Z_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_INCH_R_RS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100011100001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_INCH_R_RS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_INCH_Z_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100011100001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_INCH_Z_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_INCP_R_P_R___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111111000000000")), iface.bits_lit(32U, "00100101001011001000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_INCP_R_P_R___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_INCP_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111111000000000")), iface.bits_lit(32U, "00100101001011001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_INCP_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_INCW_R_RS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100101100001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_INCW_R_RS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_INCW_Z_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100101100001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_INCW_Z_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_INDEX_Z_II___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000100001000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_INDEX_Z_II___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_INDEX_Z_IR___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000100001000000100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_INDEX_Z_IR___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_INDEX_Z_RI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000100001000000100010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_INDEX_Z_RI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_INDEX_Z_RR___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000100001000000100110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_INDEX_Z_RR___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_INSR_Z_R___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111110000000000")), iface.bits_lit(32U, "00000101001001000011100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_INSR_Z_R___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_INSR_Z_V___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111110000000000")), iface.bits_lit(32U, "00000101001101000011100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_INSR_Z_V___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LASTA_R_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000101001000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LASTA_R_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LASTA_V_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000101001000101000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LASTA_V_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LASTB_R_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000101001000011010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LASTB_R_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LASTB_V_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000101001000111000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LASTB_V_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1B_Z_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000100001000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1B_Z_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1B_Z_P_AI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10000100001000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1B_Z_P_AI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1B_Z_P_BI_U16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100001000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1B_Z_P_BI_U16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1B_Z_P_BI_U32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100010000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1B_Z_P_BI_U32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1B_Z_P_BI_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100011000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1B_Z_P_BI_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1B_Z_P_BI_U8_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100000000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1B_Z_P_BI_U8_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1B_Z_P_BR_U16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100001000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1B_Z_P_BR_U16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1B_Z_P_BR_U32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100010000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1B_Z_P_BR_U32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1B_Z_P_BR_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100011000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1B_Z_P_BR_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1B_Z_P_BR_U8_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100000000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1B_Z_P_BR_U8_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1B_Z_P_BZ_D_64_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000100010000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1B_Z_P_BZ_D_64_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1B_Z_P_BZ_D_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000100000000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1B_Z_P_BZ_D_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1B_Z_P_BZ_S_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "10000100000000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1B_Z_P_BZ_S_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1D_Z_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000101101000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1D_Z_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1D_Z_P_BI_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101111000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1D_Z_P_BI_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1D_Z_P_BR_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101111000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1D_Z_P_BR_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1D_Z_P_BZ_D_64_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000101111000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1D_Z_P_BZ_D_64_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1D_Z_P_BZ_D_64_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000101110000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1D_Z_P_BZ_D_64_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1D_Z_P_BZ_D_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000101101000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1D_Z_P_BZ_D_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1D_Z_P_BZ_D_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000101100000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1D_Z_P_BZ_D_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1H_Z_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000100101000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1H_Z_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1H_Z_P_AI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10000100101000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1H_Z_P_AI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1H_Z_P_BI_U16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100101000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1H_Z_P_BI_U16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1H_Z_P_BI_U32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100110000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1H_Z_P_BI_U32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1H_Z_P_BI_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100111000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1H_Z_P_BI_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1H_Z_P_BR_U16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100101000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1H_Z_P_BR_U16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1H_Z_P_BR_U32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100110000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1H_Z_P_BR_U32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1H_Z_P_BR_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100111000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1H_Z_P_BR_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1H_Z_P_BZ_D_64_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000100111000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1H_Z_P_BZ_D_64_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1H_Z_P_BZ_D_64_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000100110000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1H_Z_P_BZ_D_64_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1H_Z_P_BZ_D_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000100101000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1H_Z_P_BZ_D_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1H_Z_P_BZ_D_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000100100000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1H_Z_P_BZ_D_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1H_Z_P_BZ_S_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "10000100101000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1H_Z_P_BZ_S_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1H_Z_P_BZ_S_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "10000100100000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1H_Z_P_BZ_S_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RB_Z_P_BI_U16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000000000")), iface.bits_lit(32U, "10000100010000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RB_Z_P_BI_U16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RB_Z_P_BI_U32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000000000")), iface.bits_lit(32U, "10000100010000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RB_Z_P_BI_U32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RB_Z_P_BI_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000000000")), iface.bits_lit(32U, "10000100010000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RB_Z_P_BI_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RB_Z_P_BI_U8_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000000000")), iface.bits_lit(32U, "10000100010000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RB_Z_P_BI_U8_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RD_Z_P_BI_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000000000")), iface.bits_lit(32U, "10000101110000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RD_Z_P_BI_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RH_Z_P_BI_U16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000000000")), iface.bits_lit(32U, "10000100110000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RH_Z_P_BI_U16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RH_Z_P_BI_U32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000000000")), iface.bits_lit(32U, "10000100110000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RH_Z_P_BI_U32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RH_Z_P_BI_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000000000")), iface.bits_lit(32U, "10000100110000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RH_Z_P_BI_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1ROB_Z_P_BI_U8_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100001000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1ROB_Z_P_BI_U8_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1ROB_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100001000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1ROB_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1ROD_Z_P_BI_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101101000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1ROD_Z_P_BI_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1ROD_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101101000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1ROD_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1ROH_Z_P_BI_U16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100101000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1ROH_Z_P_BI_U16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1ROH_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100101000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1ROH_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1ROW_Z_P_BI_U32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101001000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1ROW_Z_P_BI_U32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1ROW_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101001000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1ROW_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RQB_Z_P_BI_U8_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100000000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RQB_Z_P_BI_U8_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RQB_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RQB_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RQD_Z_P_BI_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101100000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RQD_Z_P_BI_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RQD_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RQD_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RQH_Z_P_BI_U16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100100000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RQH_Z_P_BI_U16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RQH_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RQH_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RQW_Z_P_BI_U32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101000000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RQW_Z_P_BI_U32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RQW_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RQW_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RSB_Z_P_BI_S16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000000000")), iface.bits_lit(32U, "10000101110000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RSB_Z_P_BI_S16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RSB_Z_P_BI_S32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000000000")), iface.bits_lit(32U, "10000101110000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RSB_Z_P_BI_S32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RSB_Z_P_BI_S64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000000000")), iface.bits_lit(32U, "10000101110000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RSB_Z_P_BI_S64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RSH_Z_P_BI_S32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000000000")), iface.bits_lit(32U, "10000101010000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RSH_Z_P_BI_S32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RSH_Z_P_BI_S64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000000000")), iface.bits_lit(32U, "10000101010000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RSH_Z_P_BI_S64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RSW_Z_P_BI_S64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000000000")), iface.bits_lit(32U, "10000100110000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RSW_Z_P_BI_S64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RW_Z_P_BI_U32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000000000")), iface.bits_lit(32U, "10000101010000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RW_Z_P_BI_U32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1RW_Z_P_BI_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000000000")), iface.bits_lit(32U, "10000101010000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1RW_Z_P_BI_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SB_Z_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000100001000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SB_Z_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SB_Z_P_AI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10000100001000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SB_Z_P_AI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SB_Z_P_BI_S16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101110000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SB_Z_P_BI_S16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SB_Z_P_BI_S32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101101000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SB_Z_P_BI_S32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SB_Z_P_BI_S64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101100000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SB_Z_P_BI_S64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SB_Z_P_BR_S16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101110000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SB_Z_P_BR_S16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SB_Z_P_BR_S32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101101000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SB_Z_P_BR_S32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SB_Z_P_BR_S64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101100000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SB_Z_P_BR_S64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SB_Z_P_BZ_D_64_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000100010000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SB_Z_P_BZ_D_64_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SB_Z_P_BZ_D_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000100000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SB_Z_P_BZ_D_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SB_Z_P_BZ_S_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "10000100000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SB_Z_P_BZ_S_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SH_Z_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000100101000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SH_Z_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SH_Z_P_AI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10000100101000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SH_Z_P_AI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SH_Z_P_BI_S32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101001000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SH_Z_P_BI_S32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SH_Z_P_BI_S64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101000000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SH_Z_P_BI_S64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SH_Z_P_BR_S32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101001000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SH_Z_P_BR_S32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SH_Z_P_BR_S64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101000000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SH_Z_P_BR_S64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SH_Z_P_BZ_D_64_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000100111000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SH_Z_P_BZ_D_64_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SH_Z_P_BZ_D_64_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000100110000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SH_Z_P_BZ_D_64_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SH_Z_P_BZ_D_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000100101000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SH_Z_P_BZ_D_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SH_Z_P_BZ_D_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000100100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SH_Z_P_BZ_D_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SH_Z_P_BZ_S_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "10000100101000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SH_Z_P_BZ_S_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SH_Z_P_BZ_S_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "10000100100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SH_Z_P_BZ_S_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SW_Z_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000101001000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SW_Z_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SW_Z_P_BI_S64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100100000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SW_Z_P_BI_S64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SW_Z_P_BR_S64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100100000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SW_Z_P_BR_S64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SW_Z_P_BZ_D_64_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000101011000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SW_Z_P_BZ_D_64_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SW_Z_P_BZ_D_64_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000101010000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SW_Z_P_BZ_D_64_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SW_Z_P_BZ_D_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000101001000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SW_Z_P_BZ_D_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1SW_Z_P_BZ_D_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000101000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1SW_Z_P_BZ_D_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1W_Z_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000101001000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1W_Z_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1W_Z_P_AI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10000101001000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1W_Z_P_AI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1W_Z_P_BI_U32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101010000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1W_Z_P_BI_U32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1W_Z_P_BI_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101011000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1W_Z_P_BI_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1W_Z_P_BR_U32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101010000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1W_Z_P_BR_U32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1W_Z_P_BR_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101011000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1W_Z_P_BR_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1W_Z_P_BZ_D_64_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000101011000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1W_Z_P_BZ_D_64_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1W_Z_P_BZ_D_64_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000101010000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1W_Z_P_BZ_D_64_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1W_Z_P_BZ_D_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000101001000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1W_Z_P_BZ_D_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1W_Z_P_BZ_D_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000101000000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1W_Z_P_BZ_D_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1W_Z_P_BZ_S_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "10000101001000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1W_Z_P_BZ_S_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD1W_Z_P_BZ_S_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "10000101000000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD1W_Z_P_BZ_S_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD2B_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100001000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD2B_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD2B_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100001000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD2B_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD2D_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101101000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD2D_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD2D_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101101000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD2D_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD2H_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100101000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD2H_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD2H_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100101000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD2H_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD2W_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101001000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD2W_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD2W_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101001000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD2W_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD3B_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100010000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD3B_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD3B_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100010000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD3B_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD3D_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101110000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD3D_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD3D_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101110000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD3D_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD3H_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100110000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD3H_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD3H_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100110000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD3H_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD3W_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101010000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD3W_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD3W_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101010000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD3W_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD4B_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100011000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD4B_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD4B_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100011000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD4B_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD4D_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101111000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD4D_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD4D_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101111000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD4D_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD4H_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100111000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD4H_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD4H_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100111000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD4H_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD4W_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101011000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD4W_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LD4W_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101011000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LD4W_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1B_Z_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000100001000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1B_Z_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1B_Z_P_AI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10000100001000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1B_Z_P_AI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1B_Z_P_BR_U16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100001000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1B_Z_P_BR_U16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1B_Z_P_BR_U32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100010000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1B_Z_P_BR_U32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1B_Z_P_BR_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100011000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1B_Z_P_BR_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1B_Z_P_BR_U8_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100000000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1B_Z_P_BR_U8_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1B_Z_P_BZ_D_64_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000100010000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1B_Z_P_BZ_D_64_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1B_Z_P_BZ_D_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000100000000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1B_Z_P_BZ_D_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1B_Z_P_BZ_S_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "10000100000000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1B_Z_P_BZ_S_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1D_Z_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000101101000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1D_Z_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1D_Z_P_BR_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101111000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1D_Z_P_BR_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1D_Z_P_BZ_D_64_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000101111000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1D_Z_P_BZ_D_64_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1D_Z_P_BZ_D_64_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000101110000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1D_Z_P_BZ_D_64_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1D_Z_P_BZ_D_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000101101000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1D_Z_P_BZ_D_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1D_Z_P_BZ_D_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000101100000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1D_Z_P_BZ_D_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1H_Z_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000100101000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1H_Z_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1H_Z_P_AI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10000100101000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1H_Z_P_AI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1H_Z_P_BR_U16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100101000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1H_Z_P_BR_U16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1H_Z_P_BR_U32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100110000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1H_Z_P_BR_U32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1H_Z_P_BR_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100111000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1H_Z_P_BR_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1H_Z_P_BZ_D_64_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000100111000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1H_Z_P_BZ_D_64_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1H_Z_P_BZ_D_64_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000100110000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1H_Z_P_BZ_D_64_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1H_Z_P_BZ_D_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000100101000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1H_Z_P_BZ_D_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1H_Z_P_BZ_D_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000100100000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1H_Z_P_BZ_D_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1H_Z_P_BZ_S_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "10000100101000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1H_Z_P_BZ_S_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1H_Z_P_BZ_S_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "10000100100000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1H_Z_P_BZ_S_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SB_Z_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000100001000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SB_Z_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SB_Z_P_AI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10000100001000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SB_Z_P_AI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SB_Z_P_BR_S16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101110000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SB_Z_P_BR_S16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SB_Z_P_BR_S32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101101000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SB_Z_P_BR_S32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SB_Z_P_BR_S64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101100000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SB_Z_P_BR_S64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SB_Z_P_BZ_D_64_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000100010000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SB_Z_P_BZ_D_64_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SB_Z_P_BZ_D_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000100000000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SB_Z_P_BZ_D_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SB_Z_P_BZ_S_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "10000100000000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SB_Z_P_BZ_S_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SH_Z_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000100101000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SH_Z_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SH_Z_P_AI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10000100101000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SH_Z_P_AI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SH_Z_P_BR_S32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101001000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SH_Z_P_BR_S32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SH_Z_P_BR_S64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101000000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SH_Z_P_BR_S64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SH_Z_P_BZ_D_64_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000100111000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SH_Z_P_BZ_D_64_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SH_Z_P_BZ_D_64_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000100110000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SH_Z_P_BZ_D_64_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SH_Z_P_BZ_D_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000100101000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SH_Z_P_BZ_D_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SH_Z_P_BZ_D_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000100100000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SH_Z_P_BZ_D_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SH_Z_P_BZ_S_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "10000100101000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SH_Z_P_BZ_S_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SH_Z_P_BZ_S_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "10000100100000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SH_Z_P_BZ_S_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SW_Z_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000101001000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SW_Z_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SW_Z_P_BR_S64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100100000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SW_Z_P_BR_S64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SW_Z_P_BZ_D_64_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000101011000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SW_Z_P_BZ_D_64_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SW_Z_P_BZ_D_64_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000101010000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SW_Z_P_BZ_D_64_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SW_Z_P_BZ_D_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000101001000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SW_Z_P_BZ_D_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1SW_Z_P_BZ_D_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000101000000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1SW_Z_P_BZ_D_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1W_Z_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000101001000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1W_Z_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1W_Z_P_AI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10000101001000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1W_Z_P_AI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1W_Z_P_BR_U32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101010000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1W_Z_P_BR_U32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1W_Z_P_BR_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101011000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1W_Z_P_BR_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1W_Z_P_BZ_D_64_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000101011000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1W_Z_P_BZ_D_64_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1W_Z_P_BZ_D_64_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11000101010000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1W_Z_P_BZ_D_64_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1W_Z_P_BZ_D_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000101001000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1W_Z_P_BZ_D_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1W_Z_P_BZ_D_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "11000101000000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1W_Z_P_BZ_D_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1W_Z_P_BZ_S_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "10000101001000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1W_Z_P_BZ_S_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDFF1W_Z_P_BZ_S_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000000000")), iface.bits_lit(32U, "10000101000000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDFF1W_Z_P_BZ_S_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNF1B_Z_P_BI_U16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100001100001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNF1B_Z_P_BI_U16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNF1B_Z_P_BI_U32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100010100001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNF1B_Z_P_BI_U32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNF1B_Z_P_BI_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100011100001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNF1B_Z_P_BI_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNF1B_Z_P_BI_U8_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100000100001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNF1B_Z_P_BI_U8_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNF1D_Z_P_BI_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101111100001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNF1D_Z_P_BI_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNF1H_Z_P_BI_U16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100101100001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNF1H_Z_P_BI_U16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNF1H_Z_P_BI_U32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100110100001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNF1H_Z_P_BI_U32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNF1H_Z_P_BI_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100111100001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNF1H_Z_P_BI_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNF1SB_Z_P_BI_S16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101110100001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNF1SB_Z_P_BI_S16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNF1SB_Z_P_BI_S32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101101100001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNF1SB_Z_P_BI_S32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNF1SB_Z_P_BI_S64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101100100001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNF1SB_Z_P_BI_S64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNF1SH_Z_P_BI_S32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101001100001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNF1SH_Z_P_BI_S32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNF1SH_Z_P_BI_S64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101000100001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNF1SH_Z_P_BI_S64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNF1SW_Z_P_BI_S64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100100100001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNF1SW_Z_P_BI_S64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNF1W_Z_P_BI_U32_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101010100001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNF1W_Z_P_BI_U32_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNF1W_Z_P_BI_U64_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101011100001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNF1W_Z_P_BI_U64_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNT1B_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100000000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNT1B_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNT1B_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100000000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNT1B_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNT1D_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101100000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNT1D_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNT1D_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101100000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNT1D_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNT1H_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100100100000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNT1H_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNT1H_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100100100000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNT1H_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNT1W_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "10100101000000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNT1W_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDNT1W_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "10100101000000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDNT1W_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDR_P_BI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000010000")), iface.bits_lit(32U, "10000101100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDR_P_BI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LDR_Z_BI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000000000")), iface.bits_lit(32U, "10000101100000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LDR_Z_BI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LSLR_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000101111000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LSLR_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LSL_Z_P_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000000111000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LSL_Z_P_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LSL_Z_P_ZW___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000110111000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LSL_Z_P_ZW___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LSL_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000100111000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LSL_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LSL_Z_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000100001000001001110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LSL_Z_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LSL_Z_ZW___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000100001000001000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LSL_Z_ZW___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LSRR_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000101011000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LSRR_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LSR_Z_P_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000000011000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LSR_Z_P_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LSR_Z_P_ZW___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000110011000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LSR_Z_P_ZW___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LSR_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000100011000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LSR_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LSR_Z_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000100001000001001010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LSR_Z_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_LSR_Z_ZW___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000100001000001000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_LSR_Z_ZW___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_MAD_Z_P_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000000000")), iface.bits_lit(32U, "00000100000000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_MAD_Z_P_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_MLA_Z_P_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000000000")), iface.bits_lit(32U, "00000100000000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_MLA_Z_P_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_MLS_Z_P_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000000000")), iface.bits_lit(32U, "00000100000000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_MLS_Z_P_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_MOVPRFX_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111101110000000000000")), iface.bits_lit(32U, "00000100000100000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_MOVPRFX_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_MOVPRFX_Z_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111110000000000")), iface.bits_lit(32U, "00000100001000001011110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_MOVPRFX_Z_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_MSB_Z_P_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110000000000000")), iface.bits_lit(32U, "00000100000000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_MSB_Z_P_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_MUL_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000100000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_MUL_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_MUL_Z_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00100101001100001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_MUL_Z_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_NANDS_P_P_PP_Z_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001100001000010000")), iface.bits_lit(32U, "00100101110000000100001000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_NANDS_P_P_PP_Z_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_NAND_P_P_PP_Z_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001100001000010000")), iface.bits_lit(32U, "00100101100000000100001000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_NAND_P_P_PP_Z_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_NEG_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000101111010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_NEG_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_NORS_P_P_PP_Z_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001100001000010000")), iface.bits_lit(32U, "00100101110000000100001000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_NORS_P_P_PP_Z_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_NOR_P_P_PP_Z_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001100001000010000")), iface.bits_lit(32U, "00100101100000000100001000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_NOR_P_P_PP_Z_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_NOT_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000111101010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_NOT_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ORNS_P_P_PP_Z_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001100001000010000")), iface.bits_lit(32U, "00100101110000000100000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ORNS_P_P_PP_Z_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ORN_P_P_PP_Z_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001100001000010000")), iface.bits_lit(32U, "00100101100000000100000000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ORN_P_P_PP_Z_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ORRS_P_P_PP_Z_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001100001000010000")), iface.bits_lit(32U, "00100101110000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ORRS_P_P_PP_Z_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ORR_P_P_PP_Z_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001100001000010000")), iface.bits_lit(32U, "00100101100000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ORR_P_P_PP_Z_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ORR_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000110000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ORR_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ORR_Z_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111000000000000000000")), iface.bits_lit(32U, "00000101000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ORR_Z_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ORR_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "00000100011000000011000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ORR_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ORV_R_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000110000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ORV_R_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PFALSE_P___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111111111110000")), iface.bits_lit(32U, "00100101000110001110010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PFALSE_P___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PFIRST_P_P_P___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111111000010000")), iface.bits_lit(32U, "00100101010110001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PFIRST_P_P_P___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PNEXT_P_P_P___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111111000010000")), iface.bits_lit(32U, "00100101000110011100010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PNEXT_P_P_P___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFB_I_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000010000")), iface.bits_lit(32U, "11000100000000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFB_I_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFB_I_P_AI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000010000")), iface.bits_lit(32U, "10000100000000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFB_I_P_AI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFB_I_P_BI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000010000")), iface.bits_lit(32U, "10000101110000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFB_I_P_BI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFB_I_P_BR_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000010000")), iface.bits_lit(32U, "10000100000000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFB_I_P_BR_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFB_I_P_BZ_D_64_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000010000")), iface.bits_lit(32U, "11000100011000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFB_I_P_BZ_D_64_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFB_I_P_BZ_D_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000010000")), iface.bits_lit(32U, "11000100001000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFB_I_P_BZ_D_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFB_I_P_BZ_S_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000010000")), iface.bits_lit(32U, "10000100001000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFB_I_P_BZ_S_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFD_I_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000010000")), iface.bits_lit(32U, "11000101100000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFD_I_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFD_I_P_AI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000010000")), iface.bits_lit(32U, "10000101100000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFD_I_P_AI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFD_I_P_BI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000010000")), iface.bits_lit(32U, "10000101110000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFD_I_P_BI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFD_I_P_BR_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000010000")), iface.bits_lit(32U, "10000101100000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFD_I_P_BR_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFD_I_P_BZ_D_64_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000010000")), iface.bits_lit(32U, "11000100011000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFD_I_P_BZ_D_64_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFD_I_P_BZ_D_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000010000")), iface.bits_lit(32U, "11000100001000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFD_I_P_BZ_D_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFD_I_P_BZ_S_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000010000")), iface.bits_lit(32U, "10000100001000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFD_I_P_BZ_S_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFH_I_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000010000")), iface.bits_lit(32U, "11000100100000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFH_I_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFH_I_P_AI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000010000")), iface.bits_lit(32U, "10000100100000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFH_I_P_AI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFH_I_P_BI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000010000")), iface.bits_lit(32U, "10000101110000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFH_I_P_BI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFH_I_P_BR_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000010000")), iface.bits_lit(32U, "10000100100000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFH_I_P_BR_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFH_I_P_BZ_D_64_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000010000")), iface.bits_lit(32U, "11000100011000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFH_I_P_BZ_D_64_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFH_I_P_BZ_D_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000010000")), iface.bits_lit(32U, "11000100001000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFH_I_P_BZ_D_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFH_I_P_BZ_S_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000010000")), iface.bits_lit(32U, "10000100001000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFH_I_P_BZ_S_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFW_I_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000010000")), iface.bits_lit(32U, "11000101000000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFW_I_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFW_I_P_AI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000010000")), iface.bits_lit(32U, "10000101000000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFW_I_P_AI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFW_I_P_BI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000010000")), iface.bits_lit(32U, "10000101110000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFW_I_P_BI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFW_I_P_BR_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000010000")), iface.bits_lit(32U, "10000101000000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFW_I_P_BR_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFW_I_P_BZ_D_64_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000010000")), iface.bits_lit(32U, "11000100011000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFW_I_P_BZ_D_64_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFW_I_P_BZ_D_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000010000")), iface.bits_lit(32U, "11000100001000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFW_I_P_BZ_D_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PRFW_I_P_BZ_S_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111101000001110000000010000")), iface.bits_lit(32U, "10000100001000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PRFW_I_P_BZ_S_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PTEST__P_P___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111100001000011111")), iface.bits_lit(32U, "00100101010100001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PTEST__P_P___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PTRUES_P_S___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111110000010000")), iface.bits_lit(32U, "00100101000110011110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PTRUES_P_S___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PTRUE_P_S___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111110000010000")), iface.bits_lit(32U, "00100101000110001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PTRUE_P_S___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PUNPKHI_P_P___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111111000010000")), iface.bits_lit(32U, "00000101001100010100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PUNPKHI_P_P___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_PUNPKLO_P_P___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111111000010000")), iface.bits_lit(32U, "00000101001100000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_PUNPKLO_P_P___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_RBIT_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000101001001111000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_RBIT_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_RDFFRS_P_P_F___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111111000010000")), iface.bits_lit(32U, "00100101010110001111000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_RDFFRS_P_P_F___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_RDFFR_P_F___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111111111110000")), iface.bits_lit(32U, "00100101000110011111000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_RDFFR_P_F___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_RDFFR_P_P_F___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111111000010000")), iface.bits_lit(32U, "00100101000110001111000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_RDFFR_P_P_F___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_RDVL_R_I___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111100000000000")), iface.bits_lit(32U, "00000100101111110101000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_RDVL_R_I___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_REVB_Z_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000101001001001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_REVB_Z_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_REVH_Z_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000101001001011000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_REVH_Z_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_REVW_Z_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000101001001101000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_REVW_Z_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_REV_P_P___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111111000010000")), iface.bits_lit(32U, "00000101001101000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_REV_P_P___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_REV_Z_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111110000000000")), iface.bits_lit(32U, "00000101001110000011100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_REV_Z_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SABD_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000011000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SABD_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SADDV_R_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000000000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SADDV_R_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SCVTF_Z_P_Z_H2FP16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101010100101010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SCVTF_Z_P_Z_H2FP16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SCVTF_Z_P_Z_W2D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101110100001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SCVTF_Z_P_Z_W2D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SCVTF_Z_P_Z_W2FP16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101010101001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SCVTF_Z_P_Z_W2FP16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SCVTF_Z_P_Z_W2S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101100101001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SCVTF_Z_P_Z_W2S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SCVTF_Z_P_Z_X2D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101110101101010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SCVTF_Z_P_Z_X2D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SCVTF_Z_P_Z_X2FP16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101010101101010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SCVTF_Z_P_Z_X2FP16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SCVTF_Z_P_Z_X2S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101110101001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SCVTF_Z_P_Z_X2S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SDIVR_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000101100000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SDIVR_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SDIV_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000101000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SDIV_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SDOT_Z_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "01000100000000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SDOT_Z_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SDOT_Z_ZZZi_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01000100111000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SDOT_Z_ZZZi_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SDOT_Z_ZZZi_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01000100101000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SDOT_Z_ZZZi_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SEL_P_P_PP___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001100001000010000")), iface.bits_lit(32U, "00100101000000000100001000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SEL_P_P_PP___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SEL_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001100000000000000")), iface.bits_lit(32U, "00000101001000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SEL_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SETFFR_F___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(v_enc, iface.bits_lit(35U, "00100101 00101100 10010000 00000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SETFFR_F___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SMAXV_R_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000010000010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SMAXV_R_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SMAX_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000010000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SMAX_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SMAX_Z_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00100101001010001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SMAX_Z_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SMINV_R_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000010100010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SMINV_R_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SMIN_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000010100000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SMIN_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SMIN_Z_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00100101001010101100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SMIN_Z_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SMMLA_Z_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01000101000000001001100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SMMLA_Z_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SMULH_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000100100000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SMULH_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SPLICE_Z_P_ZZ_Des_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000101001011001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SPLICE_Z_P_ZZ_Des_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQADD_Z_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111100000000000000")), iface.bits_lit(32U, "00100101001001001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQADD_Z_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQADD_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000100001000000001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQADD_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQDECB_R_RS_SX_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100001000001111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQDECB_R_RS_SX_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQDECB_R_RS_X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100001100001111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQDECB_R_RS_X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQDECD_R_RS_SX_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100111000001111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQDECD_R_RS_SX_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQDECD_R_RS_X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100111100001111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQDECD_R_RS_X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQDECD_Z_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100111000001100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQDECD_Z_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQDECH_R_RS_SX_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100011000001111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQDECH_R_RS_SX_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQDECH_R_RS_X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100011100001111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQDECH_R_RS_X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQDECH_Z_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100011000001100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQDECH_Z_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQDECP_R_P_R_SX_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111111000000000")), iface.bits_lit(32U, "00100101001010101000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQDECP_R_P_R_SX_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQDECP_R_P_R_X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111111000000000")), iface.bits_lit(32U, "00100101001010101000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQDECP_R_P_R_X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQDECP_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111111000000000")), iface.bits_lit(32U, "00100101001010101000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQDECP_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQDECW_R_RS_SX_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100101000001111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQDECW_R_RS_SX_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQDECW_R_RS_X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100101100001111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQDECW_R_RS_X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQDECW_Z_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100101000001100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQDECW_Z_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQINCB_R_RS_SX_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100001000001111000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQINCB_R_RS_SX_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQINCB_R_RS_X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100001100001111000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQINCB_R_RS_X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQINCD_R_RS_SX_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100111000001111000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQINCD_R_RS_SX_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQINCD_R_RS_X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100111100001111000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQINCD_R_RS_X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQINCD_Z_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100111000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQINCD_Z_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQINCH_R_RS_SX_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100011000001111000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQINCH_R_RS_SX_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQINCH_R_RS_X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100011100001111000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQINCH_R_RS_X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQINCH_Z_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100011000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQINCH_Z_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQINCP_R_P_R_SX_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111111000000000")), iface.bits_lit(32U, "00100101001010001000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQINCP_R_P_R_SX_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQINCP_R_P_R_X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111111000000000")), iface.bits_lit(32U, "00100101001010001000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQINCP_R_P_R_X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQINCP_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111111000000000")), iface.bits_lit(32U, "00100101001010001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQINCP_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQINCW_R_RS_SX_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100101000001111000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQINCW_R_RS_SX_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQINCW_R_RS_X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100101100001111000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQINCW_R_RS_X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQINCW_Z_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100101000001100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQINCW_Z_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQSUB_Z_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111100000000000000")), iface.bits_lit(32U, "00100101001001101100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQSUB_Z_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SQSUB_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000100001000000001100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SQSUB_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1B_Z_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100100010000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1B_Z_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1B_Z_P_AI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100100011000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1B_Z_P_AI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1B_Z_P_BI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111100100001110000000000000")), iface.bits_lit(32U, "11100100000000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1B_Z_P_BI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1B_Z_P_BR___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111100000001110000000000000")), iface.bits_lit(32U, "11100100000000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1B_Z_P_BR___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1B_Z_P_BZ_D_64_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100100000000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1B_Z_P_BZ_D_64_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1B_Z_P_BZ_D_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001010000000000000")), iface.bits_lit(32U, "11100100000000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1B_Z_P_BZ_D_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1B_Z_P_BZ_S_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001010000000000000")), iface.bits_lit(32U, "11100100010000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1B_Z_P_BZ_S_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1D_Z_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100101110000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1D_Z_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1D_Z_P_BI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111100100001110000000000000")), iface.bits_lit(32U, "11100101100000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1D_Z_P_BI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1D_Z_P_BR___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100101111000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1D_Z_P_BR___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1D_Z_P_BZ_D_64_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100101101000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1D_Z_P_BZ_D_64_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1D_Z_P_BZ_D_64_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100101100000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1D_Z_P_BZ_D_64_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1D_Z_P_BZ_D_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001010000000000000")), iface.bits_lit(32U, "11100101101000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1D_Z_P_BZ_D_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1D_Z_P_BZ_D_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001010000000000000")), iface.bits_lit(32U, "11100101100000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1D_Z_P_BZ_D_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1H_Z_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100100110000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1H_Z_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1H_Z_P_AI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100100111000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1H_Z_P_AI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1H_Z_P_BI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111100100001110000000000000")), iface.bits_lit(32U, "11100100100000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1H_Z_P_BI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1H_Z_P_BR___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111100000001110000000000000")), iface.bits_lit(32U, "11100100100000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1H_Z_P_BR___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1H_Z_P_BZ_D_64_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100100101000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1H_Z_P_BZ_D_64_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1H_Z_P_BZ_D_64_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100100100000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1H_Z_P_BZ_D_64_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1H_Z_P_BZ_D_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001010000000000000")), iface.bits_lit(32U, "11100100101000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1H_Z_P_BZ_D_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1H_Z_P_BZ_D_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001010000000000000")), iface.bits_lit(32U, "11100100100000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1H_Z_P_BZ_D_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1H_Z_P_BZ_S_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001010000000000000")), iface.bits_lit(32U, "11100100111000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1H_Z_P_BZ_S_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1H_Z_P_BZ_S_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001010000000000000")), iface.bits_lit(32U, "11100100110000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1H_Z_P_BZ_S_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1W_Z_P_AI_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100101010000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1W_Z_P_AI_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1W_Z_P_AI_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100101011000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1W_Z_P_AI_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1W_Z_P_BI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111100100001110000000000000")), iface.bits_lit(32U, "11100101000000001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1W_Z_P_BI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1W_Z_P_BR___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111100000001110000000000000")), iface.bits_lit(32U, "11100101000000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1W_Z_P_BR___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1W_Z_P_BZ_D_64_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100101001000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1W_Z_P_BZ_D_64_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1W_Z_P_BZ_D_64_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100101000000001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1W_Z_P_BZ_D_64_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1W_Z_P_BZ_D_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001010000000000000")), iface.bits_lit(32U, "11100101001000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1W_Z_P_BZ_D_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1W_Z_P_BZ_D_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001010000000000000")), iface.bits_lit(32U, "11100101000000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1W_Z_P_BZ_D_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1W_Z_P_BZ_S_x32_scaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001010000000000000")), iface.bits_lit(32U, "11100101011000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1W_Z_P_BZ_S_x32_scaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST1W_Z_P_BZ_S_x32_unscaled_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001010000000000000")), iface.bits_lit(32U, "11100101010000001000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST1W_Z_P_BZ_S_x32_unscaled_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST2B_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "11100100001100001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST2B_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST2B_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100100001000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST2B_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST2D_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "11100101101100001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST2D_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST2D_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100101101000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST2D_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST2H_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "11100100101100001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST2H_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST2H_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100100101000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST2H_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST2W_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "11100101001100001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST2W_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST2W_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100101001000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST2W_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST3B_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "11100100010100001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST3B_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST3B_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100100010000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST3B_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST3D_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "11100101110100001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST3D_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST3D_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100101110000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST3D_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST3H_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "11100100110100001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST3H_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST3H_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100100110000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST3H_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST3W_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "11100101010100001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST3W_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST3W_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100101010000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST3W_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST4B_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "11100100011100001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST4B_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST4B_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100100011000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST4B_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST4D_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "11100101111100001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST4D_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST4D_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100101111000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST4D_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST4H_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "11100100111100001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST4H_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST4H_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100100111000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST4H_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST4W_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "11100101011100001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST4W_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ST4W_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100101011000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ST4W_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_STNT1B_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "11100100000100001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_STNT1B_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_STNT1B_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100100000000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_STNT1B_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_STNT1D_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "11100101100100001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_STNT1D_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_STNT1D_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100101100000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_STNT1D_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_STNT1H_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "11100100100100001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_STNT1H_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_STNT1H_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100100100000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_STNT1H_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_STNT1W_Z_P_BI_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001110000000000000")), iface.bits_lit(32U, "11100101000100001110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_STNT1W_Z_P_BI_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_STNT1W_Z_P_BR_Contiguous_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001110000000000000")), iface.bits_lit(32U, "11100101000000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_STNT1W_Z_P_BR_Contiguous_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_STR_P_BI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000010000")), iface.bits_lit(32U, "11100101100000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_STR_P_BI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_STR_Z_BI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111110000001110000000000000")), iface.bits_lit(32U, "11100101100000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_STR_Z_BI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SUBR_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000000110000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SUBR_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SUBR_Z_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111100000000000000")), iface.bits_lit(32U, "00100101001000111100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SUBR_Z_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SUB_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000000010000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SUB_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SUB_Z_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111100000000000000")), iface.bits_lit(32U, "00100101001000011100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SUB_Z_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SUB_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000100001000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SUB_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SUDOT_Z_ZZZi_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01000100101000000001110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SUDOT_Z_ZZZi_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SUNPKHI_Z_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111110000000000")), iface.bits_lit(32U, "00000101001100010011100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SUNPKHI_Z_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SUNPKLO_Z_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111110000000000")), iface.bits_lit(32U, "00000101001100000011100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SUNPKLO_Z_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SXTB_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000100001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SXTB_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SXTH_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000100101010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SXTH_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_SXTW_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000101001010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_SXTW_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_TBL_Z_ZZ_1_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000101001000000011000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_TBL_Z_ZZ_1_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_TRN1_P_PP___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001100001111111000010000")), iface.bits_lit(32U, "00000101001000000101000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_TRN1_P_PP___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_TRN1_Z_ZZ_Q_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "00000101101000000001100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_TRN1_Z_ZZ_Q_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_TRN1_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000101001000000111000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_TRN1_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_TRN2_P_PP___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001100001111111000010000")), iface.bits_lit(32U, "00000101001000000101010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_TRN2_P_PP___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_TRN2_Z_ZZ_Q_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "00000101101000000001110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_TRN2_Z_ZZ_Q_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_TRN2_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000101001000000111010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_TRN2_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UABD_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000011010000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UABD_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UADDV_R_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000000010010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UADDV_R_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UCVTF_Z_P_Z_H2FP16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101010100111010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UCVTF_Z_P_Z_H2FP16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UCVTF_Z_P_Z_W2D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101110100011010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UCVTF_Z_P_Z_W2D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UCVTF_Z_P_Z_W2FP16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101010101011010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UCVTF_Z_P_Z_W2FP16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UCVTF_Z_P_Z_W2S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101100101011010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UCVTF_Z_P_Z_W2S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UCVTF_Z_P_Z_X2D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101110101111010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UCVTF_Z_P_Z_X2D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UCVTF_Z_P_Z_X2FP16_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101010101111010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UCVTF_Z_P_Z_X2FP16_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UCVTF_Z_P_Z_X2S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111110000000000000")), iface.bits_lit(32U, "01100101110101011010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UCVTF_Z_P_Z_X2S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UDIVR_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000101110000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UDIVR_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UDIV_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000101010000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UDIV_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UDOT_Z_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "01000100000000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UDOT_Z_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UDOT_Z_ZZZi_D_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01000100111000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UDOT_Z_ZZZi_D_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UDOT_Z_ZZZi_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01000100101000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UDOT_Z_ZZZi_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UMAXV_R_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000010010010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UMAXV_R_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UMAX_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000010010000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UMAX_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UMAX_Z_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00100101001010011100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UMAX_Z_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UMINV_R_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000010110010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UMINV_R_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UMIN_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000010110000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UMIN_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UMIN_Z_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00100101001010111100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UMIN_Z_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UMMLA_Z_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01000101110000001001100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UMMLA_Z_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UMULH_Z_P_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000100110000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UMULH_Z_P_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQADD_Z_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111100000000000000")), iface.bits_lit(32U, "00100101001001011100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQADD_Z_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQADD_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000100001000000001010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQADD_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQDECB_R_RS_UW_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100001000001111110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQDECB_R_RS_UW_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQDECB_R_RS_X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100001100001111110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQDECB_R_RS_X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQDECD_R_RS_UW_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100111000001111110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQDECD_R_RS_UW_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQDECD_R_RS_X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100111100001111110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQDECD_R_RS_X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQDECD_Z_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100111000001100110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQDECD_Z_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQDECH_R_RS_UW_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100011000001111110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQDECH_R_RS_UW_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQDECH_R_RS_X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100011100001111110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQDECH_R_RS_X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQDECH_Z_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100011000001100110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQDECH_Z_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQDECP_R_P_R_UW_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111111000000000")), iface.bits_lit(32U, "00100101001010111000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQDECP_R_P_R_UW_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQDECP_R_P_R_X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111111000000000")), iface.bits_lit(32U, "00100101001010111000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQDECP_R_P_R_X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQDECP_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111111000000000")), iface.bits_lit(32U, "00100101001010111000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQDECP_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQDECW_R_RS_UW_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100101000001111110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQDECW_R_RS_UW_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQDECW_R_RS_X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100101100001111110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQDECW_R_RS_X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQDECW_Z_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100101000001100110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQDECW_Z_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQINCB_R_RS_UW_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100001000001111010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQINCB_R_RS_UW_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQINCB_R_RS_X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100001100001111010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQINCB_R_RS_X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQINCD_R_RS_UW_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100111000001111010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQINCD_R_RS_UW_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQINCD_R_RS_X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100111100001111010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQINCD_R_RS_X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQINCD_Z_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100111000001100010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQINCD_Z_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQINCH_R_RS_UW_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100011000001111010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQINCH_R_RS_UW_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQINCH_R_RS_X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100011100001111010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQINCH_R_RS_X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQINCH_Z_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100011000001100010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQINCH_Z_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQINCP_R_P_R_UW_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111111000000000")), iface.bits_lit(32U, "00100101001010011000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQINCP_R_P_R_UW_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQINCP_R_P_R_X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111111000000000")), iface.bits_lit(32U, "00100101001010011000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQINCP_R_P_R_X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQINCP_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111111000000000")), iface.bits_lit(32U, "00100101001010011000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQINCP_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQINCW_R_RS_UW_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100101000001111010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQINCW_R_RS_UW_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQINCW_R_RS_X_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100101100001111010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQINCW_R_RS_X_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQINCW_Z_ZS___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111100001111110000000000")), iface.bits_lit(32U, "00000100101000001100010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQINCW_Z_ZS___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQSUB_Z_ZI___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111100000000000000")), iface.bits_lit(32U, "00100101001001111100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQSUB_Z_ZI___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UQSUB_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000100001000000001110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UQSUB_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_USDOT_Z_ZZZ_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01000100100000000111100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_USDOT_Z_ZZZ_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_USDOT_Z_ZZZi_S_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01000100101000000001100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_USDOT_Z_ZZZi_S_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_USMMLA_Z_ZZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "01000101100000001001100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_USMMLA_Z_ZZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UUNPKHI_Z_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111110000000000")), iface.bits_lit(32U, "00000101001100110011100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UUNPKHI_Z_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UUNPKLO_Z_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111111110000000000")), iface.bits_lit(32U, "00000101001100100011100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UUNPKLO_Z_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UXTB_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000100011010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UXTB_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UXTH_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000100111010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UXTH_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UXTW_Z_P_Z___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001111111110000000000000")), iface.bits_lit(32U, "00000100000101011010000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UXTW_Z_P_Z___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UZP1_P_PP___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001100001111111000010000")), iface.bits_lit(32U, "00000101001000000100100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UZP1_P_PP___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UZP1_Z_ZZ_Q_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "00000101101000000000100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UZP1_Z_ZZ_Q_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UZP1_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000101001000000110100000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UZP1_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UZP2_P_PP___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001100001111111000010000")), iface.bits_lit(32U, "00000101001000000100110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UZP2_P_PP___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UZP2_Z_ZZ_Q_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "00000101101000000000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UZP2_Z_ZZ_Q_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_UZP2_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000101001000000110110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_UZP2_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_WHILELE_P_P_RR___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110110000010000")), iface.bits_lit(32U, "00100101001000000000010000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_WHILELE_P_P_RR___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_WHILELO_P_P_RR___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110110000010000")), iface.bits_lit(32U, "00100101001000000000110000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_WHILELO_P_P_RR___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_WHILELS_P_P_RR___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110110000010000")), iface.bits_lit(32U, "00100101001000000000110000010000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_WHILELS_P_P_RR___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_WHILELT_P_P_RR___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001110110000010000")), iface.bits_lit(32U, "00100101001000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_WHILELT_P_P_RR___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_WRFFR_F_P___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111111111111111000011111")), iface.bits_lit(32U, "00100101001010001001000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_WRFFR_F_P___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ZIP1_P_PP___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001100001111111000010000")), iface.bits_lit(32U, "00000101001000000100000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ZIP1_P_PP___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ZIP1_Z_ZZ_Q_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "00000101101000000000000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ZIP1_Z_ZZ_Q_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ZIP1_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000101001000000110000000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ZIP1_Z_ZZ___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ZIP2_P_PP___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001100001111111000010000")), iface.bits_lit(32U, "00000101001000000100010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ZIP2_P_PP___decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ZIP2_Z_ZZ_Q_decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111111000001111110000000000")), iface.bits_lit(32U, "00000101101000000000010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ZIP2_Z_ZZ_Q_decode_test

template <typename Traits>
bool aslp_lifter<Traits>::f_ZIP2_Z_ZZ___decode_test(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.f_and_bits(v_enc, iface.bits_lit(32U, "11111111001000001111110000000000")), iface.bits_lit(32U, "00000101001000000110010000000000"))) {
    return (true);
  } else {
    return (false);
  } // if

} // f_ZIP2_Z_ZZ___decode_test

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
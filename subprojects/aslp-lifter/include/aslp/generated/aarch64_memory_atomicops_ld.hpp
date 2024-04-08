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
void aslp_lifter<Traits>::f_aarch64_memory_atomicops_ld(typename Traits::bits v_enc) {
  if (iface.f_eq_bits(iface.bits_lit(2U, "00"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")))) {
    auto v_If8__1 = iface.bits_zero(iface.bigint_lit("5"));
    if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111")))) {
      v_If8__1 = iface.bits_lit(5U, "01001");
    } else {
      v_If8__1 = iface.bits_lit(5U, "00101");
    } // if
    auto v_If9__1 = iface.bits_zero(iface.bigint_lit("5"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If9__1 = iface.bits_lit(5U, "01001");
    } else {
      v_If9__1 = iface.bits_lit(5U, "00101");
    } // if
    auto v_op__1 = iface.bits_zero(iface.bigint_lit("4"));
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "000"))) {
      v_op__1 = iface.bits_lit(4U, "0000");
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "001"))) {
        v_op__1 = iface.bits_lit(4U, "0001");
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "010"))) {
          v_op__1 = iface.bits_lit(4U, "0010");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011"))) {
            v_op__1 = iface.bits_lit(4U, "0011");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) {
              v_op__1 = iface.bits_lit(4U, "0100");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) {
                v_op__1 = iface.bits_lit(4U, "0101");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) {
                  v_op__1 = iface.bits_lit(4U, "0110");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) {
                    v_op__1 = iface.bits_lit(4U, "0111");
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
    auto v_X_read11__2 = typename Traits::rt_expr{};
    assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
    if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      v_X_read11__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("8"));
    } else {
      v_X_read11__2 = iface.f_gen_bit_lit(iface.bits_lit(8U, "00000000"));
    } // if
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
      auto v_newvalue__2 = typename Traits::rt_expr{};
      iface.f_AtomicStart();
      const auto v_Exp20__3 = iface.f_decl_bv("Exp20__3", iface.bigint_lit("8"));
      iface.f_gen_store(v_Exp20__3, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))));
      if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0000"))) {
        v_newvalue__2 = iface.f_gen_add_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))), v_X_read11__2);
      } else {
        if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0001"))) {
          v_newvalue__2 = iface.f_gen_and_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))), iface.f_gen_not_bits(v_X_read11__2));
        } else {
          if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0010"))) {
            v_newvalue__2 = iface.f_gen_eor_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))), v_X_read11__2);
          } else {
            if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0011"))) {
              v_newvalue__2 = iface.f_gen_or_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))), v_X_read11__2);
            } else {
              if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0100"))) {
                const auto v_If90__2 = iface.f_decl_bv("If90__2", iface.bigint_lit("8"));
                const auto v_temp0 = iface.f_gen_branch(iface.f_gen_slt_bits(v_X_read11__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1)))));
                iface.f_switch_context(iface.f_true_branch(v_temp0));
                iface.f_gen_store(v_If90__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))));
                iface.f_switch_context(iface.f_false_branch(v_temp0));
                iface.f_gen_store(v_If90__2, v_X_read11__2);
                iface.f_switch_context(iface.f_merge_branch(v_temp0));
                v_newvalue__2 = iface.f_gen_load(v_If90__2);
              } else {
                if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0101"))) {
                  const auto v_If93__2 = iface.f_decl_bv("If93__2", iface.bigint_lit("8"));
                  const auto v_temp1 = iface.f_gen_branch(iface.f_gen_slt_bits(v_X_read11__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1)))));
                  iface.f_switch_context(iface.f_true_branch(v_temp1));
                  iface.f_gen_store(v_If93__2, v_X_read11__2);
                  iface.f_switch_context(iface.f_false_branch(v_temp1));
                  iface.f_gen_store(v_If93__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp1));
                  v_newvalue__2 = iface.f_gen_load(v_If93__2);
                } else {
                  if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0110"))) {
                    const auto v_If96__2 = iface.f_decl_bv("If96__2", iface.bigint_lit("8"));
                    const auto v_temp2 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(v_X_read11__2, iface.f_gen_int_lit(iface.bigint_lit("9"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))), iface.f_gen_int_lit(iface.bigint_lit("9")))));
                    iface.f_switch_context(iface.f_true_branch(v_temp2));
                    iface.f_gen_store(v_If96__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))));
                    iface.f_switch_context(iface.f_false_branch(v_temp2));
                    iface.f_gen_store(v_If96__2, v_X_read11__2);
                    iface.f_switch_context(iface.f_merge_branch(v_temp2));
                    v_newvalue__2 = iface.f_gen_load(v_If96__2);
                  } else {
                    if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0111"))) {
                      const auto v_If99__2 = iface.f_decl_bv("If99__2", iface.bigint_lit("8"));
                      const auto v_temp3 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(v_X_read11__2, iface.f_gen_int_lit(iface.bigint_lit("9"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))), iface.f_gen_int_lit(iface.bigint_lit("9")))));
                      iface.f_switch_context(iface.f_true_branch(v_temp3));
                      iface.f_gen_store(v_If99__2, v_X_read11__2);
                      iface.f_switch_context(iface.f_false_branch(v_temp3));
                      iface.f_gen_store(v_If99__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))));
                      iface.f_switch_context(iface.f_merge_branch(v_temp3));
                      v_newvalue__2 = iface.f_gen_load(v_If99__2);
                    } else {
                      if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "1000"))) {
                        v_newvalue__2 = v_X_read11__2;
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
      iface.f_gen_Mem_set(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If9__1)), v_newvalue__2);
      iface.f_AtomicEnd();
      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_load(v_Exp20__3), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
        } // if
      } // if
    } else {
      auto v_X_read170__2 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        v_X_read170__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
      } else {
        v_X_read170__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
      } // if
      auto v_newvalue__2 = typename Traits::rt_expr{};
      iface.f_AtomicStart();
      const auto v_Exp177__3 = iface.f_decl_bv("Exp177__3", iface.bigint_lit("8"));
      iface.f_gen_store(v_Exp177__3, iface.f_gen_Mem_read(v_X_read170__2, iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))));
      if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0000"))) {
        v_newvalue__2 = iface.f_gen_add_bits(iface.f_gen_Mem_read(v_X_read170__2, iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))), v_X_read11__2);
      } else {
        if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0001"))) {
          v_newvalue__2 = iface.f_gen_and_bits(iface.f_gen_Mem_read(v_X_read170__2, iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))), iface.f_gen_not_bits(v_X_read11__2));
        } else {
          if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0010"))) {
            v_newvalue__2 = iface.f_gen_eor_bits(iface.f_gen_Mem_read(v_X_read170__2, iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))), v_X_read11__2);
          } else {
            if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0011"))) {
              v_newvalue__2 = iface.f_gen_or_bits(iface.f_gen_Mem_read(v_X_read170__2, iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))), v_X_read11__2);
            } else {
              if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0100"))) {
                const auto v_If247__2 = iface.f_decl_bv("If247__2", iface.bigint_lit("8"));
                const auto v_temp4 = iface.f_gen_branch(iface.f_gen_slt_bits(v_X_read11__2, iface.f_gen_Mem_read(v_X_read170__2, iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1)))));
                iface.f_switch_context(iface.f_true_branch(v_temp4));
                iface.f_gen_store(v_If247__2, iface.f_gen_Mem_read(v_X_read170__2, iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))));
                iface.f_switch_context(iface.f_false_branch(v_temp4));
                iface.f_gen_store(v_If247__2, v_X_read11__2);
                iface.f_switch_context(iface.f_merge_branch(v_temp4));
                v_newvalue__2 = iface.f_gen_load(v_If247__2);
              } else {
                if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0101"))) {
                  const auto v_If250__2 = iface.f_decl_bv("If250__2", iface.bigint_lit("8"));
                  const auto v_temp5 = iface.f_gen_branch(iface.f_gen_slt_bits(v_X_read11__2, iface.f_gen_Mem_read(v_X_read170__2, iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1)))));
                  iface.f_switch_context(iface.f_true_branch(v_temp5));
                  iface.f_gen_store(v_If250__2, v_X_read11__2);
                  iface.f_switch_context(iface.f_false_branch(v_temp5));
                  iface.f_gen_store(v_If250__2, iface.f_gen_Mem_read(v_X_read170__2, iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))));
                  iface.f_switch_context(iface.f_merge_branch(v_temp5));
                  v_newvalue__2 = iface.f_gen_load(v_If250__2);
                } else {
                  if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0110"))) {
                    const auto v_If253__2 = iface.f_decl_bv("If253__2", iface.bigint_lit("8"));
                    const auto v_temp6 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(v_X_read11__2, iface.f_gen_int_lit(iface.bigint_lit("9"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(v_X_read170__2, iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))), iface.f_gen_int_lit(iface.bigint_lit("9")))));
                    iface.f_switch_context(iface.f_true_branch(v_temp6));
                    iface.f_gen_store(v_If253__2, iface.f_gen_Mem_read(v_X_read170__2, iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))));
                    iface.f_switch_context(iface.f_false_branch(v_temp6));
                    iface.f_gen_store(v_If253__2, v_X_read11__2);
                    iface.f_switch_context(iface.f_merge_branch(v_temp6));
                    v_newvalue__2 = iface.f_gen_load(v_If253__2);
                  } else {
                    if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0111"))) {
                      const auto v_If256__2 = iface.f_decl_bv("If256__2", iface.bigint_lit("8"));
                      const auto v_temp7 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(v_X_read11__2, iface.f_gen_int_lit(iface.bigint_lit("9"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(v_X_read170__2, iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))), iface.f_gen_int_lit(iface.bigint_lit("9")))));
                      iface.f_switch_context(iface.f_true_branch(v_temp7));
                      iface.f_gen_store(v_If256__2, v_X_read11__2);
                      iface.f_switch_context(iface.f_false_branch(v_temp7));
                      iface.f_gen_store(v_If256__2, iface.f_gen_Mem_read(v_X_read170__2, iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If8__1))));
                      iface.f_switch_context(iface.f_merge_branch(v_temp7));
                      v_newvalue__2 = iface.f_gen_load(v_If256__2);
                    } else {
                      if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "1000"))) {
                        v_newvalue__2 = v_X_read11__2;
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
      iface.f_gen_Mem_set(v_X_read170__2, iface.f_gen_int_lit(iface.bigint_lit("1")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If9__1)), v_newvalue__2);
      iface.f_AtomicEnd();
      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_load(v_Exp177__3), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
        } // if
      } // if
    } // if
  } else {
    if (iface.f_eq_bits(iface.bits_lit(2U, "01"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")))) {
      auto v_If329__1 = iface.bits_zero(iface.bigint_lit("5"));
      if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111")))) {
        v_If329__1 = iface.bits_lit(5U, "01001");
      } else {
        v_If329__1 = iface.bits_lit(5U, "00101");
      } // if
      auto v_If330__1 = iface.bits_zero(iface.bigint_lit("5"));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        v_If330__1 = iface.bits_lit(5U, "01001");
      } else {
        v_If330__1 = iface.bits_lit(5U, "00101");
      } // if
      auto v_op__1 = iface.bits_zero(iface.bigint_lit("4"));
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "000"))) {
        v_op__1 = iface.bits_lit(4U, "0000");
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "001"))) {
          v_op__1 = iface.bits_lit(4U, "0001");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "010"))) {
            v_op__1 = iface.bits_lit(4U, "0010");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011"))) {
              v_op__1 = iface.bits_lit(4U, "0011");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) {
                v_op__1 = iface.bits_lit(4U, "0100");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) {
                  v_op__1 = iface.bits_lit(4U, "0101");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) {
                    v_op__1 = iface.bits_lit(4U, "0110");
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) {
                      v_op__1 = iface.bits_lit(4U, "0111");
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
      auto v_X_read332__2 = typename Traits::rt_expr{};
      assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
      if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        v_X_read332__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("16"));
      } else {
        v_X_read332__2 = iface.f_gen_bit_lit(iface.bits_lit(16U, "0000000000000000"));
      } // if
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
        auto v_newvalue__2 = typename Traits::rt_expr{};
        iface.f_AtomicStart();
        const auto v_Exp341__3 = iface.f_decl_bv("Exp341__3", iface.bigint_lit("16"));
        iface.f_gen_store(v_Exp341__3, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))));
        if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0000"))) {
          v_newvalue__2 = iface.f_gen_add_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))), v_X_read332__2);
        } else {
          if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0001"))) {
            v_newvalue__2 = iface.f_gen_and_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))), iface.f_gen_not_bits(v_X_read332__2));
          } else {
            if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0010"))) {
              v_newvalue__2 = iface.f_gen_eor_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))), v_X_read332__2);
            } else {
              if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0011"))) {
                v_newvalue__2 = iface.f_gen_or_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))), v_X_read332__2);
              } else {
                if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0100"))) {
                  const auto v_If411__2 = iface.f_decl_bv("If411__2", iface.bigint_lit("16"));
                  const auto v_temp8 = iface.f_gen_branch(iface.f_gen_slt_bits(v_X_read332__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1)))));
                  iface.f_switch_context(iface.f_true_branch(v_temp8));
                  iface.f_gen_store(v_If411__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))));
                  iface.f_switch_context(iface.f_false_branch(v_temp8));
                  iface.f_gen_store(v_If411__2, v_X_read332__2);
                  iface.f_switch_context(iface.f_merge_branch(v_temp8));
                  v_newvalue__2 = iface.f_gen_load(v_If411__2);
                } else {
                  if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0101"))) {
                    const auto v_If414__2 = iface.f_decl_bv("If414__2", iface.bigint_lit("16"));
                    const auto v_temp9 = iface.f_gen_branch(iface.f_gen_slt_bits(v_X_read332__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1)))));
                    iface.f_switch_context(iface.f_true_branch(v_temp9));
                    iface.f_gen_store(v_If414__2, v_X_read332__2);
                    iface.f_switch_context(iface.f_false_branch(v_temp9));
                    iface.f_gen_store(v_If414__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))));
                    iface.f_switch_context(iface.f_merge_branch(v_temp9));
                    v_newvalue__2 = iface.f_gen_load(v_If414__2);
                  } else {
                    if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0110"))) {
                      const auto v_If417__2 = iface.f_decl_bv("If417__2", iface.bigint_lit("16"));
                      const auto v_temp10 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(v_X_read332__2, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))), iface.f_gen_int_lit(iface.bigint_lit("17")))));
                      iface.f_switch_context(iface.f_true_branch(v_temp10));
                      iface.f_gen_store(v_If417__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))));
                      iface.f_switch_context(iface.f_false_branch(v_temp10));
                      iface.f_gen_store(v_If417__2, v_X_read332__2);
                      iface.f_switch_context(iface.f_merge_branch(v_temp10));
                      v_newvalue__2 = iface.f_gen_load(v_If417__2);
                    } else {
                      if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0111"))) {
                        const auto v_If420__2 = iface.f_decl_bv("If420__2", iface.bigint_lit("16"));
                        const auto v_temp11 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(v_X_read332__2, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))), iface.f_gen_int_lit(iface.bigint_lit("17")))));
                        iface.f_switch_context(iface.f_true_branch(v_temp11));
                        iface.f_gen_store(v_If420__2, v_X_read332__2);
                        iface.f_switch_context(iface.f_false_branch(v_temp11));
                        iface.f_gen_store(v_If420__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))));
                        iface.f_switch_context(iface.f_merge_branch(v_temp11));
                        v_newvalue__2 = iface.f_gen_load(v_If420__2);
                      } else {
                        if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "1000"))) {
                          v_newvalue__2 = v_X_read332__2;
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
        iface.f_gen_Mem_set(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If330__1)), v_newvalue__2);
        iface.f_AtomicEnd();
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_load(v_Exp341__3), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
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
        auto v_newvalue__2 = typename Traits::rt_expr{};
        iface.f_AtomicStart();
        const auto v_Exp498__3 = iface.f_decl_bv("Exp498__3", iface.bigint_lit("16"));
        iface.f_gen_store(v_Exp498__3, iface.f_gen_Mem_read(v_X_read491__2, iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))));
        if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0000"))) {
          v_newvalue__2 = iface.f_gen_add_bits(iface.f_gen_Mem_read(v_X_read491__2, iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))), v_X_read332__2);
        } else {
          if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0001"))) {
            v_newvalue__2 = iface.f_gen_and_bits(iface.f_gen_Mem_read(v_X_read491__2, iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))), iface.f_gen_not_bits(v_X_read332__2));
          } else {
            if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0010"))) {
              v_newvalue__2 = iface.f_gen_eor_bits(iface.f_gen_Mem_read(v_X_read491__2, iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))), v_X_read332__2);
            } else {
              if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0011"))) {
                v_newvalue__2 = iface.f_gen_or_bits(iface.f_gen_Mem_read(v_X_read491__2, iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))), v_X_read332__2);
              } else {
                if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0100"))) {
                  const auto v_If568__2 = iface.f_decl_bv("If568__2", iface.bigint_lit("16"));
                  const auto v_temp12 = iface.f_gen_branch(iface.f_gen_slt_bits(v_X_read332__2, iface.f_gen_Mem_read(v_X_read491__2, iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1)))));
                  iface.f_switch_context(iface.f_true_branch(v_temp12));
                  iface.f_gen_store(v_If568__2, iface.f_gen_Mem_read(v_X_read491__2, iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))));
                  iface.f_switch_context(iface.f_false_branch(v_temp12));
                  iface.f_gen_store(v_If568__2, v_X_read332__2);
                  iface.f_switch_context(iface.f_merge_branch(v_temp12));
                  v_newvalue__2 = iface.f_gen_load(v_If568__2);
                } else {
                  if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0101"))) {
                    const auto v_If571__2 = iface.f_decl_bv("If571__2", iface.bigint_lit("16"));
                    const auto v_temp13 = iface.f_gen_branch(iface.f_gen_slt_bits(v_X_read332__2, iface.f_gen_Mem_read(v_X_read491__2, iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1)))));
                    iface.f_switch_context(iface.f_true_branch(v_temp13));
                    iface.f_gen_store(v_If571__2, v_X_read332__2);
                    iface.f_switch_context(iface.f_false_branch(v_temp13));
                    iface.f_gen_store(v_If571__2, iface.f_gen_Mem_read(v_X_read491__2, iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))));
                    iface.f_switch_context(iface.f_merge_branch(v_temp13));
                    v_newvalue__2 = iface.f_gen_load(v_If571__2);
                  } else {
                    if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0110"))) {
                      const auto v_If574__2 = iface.f_decl_bv("If574__2", iface.bigint_lit("16"));
                      const auto v_temp14 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(v_X_read332__2, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(v_X_read491__2, iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))), iface.f_gen_int_lit(iface.bigint_lit("17")))));
                      iface.f_switch_context(iface.f_true_branch(v_temp14));
                      iface.f_gen_store(v_If574__2, iface.f_gen_Mem_read(v_X_read491__2, iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))));
                      iface.f_switch_context(iface.f_false_branch(v_temp14));
                      iface.f_gen_store(v_If574__2, v_X_read332__2);
                      iface.f_switch_context(iface.f_merge_branch(v_temp14));
                      v_newvalue__2 = iface.f_gen_load(v_If574__2);
                    } else {
                      if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0111"))) {
                        const auto v_If577__2 = iface.f_decl_bv("If577__2", iface.bigint_lit("16"));
                        const auto v_temp15 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(v_X_read332__2, iface.f_gen_int_lit(iface.bigint_lit("17"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(v_X_read491__2, iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))), iface.f_gen_int_lit(iface.bigint_lit("17")))));
                        iface.f_switch_context(iface.f_true_branch(v_temp15));
                        iface.f_gen_store(v_If577__2, v_X_read332__2);
                        iface.f_switch_context(iface.f_false_branch(v_temp15));
                        iface.f_gen_store(v_If577__2, iface.f_gen_Mem_read(v_X_read491__2, iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If329__1))));
                        iface.f_switch_context(iface.f_merge_branch(v_temp15));
                        v_newvalue__2 = iface.f_gen_load(v_If577__2);
                      } else {
                        if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "1000"))) {
                          v_newvalue__2 = v_X_read332__2;
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
        iface.f_gen_Mem_set(v_X_read491__2, iface.f_gen_int_lit(iface.bigint_lit("2")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If330__1)), v_newvalue__2);
        iface.f_AtomicEnd();
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_ZeroExtend(iface.f_gen_load(v_Exp498__3), iface.f_gen_int_lit(iface.bigint_lit("32"))), iface.f_gen_int_lit(iface.bigint_lit("64"))));
          } // if
        } // if
      } // if
    } else {
      if (iface.f_eq_bits(iface.bits_lit(2U, "10"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")))) {
        auto v_If650__1 = iface.bits_zero(iface.bigint_lit("5"));
        if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111")))) {
          v_If650__1 = iface.bits_lit(5U, "01001");
        } else {
          v_If650__1 = iface.bits_lit(5U, "00101");
        } // if
        auto v_If651__1 = iface.bits_zero(iface.bigint_lit("5"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          v_If651__1 = iface.bits_lit(5U, "01001");
        } else {
          v_If651__1 = iface.bits_lit(5U, "00101");
        } // if
        auto v_op__1 = iface.bits_zero(iface.bigint_lit("4"));
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "000"))) {
          v_op__1 = iface.bits_lit(4U, "0000");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "001"))) {
            v_op__1 = iface.bits_lit(4U, "0001");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "010"))) {
              v_op__1 = iface.bits_lit(4U, "0010");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011"))) {
                v_op__1 = iface.bits_lit(4U, "0011");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) {
                  v_op__1 = iface.bits_lit(4U, "0100");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) {
                    v_op__1 = iface.bits_lit(4U, "0101");
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) {
                      v_op__1 = iface.bits_lit(4U, "0110");
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) {
                        v_op__1 = iface.bits_lit(4U, "0111");
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
        auto v_X_read653__2 = typename Traits::rt_expr{};
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          v_X_read653__2 = iface.f_gen_slice(iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")))), iface.bigint_lit("0"), iface.bigint_lit("32"));
        } else {
          v_X_read653__2 = iface.f_gen_bit_lit(iface.bits_lit(32U, "00000000000000000000000000000000"));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          auto v_newvalue__2 = typename Traits::rt_expr{};
          iface.f_AtomicStart();
          const auto v_Exp662__3 = iface.f_decl_bv("Exp662__3", iface.bigint_lit("32"));
          iface.f_gen_store(v_Exp662__3, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))));
          if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0000"))) {
            v_newvalue__2 = iface.f_gen_add_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))), v_X_read653__2);
          } else {
            if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0001"))) {
              v_newvalue__2 = iface.f_gen_and_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))), iface.f_gen_not_bits(v_X_read653__2));
            } else {
              if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0010"))) {
                v_newvalue__2 = iface.f_gen_eor_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))), v_X_read653__2);
              } else {
                if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0011"))) {
                  v_newvalue__2 = iface.f_gen_or_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))), v_X_read653__2);
                } else {
                  if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0100"))) {
                    const auto v_If732__2 = iface.f_decl_bv("If732__2", iface.bigint_lit("32"));
                    const auto v_temp16 = iface.f_gen_branch(iface.f_gen_slt_bits(v_X_read653__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1)))));
                    iface.f_switch_context(iface.f_true_branch(v_temp16));
                    iface.f_gen_store(v_If732__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))));
                    iface.f_switch_context(iface.f_false_branch(v_temp16));
                    iface.f_gen_store(v_If732__2, v_X_read653__2);
                    iface.f_switch_context(iface.f_merge_branch(v_temp16));
                    v_newvalue__2 = iface.f_gen_load(v_If732__2);
                  } else {
                    if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0101"))) {
                      const auto v_If735__2 = iface.f_decl_bv("If735__2", iface.bigint_lit("32"));
                      const auto v_temp17 = iface.f_gen_branch(iface.f_gen_slt_bits(v_X_read653__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1)))));
                      iface.f_switch_context(iface.f_true_branch(v_temp17));
                      iface.f_gen_store(v_If735__2, v_X_read653__2);
                      iface.f_switch_context(iface.f_false_branch(v_temp17));
                      iface.f_gen_store(v_If735__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))));
                      iface.f_switch_context(iface.f_merge_branch(v_temp17));
                      v_newvalue__2 = iface.f_gen_load(v_If735__2);
                    } else {
                      if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0110"))) {
                        const auto v_If738__2 = iface.f_decl_bv("If738__2", iface.bigint_lit("32"));
                        const auto v_temp18 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(v_X_read653__2, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))), iface.f_gen_int_lit(iface.bigint_lit("33")))));
                        iface.f_switch_context(iface.f_true_branch(v_temp18));
                        iface.f_gen_store(v_If738__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))));
                        iface.f_switch_context(iface.f_false_branch(v_temp18));
                        iface.f_gen_store(v_If738__2, v_X_read653__2);
                        iface.f_switch_context(iface.f_merge_branch(v_temp18));
                        v_newvalue__2 = iface.f_gen_load(v_If738__2);
                      } else {
                        if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0111"))) {
                          const auto v_If741__2 = iface.f_decl_bv("If741__2", iface.bigint_lit("32"));
                          const auto v_temp19 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(v_X_read653__2, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))), iface.f_gen_int_lit(iface.bigint_lit("33")))));
                          iface.f_switch_context(iface.f_true_branch(v_temp19));
                          iface.f_gen_store(v_If741__2, v_X_read653__2);
                          iface.f_switch_context(iface.f_false_branch(v_temp19));
                          iface.f_gen_store(v_If741__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))));
                          iface.f_switch_context(iface.f_merge_branch(v_temp19));
                          v_newvalue__2 = iface.f_gen_load(v_If741__2);
                        } else {
                          if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "1000"))) {
                            v_newvalue__2 = v_X_read653__2;
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
          iface.f_gen_Mem_set(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If651__1)), v_newvalue__2);
          iface.f_AtomicEnd();
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_Exp662__3), iface.f_gen_int_lit(iface.bigint_lit("64"))));
            } // if
          } // if
        } else {
          auto v_X_read812__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read812__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read812__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          auto v_newvalue__2 = typename Traits::rt_expr{};
          iface.f_AtomicStart();
          const auto v_Exp819__3 = iface.f_decl_bv("Exp819__3", iface.bigint_lit("32"));
          iface.f_gen_store(v_Exp819__3, iface.f_gen_Mem_read(v_X_read812__2, iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))));
          if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0000"))) {
            v_newvalue__2 = iface.f_gen_add_bits(iface.f_gen_Mem_read(v_X_read812__2, iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))), v_X_read653__2);
          } else {
            if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0001"))) {
              v_newvalue__2 = iface.f_gen_and_bits(iface.f_gen_Mem_read(v_X_read812__2, iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))), iface.f_gen_not_bits(v_X_read653__2));
            } else {
              if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0010"))) {
                v_newvalue__2 = iface.f_gen_eor_bits(iface.f_gen_Mem_read(v_X_read812__2, iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))), v_X_read653__2);
              } else {
                if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0011"))) {
                  v_newvalue__2 = iface.f_gen_or_bits(iface.f_gen_Mem_read(v_X_read812__2, iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))), v_X_read653__2);
                } else {
                  if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0100"))) {
                    const auto v_If889__2 = iface.f_decl_bv("If889__2", iface.bigint_lit("32"));
                    const auto v_temp20 = iface.f_gen_branch(iface.f_gen_slt_bits(v_X_read653__2, iface.f_gen_Mem_read(v_X_read812__2, iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1)))));
                    iface.f_switch_context(iface.f_true_branch(v_temp20));
                    iface.f_gen_store(v_If889__2, iface.f_gen_Mem_read(v_X_read812__2, iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))));
                    iface.f_switch_context(iface.f_false_branch(v_temp20));
                    iface.f_gen_store(v_If889__2, v_X_read653__2);
                    iface.f_switch_context(iface.f_merge_branch(v_temp20));
                    v_newvalue__2 = iface.f_gen_load(v_If889__2);
                  } else {
                    if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0101"))) {
                      const auto v_If892__2 = iface.f_decl_bv("If892__2", iface.bigint_lit("32"));
                      const auto v_temp21 = iface.f_gen_branch(iface.f_gen_slt_bits(v_X_read653__2, iface.f_gen_Mem_read(v_X_read812__2, iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1)))));
                      iface.f_switch_context(iface.f_true_branch(v_temp21));
                      iface.f_gen_store(v_If892__2, v_X_read653__2);
                      iface.f_switch_context(iface.f_false_branch(v_temp21));
                      iface.f_gen_store(v_If892__2, iface.f_gen_Mem_read(v_X_read812__2, iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))));
                      iface.f_switch_context(iface.f_merge_branch(v_temp21));
                      v_newvalue__2 = iface.f_gen_load(v_If892__2);
                    } else {
                      if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0110"))) {
                        const auto v_If895__2 = iface.f_decl_bv("If895__2", iface.bigint_lit("32"));
                        const auto v_temp22 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(v_X_read653__2, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(v_X_read812__2, iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))), iface.f_gen_int_lit(iface.bigint_lit("33")))));
                        iface.f_switch_context(iface.f_true_branch(v_temp22));
                        iface.f_gen_store(v_If895__2, iface.f_gen_Mem_read(v_X_read812__2, iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))));
                        iface.f_switch_context(iface.f_false_branch(v_temp22));
                        iface.f_gen_store(v_If895__2, v_X_read653__2);
                        iface.f_switch_context(iface.f_merge_branch(v_temp22));
                        v_newvalue__2 = iface.f_gen_load(v_If895__2);
                      } else {
                        if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0111"))) {
                          const auto v_If898__2 = iface.f_decl_bv("If898__2", iface.bigint_lit("32"));
                          const auto v_temp23 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(v_X_read653__2, iface.f_gen_int_lit(iface.bigint_lit("33"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(v_X_read812__2, iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))), iface.f_gen_int_lit(iface.bigint_lit("33")))));
                          iface.f_switch_context(iface.f_true_branch(v_temp23));
                          iface.f_gen_store(v_If898__2, v_X_read653__2);
                          iface.f_switch_context(iface.f_false_branch(v_temp23));
                          iface.f_gen_store(v_If898__2, iface.f_gen_Mem_read(v_X_read812__2, iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If650__1))));
                          iface.f_switch_context(iface.f_merge_branch(v_temp23));
                          v_newvalue__2 = iface.f_gen_load(v_If898__2);
                        } else {
                          if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "1000"))) {
                            v_newvalue__2 = v_X_read653__2;
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
          iface.f_gen_Mem_set(v_X_read812__2, iface.f_gen_int_lit(iface.bigint_lit("4")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If651__1)), v_newvalue__2);
          iface.f_AtomicEnd();
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_ZeroExtend(iface.f_gen_load(v_Exp819__3), iface.f_gen_int_lit(iface.bigint_lit("64"))));
            } // if
          } // if
        } // if
      } else {
        if (iface.f_eq_bits(iface.bits_lit(2U, "11"), iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("30"), /*wd*/ iface.bigint_lit("2")))) {
          auto v_If971__1 = iface.bits_zero(iface.bigint_lit("5"));
          if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("23"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111")))) {
            v_If971__1 = iface.bits_lit(5U, "01001");
          } else {
            v_If971__1 = iface.bits_lit(5U, "00101");
          } // if
          auto v_If972__1 = iface.bits_zero(iface.bigint_lit("5"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("22"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
            v_If972__1 = iface.bits_lit(5U, "01001");
          } else {
            v_If972__1 = iface.bits_lit(5U, "00101");
          } // if
          auto v_op__1 = iface.bits_zero(iface.bigint_lit("4"));
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "000"))) {
            v_op__1 = iface.bits_lit(4U, "0000");
          } else {
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "001"))) {
              v_op__1 = iface.bits_lit(4U, "0001");
            } else {
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "010"))) {
                v_op__1 = iface.bits_lit(4U, "0010");
              } else {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "011"))) {
                  v_op__1 = iface.bits_lit(4U, "0011");
                } else {
                  if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "100"))) {
                    v_op__1 = iface.bits_lit(4U, "0100");
                  } else {
                    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "101"))) {
                      v_op__1 = iface.bits_lit(4U, "0101");
                    } else {
                      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "110"))) {
                        v_op__1 = iface.bits_lit(4U, "0110");
                      } else {
                        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("12"), /*wd*/ iface.bigint_lit("3")), iface.bits_lit(3U, "111"))) {
                          v_op__1 = iface.bits_lit(4U, "0111");
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
          auto v_X_read974__2 = typename Traits::rt_expr{};
          assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            v_X_read974__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("16"), /*wd*/ iface.bigint_lit("5"))));
          } else {
            v_X_read974__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
            auto v_newvalue__2 = typename Traits::rt_expr{};
            iface.f_AtomicStart();
            const auto v_Exp983__3 = iface.f_decl_bv("Exp983__3", iface.bigint_lit("64"));
            iface.f_gen_store(v_Exp983__3, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))));
            if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0000"))) {
              v_newvalue__2 = iface.f_gen_add_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))), v_X_read974__2);
            } else {
              if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0001"))) {
                v_newvalue__2 = iface.f_gen_and_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))), iface.f_gen_not_bits(v_X_read974__2));
              } else {
                if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0010"))) {
                  v_newvalue__2 = iface.f_gen_eor_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))), v_X_read974__2);
                } else {
                  if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0011"))) {
                    v_newvalue__2 = iface.f_gen_or_bits(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))), v_X_read974__2);
                  } else {
                    if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0100"))) {
                      const auto v_If1053__2 = iface.f_decl_bv("If1053__2", iface.bigint_lit("64"));
                      const auto v_temp24 = iface.f_gen_branch(iface.f_gen_slt_bits(v_X_read974__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1)))));
                      iface.f_switch_context(iface.f_true_branch(v_temp24));
                      iface.f_gen_store(v_If1053__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))));
                      iface.f_switch_context(iface.f_false_branch(v_temp24));
                      iface.f_gen_store(v_If1053__2, v_X_read974__2);
                      iface.f_switch_context(iface.f_merge_branch(v_temp24));
                      v_newvalue__2 = iface.f_gen_load(v_If1053__2);
                    } else {
                      if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0101"))) {
                        const auto v_If1056__2 = iface.f_decl_bv("If1056__2", iface.bigint_lit("64"));
                        const auto v_temp25 = iface.f_gen_branch(iface.f_gen_slt_bits(v_X_read974__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1)))));
                        iface.f_switch_context(iface.f_true_branch(v_temp25));
                        iface.f_gen_store(v_If1056__2, v_X_read974__2);
                        iface.f_switch_context(iface.f_false_branch(v_temp25));
                        iface.f_gen_store(v_If1056__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))));
                        iface.f_switch_context(iface.f_merge_branch(v_temp25));
                        v_newvalue__2 = iface.f_gen_load(v_If1056__2);
                      } else {
                        if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0110"))) {
                          const auto v_If1059__2 = iface.f_decl_bv("If1059__2", iface.bigint_lit("64"));
                          const auto v_temp26 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(v_X_read974__2, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))), iface.f_gen_int_lit(iface.bigint_lit("65")))));
                          iface.f_switch_context(iface.f_true_branch(v_temp26));
                          iface.f_gen_store(v_If1059__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))));
                          iface.f_switch_context(iface.f_false_branch(v_temp26));
                          iface.f_gen_store(v_If1059__2, v_X_read974__2);
                          iface.f_switch_context(iface.f_merge_branch(v_temp26));
                          v_newvalue__2 = iface.f_gen_load(v_If1059__2);
                        } else {
                          if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0111"))) {
                            const auto v_If1062__2 = iface.f_decl_bv("If1062__2", iface.bigint_lit("64"));
                            const auto v_temp27 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(v_X_read974__2, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))), iface.f_gen_int_lit(iface.bigint_lit("65")))));
                            iface.f_switch_context(iface.f_true_branch(v_temp27));
                            iface.f_gen_store(v_If1062__2, v_X_read974__2);
                            iface.f_switch_context(iface.f_false_branch(v_temp27));
                            iface.f_gen_store(v_If1062__2, iface.f_gen_Mem_read(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))));
                            iface.f_switch_context(iface.f_merge_branch(v_temp27));
                            v_newvalue__2 = iface.f_gen_load(v_If1062__2);
                          } else {
                            if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "1000"))) {
                              v_newvalue__2 = v_X_read974__2;
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
            iface.f_gen_Mem_set(iface.f_gen_load(iface.v_SP_EL0()), iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If972__1)), v_newvalue__2);
            iface.f_AtomicEnd();
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_Exp983__3));
              } // if
            } // if
          } else {
            auto v_X_read1133__2 = typename Traits::rt_expr{};
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              v_X_read1133__2 = iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5"))));
            } else {
              v_X_read1133__2 = iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000"));
            } // if
            auto v_newvalue__2 = typename Traits::rt_expr{};
            iface.f_AtomicStart();
            const auto v_Exp1140__3 = iface.f_decl_bv("Exp1140__3", iface.bigint_lit("64"));
            iface.f_gen_store(v_Exp1140__3, iface.f_gen_Mem_read(v_X_read1133__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))));
            if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0000"))) {
              v_newvalue__2 = iface.f_gen_add_bits(iface.f_gen_Mem_read(v_X_read1133__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))), v_X_read974__2);
            } else {
              if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0001"))) {
                v_newvalue__2 = iface.f_gen_and_bits(iface.f_gen_Mem_read(v_X_read1133__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))), iface.f_gen_not_bits(v_X_read974__2));
              } else {
                if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0010"))) {
                  v_newvalue__2 = iface.f_gen_eor_bits(iface.f_gen_Mem_read(v_X_read1133__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))), v_X_read974__2);
                } else {
                  if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0011"))) {
                    v_newvalue__2 = iface.f_gen_or_bits(iface.f_gen_Mem_read(v_X_read1133__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))), v_X_read974__2);
                  } else {
                    if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0100"))) {
                      const auto v_If1210__2 = iface.f_decl_bv("If1210__2", iface.bigint_lit("64"));
                      const auto v_temp28 = iface.f_gen_branch(iface.f_gen_slt_bits(v_X_read974__2, iface.f_gen_Mem_read(v_X_read1133__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1)))));
                      iface.f_switch_context(iface.f_true_branch(v_temp28));
                      iface.f_gen_store(v_If1210__2, iface.f_gen_Mem_read(v_X_read1133__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))));
                      iface.f_switch_context(iface.f_false_branch(v_temp28));
                      iface.f_gen_store(v_If1210__2, v_X_read974__2);
                      iface.f_switch_context(iface.f_merge_branch(v_temp28));
                      v_newvalue__2 = iface.f_gen_load(v_If1210__2);
                    } else {
                      if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0101"))) {
                        const auto v_If1213__2 = iface.f_decl_bv("If1213__2", iface.bigint_lit("64"));
                        const auto v_temp29 = iface.f_gen_branch(iface.f_gen_slt_bits(v_X_read974__2, iface.f_gen_Mem_read(v_X_read1133__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1)))));
                        iface.f_switch_context(iface.f_true_branch(v_temp29));
                        iface.f_gen_store(v_If1213__2, v_X_read974__2);
                        iface.f_switch_context(iface.f_false_branch(v_temp29));
                        iface.f_gen_store(v_If1213__2, iface.f_gen_Mem_read(v_X_read1133__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))));
                        iface.f_switch_context(iface.f_merge_branch(v_temp29));
                        v_newvalue__2 = iface.f_gen_load(v_If1213__2);
                      } else {
                        if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0110"))) {
                          const auto v_If1216__2 = iface.f_decl_bv("If1216__2", iface.bigint_lit("64"));
                          const auto v_temp30 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(v_X_read974__2, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(v_X_read1133__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))), iface.f_gen_int_lit(iface.bigint_lit("65")))));
                          iface.f_switch_context(iface.f_true_branch(v_temp30));
                          iface.f_gen_store(v_If1216__2, iface.f_gen_Mem_read(v_X_read1133__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))));
                          iface.f_switch_context(iface.f_false_branch(v_temp30));
                          iface.f_gen_store(v_If1216__2, v_X_read974__2);
                          iface.f_switch_context(iface.f_merge_branch(v_temp30));
                          v_newvalue__2 = iface.f_gen_load(v_If1216__2);
                        } else {
                          if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "0111"))) {
                            const auto v_If1219__2 = iface.f_decl_bv("If1219__2", iface.bigint_lit("64"));
                            const auto v_temp31 = iface.f_gen_branch(iface.f_gen_slt_bits(iface.f_gen_ZeroExtend(v_X_read974__2, iface.f_gen_int_lit(iface.bigint_lit("65"))), iface.f_gen_ZeroExtend(iface.f_gen_Mem_read(v_X_read1133__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))), iface.f_gen_int_lit(iface.bigint_lit("65")))));
                            iface.f_switch_context(iface.f_true_branch(v_temp31));
                            iface.f_gen_store(v_If1219__2, v_X_read974__2);
                            iface.f_switch_context(iface.f_false_branch(v_temp31));
                            iface.f_gen_store(v_If1219__2, iface.f_gen_Mem_read(v_X_read1133__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If971__1))));
                            iface.f_switch_context(iface.f_merge_branch(v_temp31));
                            v_newvalue__2 = iface.f_gen_load(v_If1219__2);
                          } else {
                            if (iface.f_eq_bits(v_op__1, iface.bits_lit(4U, "1000"))) {
                              v_newvalue__2 = v_X_read974__2;
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
            iface.f_gen_Mem_set(v_X_read1133__2, iface.f_gen_int_lit(iface.bigint_lit("8")), iface.f_gen_int_lit(iface.f_cvt_bits_uint(v_If972__1)), v_newvalue__2);
            iface.f_AtomicEnd();
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
                iface.f_gen_array_store(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5"))), iface.f_gen_load(v_Exp1140__3));
              } // if
            } // if
          } // if
        } else {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_memory_atomicops_ld


} // namespace aslp
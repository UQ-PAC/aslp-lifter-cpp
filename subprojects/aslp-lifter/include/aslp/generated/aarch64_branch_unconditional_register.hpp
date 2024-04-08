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
void aslp_lifter<Traits>::f_aarch64_branch_unconditional_register(typename Traits::bits v_enc) {
  auto v_branch_type__1 = iface.bits_zero(iface.bigint_lit("4"));
  if ((! (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1")))) && (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "00000")))) {
    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
  } else {
    auto v_If5__1 = true;
    if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
      v_If5__1 = false;
    } else {
      v_If5__1 = false;
    } // if
    if (v_If5__1) {
      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
    } else {
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "00"))) {
        v_branch_type__1 = iface.bits_lit(4U, "0110");
      } else {
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "01"))) {
          v_branch_type__1 = iface.bits_lit(4U, "0001");
        } else {
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("21"), /*wd*/ iface.bigint_lit("2")), iface.bits_lit(2U, "10"))) {
            v_branch_type__1 = iface.bits_lit(4U, "0100");
          } else {
            throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
          } // if
        } // if
      } // if
      if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
        if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("24"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) && (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111")))) {
          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
        } else {
          if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0100"))) {
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
            } else {
              const auto v_Exp11__2 = iface.f_decl_bv("Exp11__2", iface.bigint_lit("64"));
              iface.f_gen_store(v_Exp11__2, iface.f_gen_array_load(iface.v__R(), iface.bigint_lit("30")));
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
                if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                  if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.bigint_lit("30"), iface.f_gen_add_bits(iface.f_gen_load(iface.v__PC()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))));
                    if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0110"))) {
                      iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "01")));
                    } else {
                      if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                        iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "10")));
                      } else {
                        if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0100"))) {
                          iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
                        } else {
                          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                        } // if
                      } // if
                    } // if
                    iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
                    iface.f_gen_store(iface.v__PC(), iface.f_gen_load(v_Exp11__2));
                  } else {
                    if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0110"))) {
                      iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "01")));
                    } else {
                      if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                        iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "10")));
                      } else {
                        if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0100"))) {
                          iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
                        } else {
                          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                        } // if
                      } // if
                    } // if
                    iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
                    iface.f_gen_store(iface.v__PC(), iface.f_gen_array_load(iface.v__R(), iface.bigint_lit("30")));
                  } // if
                } else {
                  if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                    iface.f_gen_array_store(iface.v__R(), iface.bigint_lit("30"), iface.f_gen_add_bits(iface.f_gen_load(iface.v__PC()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))));
                    if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0110"))) {
                      iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "01")));
                    } else {
                      if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                        iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "10")));
                      } else {
                        if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0100"))) {
                          iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
                        } else {
                          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                        } // if
                      } // if
                    } // if
                    iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
                    iface.f_gen_store(iface.v__PC(), iface.f_gen_load(v_Exp11__2));
                  } else {
                    if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0110"))) {
                      iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "01")));
                    } else {
                      if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                        iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "10")));
                      } else {
                        if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0100"))) {
                          iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
                        } else {
                          throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                        } // if
                      } // if
                    } // if
                    iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
                    iface.f_gen_store(iface.v__PC(), iface.f_gen_array_load(iface.v__R(), iface.bigint_lit("30")));
                  } // if
                } // if
              } else {
                if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.bigint_lit("30"), iface.f_gen_add_bits(iface.f_gen_load(iface.v__PC()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))));
                  if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0110"))) {
                    iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "01")));
                  } else {
                    if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                      iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "10")));
                    } else {
                      if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0100"))) {
                        iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                  iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
                  iface.f_gen_store(iface.v__PC(), iface.f_gen_load(v_Exp11__2));
                } else {
                  if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0110"))) {
                    iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "01")));
                  } else {
                    if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                      iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "10")));
                    } else {
                      if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0100"))) {
                        iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                  iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
                  iface.f_gen_store(iface.v__PC(), iface.f_gen_array_load(iface.v__R(), iface.bigint_lit("30")));
                } // if
              } // if
            } // if
          } else {
            const auto v_X_read58__2 = iface.f_decl_bv("X.read58__2", iface.bigint_lit("64"));
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
            if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
              iface.f_gen_store(v_X_read58__2, iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))));
            } else {
              iface.f_gen_store(v_X_read58__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
            } // if
            if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
              if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("24"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111")))) {
                return;
              } else {
                assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
              } // if
              if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
                if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.bigint_lit("30"), iface.f_gen_add_bits(iface.f_gen_load(iface.v__PC()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))));
                  if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0110"))) {
                    iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "01")));
                  } else {
                    if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                      iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "10")));
                    } else {
                      if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0100"))) {
                        iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                  iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
                  iface.f_gen_store(iface.v__PC(), iface.f_gen_load(v_X_read58__2));
                } else {
                  if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0110"))) {
                    iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "01")));
                  } else {
                    if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                      iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "10")));
                    } else {
                      if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0100"))) {
                        iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                  iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
                  iface.f_gen_store(iface.v__PC(), iface.f_gen_load(v_X_read58__2));
                } // if
              } else {
                if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                  iface.f_gen_array_store(iface.v__R(), iface.bigint_lit("30"), iface.f_gen_add_bits(iface.f_gen_load(iface.v__PC()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))));
                  if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0110"))) {
                    iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "01")));
                  } else {
                    if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                      iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "10")));
                    } else {
                      if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0100"))) {
                        iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                  iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
                  iface.f_gen_store(iface.v__PC(), iface.f_gen_load(v_X_read58__2));
                } else {
                  if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0110"))) {
                    iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "01")));
                  } else {
                    if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                      iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "10")));
                    } else {
                      if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0100"))) {
                        iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
                      } else {
                        throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                      } // if
                    } // if
                  } // if
                  iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
                  iface.f_gen_store(iface.v__PC(), iface.f_gen_load(v_X_read58__2));
                } // if
              } // if
            } else {
              if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                iface.f_gen_array_store(iface.v__R(), iface.bigint_lit("30"), iface.f_gen_add_bits(iface.f_gen_load(iface.v__PC()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))));
                if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0110"))) {
                  iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "01")));
                } else {
                  if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                    iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "10")));
                  } else {
                    if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0100"))) {
                      iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } // if
                iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
                iface.f_gen_store(iface.v__PC(), iface.f_gen_load(v_X_read58__2));
              } else {
                if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0110"))) {
                  iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "01")));
                } else {
                  if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                    iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "10")));
                  } else {
                    if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0100"))) {
                      iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
                    } else {
                      throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                    } // if
                  } // if
                } // if
                iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
                iface.f_gen_store(iface.v__PC(), iface.f_gen_load(v_X_read58__2));
              } // if
            } // if
          } // if
        } // if
      } else {
        const auto v_X_read115__2 = iface.f_decl_bv("X.read115__2", iface.bigint_lit("64"));
        assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
        if (iface.f_ne_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111"))) {
          iface.f_gen_store(v_X_read115__2, iface.f_gen_array_load(iface.v__R(), iface.f_cvt_bits_uint(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("5"), /*wd*/ iface.bigint_lit("5")))));
        } else {
          iface.f_gen_store(v_X_read115__2, iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000000")));
        } // if
        if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("11"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) {
          if ((iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("24"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "1"))) && (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bits_lit(5U, "11111")))) {
            return;
          } else {
            assert((iface.f_sle_bits(iface.bits_lit(6U, "000000"), iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")))) && (iface.f_sle_bits(iface.f_ZeroExtend(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("0"), /*wd*/ iface.bigint_lit("5")), iface.bigint_lit("6")), iface.bits_lit(6U, "011111"))));
          } // if
          if (iface.f_eq_bits(iface.extract_bits(v_enc, /*lo*/ iface.bigint_lit("10"), /*wd*/ iface.bigint_lit("1")), iface.bits_lit(1U, "0"))) {
            if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
              iface.f_gen_array_store(iface.v__R(), iface.bigint_lit("30"), iface.f_gen_add_bits(iface.f_gen_load(iface.v__PC()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))));
              if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0110"))) {
                iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "01")));
              } else {
                if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                  iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "10")));
                } else {
                  if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0100"))) {
                    iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
              iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
              iface.f_gen_store(iface.v__PC(), iface.f_gen_load(v_X_read115__2));
            } else {
              if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0110"))) {
                iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "01")));
              } else {
                if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                  iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "10")));
                } else {
                  if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0100"))) {
                    iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
              iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
              iface.f_gen_store(iface.v__PC(), iface.f_gen_load(v_X_read115__2));
            } // if
          } else {
            if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
              iface.f_gen_array_store(iface.v__R(), iface.bigint_lit("30"), iface.f_gen_add_bits(iface.f_gen_load(iface.v__PC()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))));
              if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0110"))) {
                iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "01")));
              } else {
                if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                  iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "10")));
                } else {
                  if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0100"))) {
                    iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
              iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
              iface.f_gen_store(iface.v__PC(), iface.f_gen_load(v_X_read115__2));
            } else {
              if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0110"))) {
                iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "01")));
              } else {
                if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                  iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "10")));
                } else {
                  if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0100"))) {
                    iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
                  } else {
                    throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                  } // if
                } // if
              } // if
              iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
              iface.f_gen_store(iface.v__PC(), iface.f_gen_load(v_X_read115__2));
            } // if
          } // if
        } else {
          if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
            iface.f_gen_array_store(iface.v__R(), iface.bigint_lit("30"), iface.f_gen_add_bits(iface.f_gen_load(iface.v__PC()), iface.f_gen_bit_lit(iface.bits_lit(64U, "0000000000000000000000000000000000000000000000000000000000000100"))));
            if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0110"))) {
              iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "01")));
            } else {
              if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "10")));
              } else {
                if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0100"))) {
                  iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
            iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
            iface.f_gen_store(iface.v__PC(), iface.f_gen_load(v_X_read115__2));
          } else {
            if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0110"))) {
              iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "01")));
            } else {
              if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0001"))) {
                iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "10")));
              } else {
                if (iface.f_eq_bits(v_branch_type__1, iface.bits_lit(4U, "0100"))) {
                  iface.f_gen_store(iface.v_BTypeNext(), iface.f_gen_bit_lit(iface.bits_lit(2U, "00")));
                } else {
                  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};
                } // if
              } // if
            } // if
            iface.f_gen_store(iface.v___BranchTaken(), iface.f_gen_bool_lit(true));
            iface.f_gen_store(iface.v__PC(), iface.f_gen_load(v_X_read115__2));
          } // if
        } // if
      } // if
    } // if
  } // if

} // f_aarch64_branch_unconditional_register


} // namespace aslp
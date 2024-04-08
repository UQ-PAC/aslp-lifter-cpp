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
void aslp_lifter<Traits>::f_aarch64_system_exceptions_debug_breakpoint(typename Traits::bits v_enc) {
  iface.f_gen_store(iface.v_BTypeCompatible(), iface.f_gen_bool_lit(true));
  throw std::runtime_error{"aslp_lifter: unsupported! " + std::string{__func__} + " @ " + std::string{__FILE__} + ":" + std::to_string(__LINE__)};

} // f_aarch64_system_exceptions_debug_breakpoint


} // namespace aslp
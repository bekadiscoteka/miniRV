// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_riscv.h for the primary calling header

#include "Vtb_riscv_tb_riscv.h"
#include "Vtb_riscv__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtb_riscv_tb_riscv) {
    VL_CELL(cpu, Vtb_riscv_mini_riscv);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtb_riscv_tb_riscv::__Vconfigure(Vtb_riscv__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtb_riscv_tb_riscv::~Vtb_riscv_tb_riscv() {
}

void Vtb_riscv_tb_riscv::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_riscv_tb_riscv::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    __PVT__data = VL_RAND_RESET_I(32);
    __PVT__lfu_rdata = VL_RAND_RESET_I(32);
    __PVT__mem__DOT__wmask = VL_RAND_RESET_I(8);
    __PVT__mem__DOT__aligned_data = VL_RAND_RESET_I(32);
    __Vfunc_mem__DOT__mem_read__1__Vfuncout = 0;
}

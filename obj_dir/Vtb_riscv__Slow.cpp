// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_riscv.h for the primary calling header

#include "Vtb_riscv.h"
#include "Vtb_riscv__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtb_riscv) {
    Vtb_riscv__Syms* __restrict vlSymsp = __VlSymsp = new Vtb_riscv__Syms(this, name());
    Vtb_riscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(tb_riscv, Vtb_riscv_tb_riscv);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtb_riscv::__Vconfigure(Vtb_riscv__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vtb_riscv::~Vtb_riscv() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtb_riscv::_eval_initial(Vtb_riscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv::_eval_initial\n"); );
    Vtb_riscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void Vtb_riscv::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv::final\n"); );
    // Variables
    Vtb_riscv__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtb_riscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtb_riscv::_eval_settle(Vtb_riscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv::_eval_settle\n"); );
    Vtb_riscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_riscv__cpu._settle__TOP__tb_riscv__cpu__2(vlSymsp);
    vlSymsp->TOP__tb_riscv._settle__TOP__tb_riscv__2(vlSymsp);
}

void Vtb_riscv::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_riscv::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
}

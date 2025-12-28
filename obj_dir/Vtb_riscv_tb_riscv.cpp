// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_riscv.h for the primary calling header

#include "Vtb_riscv_tb_riscv.h"
#include "Vtb_riscv__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtb_riscv_tb_riscv::__Vdpiimwrap_mem__DOT__mem_read_TOP__tb_riscv(IData/*31:0*/ raddr, IData/*31:0*/ (&mem_read__Vfuncrtn)) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_riscv_tb_riscv::__Vdpiimwrap_mem__DOT__mem_read_TOP__tb_riscv\n"); );
    // Body
    int raddr__Vcvt;
    raddr__Vcvt = raddr;
    int mem_read__Vfuncrtn__Vcvt;
    mem_read__Vfuncrtn__Vcvt = mem_read(raddr__Vcvt);
    mem_read__Vfuncrtn = mem_read__Vfuncrtn__Vcvt;
}

VL_INLINE_OPT void Vtb_riscv_tb_riscv::__Vdpiimwrap_mem__DOT__mem_write_TOP__tb_riscv(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_riscv_tb_riscv::__Vdpiimwrap_mem__DOT__mem_write_TOP__tb_riscv\n"); );
    // Body
    int waddr__Vcvt;
    waddr__Vcvt = waddr;
    int wdata__Vcvt;
    wdata__Vcvt = wdata;
    char wmask__Vcvt;
    wmask__Vcvt = wmask;
    mem_write(waddr__Vcvt, wdata__Vcvt, wmask__Vcvt);
}

VL_INLINE_OPT void Vtb_riscv_tb_riscv::_sequent__TOP__tb_riscv__1(Vtb_riscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_riscv_tb_riscv::_sequent__TOP__tb_riscv__1\n"); );
    Vtb_riscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_wre) {
        vlSymsp->TOP__tb_riscv.__Vdpiimwrap_mem__DOT__mem_write_TOP__tb_riscv(vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_addr, vlSymsp->TOP__tb_riscv.__PVT__mem__DOT__aligned_data, (IData)(vlSymsp->TOP__tb_riscv.__PVT__mem__DOT__wmask));
    }
}

VL_INLINE_OPT void Vtb_riscv_tb_riscv::_settle__TOP__tb_riscv__2(Vtb_riscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_riscv_tb_riscv::_settle__TOP__tb_riscv__2\n"); );
    Vtb_riscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_riscv.__PVT__mem__DOT__wmask = 0U;
    if (vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_wre) {
        vlSymsp->TOP__tb_riscv.__PVT__mem__DOT__wmask 
            = ((IData)(vlSymsp->TOP__tb_riscv__cpu.__PVT__is_byte)
                ? ((2U & vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_addr)
                    ? ((1U & vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_addr)
                        ? 8U : 4U) : ((1U & vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_addr)
                                       ? 2U : 1U)) : 0xfU);
    }
    vlSymsp->TOP__tb_riscv.__Vdpiimwrap_mem__DOT__mem_read_TOP__tb_riscv(vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_addr, vlSymsp->TOP__tb_riscv.__Vfunc_mem__DOT__mem_read__1__Vfuncout);
    vlSymsp->TOP__tb_riscv.__PVT__data = vlSymsp->TOP__tb_riscv.__Vfunc_mem__DOT__mem_read__1__Vfuncout;
    vlSymsp->TOP__tb_riscv.__PVT__mem__DOT__aligned_data 
        = vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_out;
    if (vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_wre) {
        vlSymsp->TOP__tb_riscv.__PVT__mem__DOT__aligned_data 
            = ((IData)(vlSymsp->TOP__tb_riscv__cpu.__PVT__is_byte)
                ? ((2U & vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_addr)
                    ? ((1U & vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_addr)
                        ? (vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_out 
                           << 0x18U) : (vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_out 
                                        << 0x10U)) : 
                   ((1U & vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_addr)
                     ? (vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_out 
                        << 8U) : vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_out))
                : vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_out);
    }
}

VL_INLINE_OPT void Vtb_riscv_tb_riscv::_sequent__TOP__tb_riscv__3(Vtb_riscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_riscv_tb_riscv::_sequent__TOP__tb_riscv__3\n"); );
    Vtb_riscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vfunc_mem__DOT__mem_read__0__Vfuncout;
    // Body
    vlSymsp->TOP__tb_riscv.__Vdpiimwrap_mem__DOT__mem_read_TOP__tb_riscv(vlSymsp->TOP__tb_riscv__cpu.pc, __Vfunc_mem__DOT__mem_read__0__Vfuncout);
    vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata = __Vfunc_mem__DOT__mem_read__0__Vfuncout;
}

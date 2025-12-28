// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_riscv.h for the primary calling header

#ifndef _VTB_RISCV_MINI_RISCV_H_
#define _VTB_RISCV_MINI_RISCV_H_  // guard

#include "verilated.h"
#include "Vtb_riscv__Dpi.h"

//==========

class Vtb_riscv__Syms;

//----------

VL_MODULE(Vtb_riscv_mini_riscv) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_OUT8(__PVT__is_byte,0,0);
    VL_OUT8(__PVT__dataMem_wre,0,0);
    VL_OUT(__PVT__dataMem_addr,31,0);
    VL_OUT(__PVT__dataMem_out,31,0);
    VL_OUT(__PVT__instr_addr,31,0);
    VL_IN(__PVT__instr,31,0);
    VL_IN(__PVT__dataMem_in,31,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__state;
    SData/*11:0*/ __PVT__immS;
    IData/*31:0*/ zero;
    IData/*31:0*/ ra;
    IData/*31:0*/ sp;
    IData/*31:0*/ gp;
    IData/*31:0*/ tp;
    IData/*31:0*/ t0;
    IData/*31:0*/ t1;
    IData/*31:0*/ t2;
    IData/*31:0*/ s0_fp;
    IData/*31:0*/ s1;
    IData/*31:0*/ a0;
    IData/*31:0*/ a1;
    IData/*31:0*/ a2;
    IData/*31:0*/ a3;
    IData/*31:0*/ a4;
    IData/*31:0*/ a5;
    IData/*31:0*/ pc;
    IData/*31:0*/ __PVT__rs1_out;
    IData/*31:0*/ __PVT__rs2_out;
    
    // LOCAL VARIABLES
    IData/*31:0*/ __Vdly__pc;
    
    // INTERNAL VARIABLES
  private:
    Vtb_riscv__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtb_riscv_mini_riscv);  ///< Copying not allowed
  public:
    Vtb_riscv_mini_riscv(const char* name = "TOP");
    ~Vtb_riscv_mini_riscv();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtb_riscv__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__tb_riscv__cpu__1(Vtb_riscv__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_riscv__cpu__3(Vtb_riscv__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_riscv__cpu__4(Vtb_riscv__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_riscv__cpu__2(Vtb_riscv__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

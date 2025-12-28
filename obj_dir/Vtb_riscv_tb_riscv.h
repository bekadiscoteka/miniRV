// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_riscv.h for the primary calling header

#ifndef _VTB_RISCV_TB_RISCV_H_
#define _VTB_RISCV_TB_RISCV_H_  // guard

#include "verilated.h"
#include "Vtb_riscv__Dpi.h"

//==========

class Vtb_riscv__Syms;
class Vtb_riscv_mini_riscv;


//----------

VL_MODULE(Vtb_riscv_tb_riscv) {
  public:
    // CELLS
    Vtb_riscv_mini_riscv* cpu;
    
    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    
    // LOCAL SIGNALS
    CData/*7:0*/ __PVT__mem__DOT__wmask;
    IData/*31:0*/ __PVT__data;
    IData/*31:0*/ __PVT__lfu_rdata;
    IData/*31:0*/ __PVT__mem__DOT__aligned_data;
    
    // LOCAL VARIABLES
    IData/*31:0*/ __Vfunc_mem__DOT__mem_read__1__Vfuncout;
    
    // INTERNAL VARIABLES
  private:
    Vtb_riscv__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtb_riscv_tb_riscv);  ///< Copying not allowed
  public:
    Vtb_riscv_tb_riscv(const char* name = "TOP");
    ~Vtb_riscv_tb_riscv();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtb_riscv__Syms* symsp, bool first);
    void __Vdpiimwrap_mem__DOT__mem_read_TOP__tb_riscv(IData/*31:0*/ raddr, IData/*31:0*/ (&mem_read__Vfuncrtn));
    void __Vdpiimwrap_mem__DOT__mem_write_TOP__tb_riscv(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__tb_riscv__1(Vtb_riscv__Syms* __restrict vlSymsp);
    static void _sequent__TOP__tb_riscv__3(Vtb_riscv__Syms* __restrict vlSymsp);
    static void _settle__TOP__tb_riscv__2(Vtb_riscv__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VTB_RISCV__SYMS_H_
#define _VTB_RISCV__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vtb_riscv.h"
#include "Vtb_riscv_tb_riscv.h"
#include "Vtb_riscv_mini_riscv.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class Vtb_riscv__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vtb_riscv*                     TOPp;
    Vtb_riscv_tb_riscv             TOP__tb_riscv;
    Vtb_riscv_mini_riscv           TOP__tb_riscv__cpu;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_tb_riscv__cpu;
    
    // CREATORS
    Vtb_riscv__Syms(Vtb_riscv* topp, const char* namep);
    ~Vtb_riscv__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

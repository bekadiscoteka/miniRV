// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_riscv__Syms.h"
#include "Vtb_riscv.h"
#include "Vtb_riscv_tb_riscv.h"
#include "Vtb_riscv_mini_riscv.h"



// FUNCTIONS
Vtb_riscv__Syms::Vtb_riscv__Syms(Vtb_riscv* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__tb_riscv(Verilated::catName(topp->name(), "tb_riscv"))
    , TOP__tb_riscv__cpu(Verilated::catName(topp->name(), "tb_riscv.cpu"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->tb_riscv = &TOP__tb_riscv;
    TOPp->tb_riscv->cpu = &TOP__tb_riscv__cpu;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__tb_riscv.__Vconfigure(this, true);
    TOP__tb_riscv__cpu.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_tb_riscv__cpu.configure(this, name(), "tb_riscv.cpu", "cpu", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_tb_riscv__cpu.varInsert(__Vfinal,"a0", &(TOP__tb_riscv__cpu.a0), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_riscv__cpu.varInsert(__Vfinal,"a1", &(TOP__tb_riscv__cpu.a1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_riscv__cpu.varInsert(__Vfinal,"a2", &(TOP__tb_riscv__cpu.a2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_riscv__cpu.varInsert(__Vfinal,"a3", &(TOP__tb_riscv__cpu.a3), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_riscv__cpu.varInsert(__Vfinal,"a4", &(TOP__tb_riscv__cpu.a4), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_riscv__cpu.varInsert(__Vfinal,"a5", &(TOP__tb_riscv__cpu.a5), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_riscv__cpu.varInsert(__Vfinal,"gp", &(TOP__tb_riscv__cpu.gp), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_riscv__cpu.varInsert(__Vfinal,"pc", &(TOP__tb_riscv__cpu.pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_riscv__cpu.varInsert(__Vfinal,"ra", &(TOP__tb_riscv__cpu.ra), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_riscv__cpu.varInsert(__Vfinal,"s0_fp", &(TOP__tb_riscv__cpu.s0_fp), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_riscv__cpu.varInsert(__Vfinal,"s1", &(TOP__tb_riscv__cpu.s1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_riscv__cpu.varInsert(__Vfinal,"sp", &(TOP__tb_riscv__cpu.sp), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_riscv__cpu.varInsert(__Vfinal,"t0", &(TOP__tb_riscv__cpu.t0), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_riscv__cpu.varInsert(__Vfinal,"t1", &(TOP__tb_riscv__cpu.t1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_riscv__cpu.varInsert(__Vfinal,"t2", &(TOP__tb_riscv__cpu.t2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_riscv__cpu.varInsert(__Vfinal,"tp", &(TOP__tb_riscv__cpu.tp), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_tb_riscv__cpu.varInsert(__Vfinal,"zero", &(TOP__tb_riscv__cpu.zero), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
    }
}

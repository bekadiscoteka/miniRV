// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_riscv.h for the primary calling header

#include "Vtb_riscv_mini_riscv.h"
#include "Vtb_riscv__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vtb_riscv_mini_riscv::_sequent__TOP__tb_riscv__cpu__1(Vtb_riscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_riscv_mini_riscv::_sequent__TOP__tb_riscv__cpu__1\n"); );
    Vtb_riscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__state;
    IData/*31:0*/ __Vtask_set_rd__0__value;
    IData/*31:0*/ __Vtask_set_rd__1__value;
    IData/*31:0*/ __Vtask_set_rd__2__value;
    IData/*31:0*/ __Vtask_set_rd__3__value;
    IData/*31:0*/ __Vtask_set_rd__4__value;
    IData/*31:0*/ __Vtask_set_rd__5__value;
    IData/*31:0*/ __Vtask_set_rd__6__value;
    // Body
    vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc = vlSymsp->TOP__tb_riscv__cpu.pc;
    __Vdly__state = vlSymsp->TOP__tb_riscv__cpu.__PVT__state;
    if (vlTOPp->reset) {
        vlSymsp->TOP__tb_riscv__cpu.zero = 0U;
    }
    if (vlTOPp->reset) {
        vlSymsp->TOP__tb_riscv__cpu.ra = 0U;
        vlSymsp->TOP__tb_riscv__cpu.sp = 0U;
        vlSymsp->TOP__tb_riscv__cpu.gp = 0U;
        vlSymsp->TOP__tb_riscv__cpu.tp = 0U;
        vlSymsp->TOP__tb_riscv__cpu.t0 = 0U;
        vlSymsp->TOP__tb_riscv__cpu.t1 = 0U;
        vlSymsp->TOP__tb_riscv__cpu.t2 = 0U;
        vlSymsp->TOP__tb_riscv__cpu.s0_fp = 0U;
        vlSymsp->TOP__tb_riscv__cpu.s1 = 0U;
        vlSymsp->TOP__tb_riscv__cpu.a0 = 0U;
        vlSymsp->TOP__tb_riscv__cpu.a1 = 0U;
        vlSymsp->TOP__tb_riscv__cpu.a2 = 0U;
        vlSymsp->TOP__tb_riscv__cpu.a3 = 0U;
        vlSymsp->TOP__tb_riscv__cpu.a4 = 0U;
        vlSymsp->TOP__tb_riscv__cpu.a5 = 0U;
        vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc = 0x80000000U;
        __Vdly__state = 1U;
    } else {
        if (vlSymsp->TOP__tb_riscv__cpu.__PVT__state) {
            if (vlSymsp->TOP__tb_riscv__cpu.__PVT__state) {
                __Vdly__state = 0U;
            }
        } else {
            if ((0x40U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                if ((0x20U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                    if ((0x10U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                        vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                            = ((IData)(4U) + vlSymsp->TOP__tb_riscv__cpu.pc);
                    } else {
                        if ((8U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                            vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                = ((IData)(4U) + vlSymsp->TOP__tb_riscv__cpu.pc);
                        } else {
                            if ((4U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                                if ((2U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                                    if ((1U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                                        __Vtask_set_rd__0__value 
                                            = ((IData)(4U) 
                                               + vlSymsp->TOP__tb_riscv__cpu.pc);
                                        if ((((((((
                                                   (1U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                        >> 7U))) 
                                                   | (2U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                          >> 7U)))) 
                                                  | (3U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) 
                                                 | (4U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                        >> 7U)))) 
                                                | (5U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                       >> 7U)))) 
                                               | (6U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                      >> 7U)))) 
                                              | (7U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                     >> 7U)))) 
                                             | (8U 
                                                == 
                                                (0x1fU 
                                                 & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                    >> 7U))))) {
                                            if ((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                     >> 7U)))) {
                                                vlSymsp->TOP__tb_riscv__cpu.ra 
                                                    = __Vtask_set_rd__0__value;
                                            } else {
                                                if (
                                                    (2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) {
                                                    vlSymsp->TOP__tb_riscv__cpu.sp 
                                                        = __Vtask_set_rd__0__value;
                                                } else {
                                                    if (
                                                        (3U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 7U)))) {
                                                        vlSymsp->TOP__tb_riscv__cpu.gp 
                                                            = __Vtask_set_rd__0__value;
                                                    } else {
                                                        if (
                                                            (4U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                 >> 7U)))) {
                                                            vlSymsp->TOP__tb_riscv__cpu.tp 
                                                                = __Vtask_set_rd__0__value;
                                                        } else {
                                                            if (
                                                                (5U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                     >> 7U)))) {
                                                                vlSymsp->TOP__tb_riscv__cpu.t0 
                                                                    = __Vtask_set_rd__0__value;
                                                            } else {
                                                                if (
                                                                    (6U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                         >> 7U)))) {
                                                                    vlSymsp->TOP__tb_riscv__cpu.t1 
                                                                        = __Vtask_set_rd__0__value;
                                                                } else {
                                                                    if (
                                                                        (7U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                             >> 7U)))) {
                                                                        vlSymsp->TOP__tb_riscv__cpu.t2 
                                                                            = __Vtask_set_rd__0__value;
                                                                    } else {
                                                                        vlSymsp->TOP__tb_riscv__cpu.s0_fp 
                                                                            = __Vtask_set_rd__0__value;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((9U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                     >> 7U)))) {
                                                vlSymsp->TOP__tb_riscv__cpu.s1 
                                                    = __Vtask_set_rd__0__value;
                                            } else {
                                                if (
                                                    (0xaU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) {
                                                    vlSymsp->TOP__tb_riscv__cpu.a0 
                                                        = __Vtask_set_rd__0__value;
                                                } else {
                                                    if (
                                                        (0xbU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 7U)))) {
                                                        vlSymsp->TOP__tb_riscv__cpu.a1 
                                                            = __Vtask_set_rd__0__value;
                                                    } else {
                                                        if (
                                                            (0xcU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                 >> 7U)))) {
                                                            vlSymsp->TOP__tb_riscv__cpu.a2 
                                                                = __Vtask_set_rd__0__value;
                                                        } else {
                                                            if (
                                                                (0xdU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                     >> 7U)))) {
                                                                vlSymsp->TOP__tb_riscv__cpu.a3 
                                                                    = __Vtask_set_rd__0__value;
                                                            } else {
                                                                if (
                                                                    (0xeU 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                         >> 7U)))) {
                                                                    vlSymsp->TOP__tb_riscv__cpu.a4 
                                                                        = __Vtask_set_rd__0__value;
                                                                } else {
                                                                    if (
                                                                        (0xfU 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                             >> 7U)))) {
                                                                        vlSymsp->TOP__tb_riscv__cpu.a5 
                                                                            = __Vtask_set_rd__0__value;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                            = ((0x80000000U 
                                                & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)
                                                ? (0xfffffffeU 
                                                   & (vlSymsp->TOP__tb_riscv__cpu.__PVT__rs1_out 
                                                      + 
                                                      (0xfffff000U 
                                                       | (0xfffU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 0x14U)))))
                                                : (0xfffffffeU 
                                                   & (vlSymsp->TOP__tb_riscv__cpu.__PVT__rs1_out 
                                                      + 
                                                      (0xfffU 
                                                       & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                          >> 0x14U)))));
                                    } else {
                                        vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                            = ((IData)(4U) 
                                               + vlSymsp->TOP__tb_riscv__cpu.pc);
                                    }
                                } else {
                                    vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                        = ((IData)(4U) 
                                           + vlSymsp->TOP__tb_riscv__cpu.pc);
                                }
                            } else {
                                vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                    = ((IData)(4U) 
                                       + vlSymsp->TOP__tb_riscv__cpu.pc);
                            }
                        }
                    }
                } else {
                    vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                        = ((IData)(4U) + vlSymsp->TOP__tb_riscv__cpu.pc);
                }
            } else {
                if ((0x20U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                    if ((0x10U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                        if ((8U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                            vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                = ((IData)(4U) + vlSymsp->TOP__tb_riscv__cpu.pc);
                        } else {
                            if ((4U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                                if ((2U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                                    if ((1U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                                        __Vtask_set_rd__1__value 
                                            = (0xfffff000U 
                                               & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata);
                                        vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                            = ((IData)(4U) 
                                               + vlSymsp->TOP__tb_riscv__cpu.pc);
                                        if ((((((((
                                                   (1U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                        >> 7U))) 
                                                   | (2U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                          >> 7U)))) 
                                                  | (3U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) 
                                                 | (4U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                        >> 7U)))) 
                                                | (5U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                       >> 7U)))) 
                                               | (6U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                      >> 7U)))) 
                                              | (7U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                     >> 7U)))) 
                                             | (8U 
                                                == 
                                                (0x1fU 
                                                 & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                    >> 7U))))) {
                                            if ((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                     >> 7U)))) {
                                                vlSymsp->TOP__tb_riscv__cpu.ra 
                                                    = __Vtask_set_rd__1__value;
                                            } else {
                                                if (
                                                    (2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) {
                                                    vlSymsp->TOP__tb_riscv__cpu.sp 
                                                        = __Vtask_set_rd__1__value;
                                                } else {
                                                    if (
                                                        (3U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 7U)))) {
                                                        vlSymsp->TOP__tb_riscv__cpu.gp 
                                                            = __Vtask_set_rd__1__value;
                                                    } else {
                                                        if (
                                                            (4U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                 >> 7U)))) {
                                                            vlSymsp->TOP__tb_riscv__cpu.tp 
                                                                = __Vtask_set_rd__1__value;
                                                        } else {
                                                            if (
                                                                (5U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                     >> 7U)))) {
                                                                vlSymsp->TOP__tb_riscv__cpu.t0 
                                                                    = __Vtask_set_rd__1__value;
                                                            } else {
                                                                if (
                                                                    (6U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                         >> 7U)))) {
                                                                    vlSymsp->TOP__tb_riscv__cpu.t1 
                                                                        = __Vtask_set_rd__1__value;
                                                                } else {
                                                                    if (
                                                                        (7U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                             >> 7U)))) {
                                                                        vlSymsp->TOP__tb_riscv__cpu.t2 
                                                                            = __Vtask_set_rd__1__value;
                                                                    } else {
                                                                        vlSymsp->TOP__tb_riscv__cpu.s0_fp 
                                                                            = __Vtask_set_rd__1__value;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((9U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                     >> 7U)))) {
                                                vlSymsp->TOP__tb_riscv__cpu.s1 
                                                    = __Vtask_set_rd__1__value;
                                            } else {
                                                if (
                                                    (0xaU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) {
                                                    vlSymsp->TOP__tb_riscv__cpu.a0 
                                                        = __Vtask_set_rd__1__value;
                                                } else {
                                                    if (
                                                        (0xbU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 7U)))) {
                                                        vlSymsp->TOP__tb_riscv__cpu.a1 
                                                            = __Vtask_set_rd__1__value;
                                                    } else {
                                                        if (
                                                            (0xcU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                 >> 7U)))) {
                                                            vlSymsp->TOP__tb_riscv__cpu.a2 
                                                                = __Vtask_set_rd__1__value;
                                                        } else {
                                                            if (
                                                                (0xdU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                     >> 7U)))) {
                                                                vlSymsp->TOP__tb_riscv__cpu.a3 
                                                                    = __Vtask_set_rd__1__value;
                                                            } else {
                                                                if (
                                                                    (0xeU 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                         >> 7U)))) {
                                                                    vlSymsp->TOP__tb_riscv__cpu.a4 
                                                                        = __Vtask_set_rd__1__value;
                                                                } else {
                                                                    if (
                                                                        (0xfU 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                             >> 7U)))) {
                                                                        vlSymsp->TOP__tb_riscv__cpu.a5 
                                                                            = __Vtask_set_rd__1__value;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                            = ((IData)(4U) 
                                               + vlSymsp->TOP__tb_riscv__cpu.pc);
                                    }
                                } else {
                                    vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                        = ((IData)(4U) 
                                           + vlSymsp->TOP__tb_riscv__cpu.pc);
                                }
                            } else {
                                if ((2U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                                    if ((1U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                                        __Vtask_set_rd__2__value 
                                            = (vlSymsp->TOP__tb_riscv__cpu.__PVT__rs1_out 
                                               + vlSymsp->TOP__tb_riscv__cpu.__PVT__rs2_out);
                                        vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                            = ((IData)(4U) 
                                               + vlSymsp->TOP__tb_riscv__cpu.pc);
                                        if ((((((((
                                                   (1U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                        >> 7U))) 
                                                   | (2U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                          >> 7U)))) 
                                                  | (3U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) 
                                                 | (4U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                        >> 7U)))) 
                                                | (5U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                       >> 7U)))) 
                                               | (6U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                      >> 7U)))) 
                                              | (7U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                     >> 7U)))) 
                                             | (8U 
                                                == 
                                                (0x1fU 
                                                 & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                    >> 7U))))) {
                                            if ((1U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                     >> 7U)))) {
                                                vlSymsp->TOP__tb_riscv__cpu.ra 
                                                    = __Vtask_set_rd__2__value;
                                            } else {
                                                if (
                                                    (2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) {
                                                    vlSymsp->TOP__tb_riscv__cpu.sp 
                                                        = __Vtask_set_rd__2__value;
                                                } else {
                                                    if (
                                                        (3U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 7U)))) {
                                                        vlSymsp->TOP__tb_riscv__cpu.gp 
                                                            = __Vtask_set_rd__2__value;
                                                    } else {
                                                        if (
                                                            (4U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                 >> 7U)))) {
                                                            vlSymsp->TOP__tb_riscv__cpu.tp 
                                                                = __Vtask_set_rd__2__value;
                                                        } else {
                                                            if (
                                                                (5U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                     >> 7U)))) {
                                                                vlSymsp->TOP__tb_riscv__cpu.t0 
                                                                    = __Vtask_set_rd__2__value;
                                                            } else {
                                                                if (
                                                                    (6U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                         >> 7U)))) {
                                                                    vlSymsp->TOP__tb_riscv__cpu.t1 
                                                                        = __Vtask_set_rd__2__value;
                                                                } else {
                                                                    if (
                                                                        (7U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                             >> 7U)))) {
                                                                        vlSymsp->TOP__tb_riscv__cpu.t2 
                                                                            = __Vtask_set_rd__2__value;
                                                                    } else {
                                                                        vlSymsp->TOP__tb_riscv__cpu.s0_fp 
                                                                            = __Vtask_set_rd__2__value;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((9U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                     >> 7U)))) {
                                                vlSymsp->TOP__tb_riscv__cpu.s1 
                                                    = __Vtask_set_rd__2__value;
                                            } else {
                                                if (
                                                    (0xaU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) {
                                                    vlSymsp->TOP__tb_riscv__cpu.a0 
                                                        = __Vtask_set_rd__2__value;
                                                } else {
                                                    if (
                                                        (0xbU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 7U)))) {
                                                        vlSymsp->TOP__tb_riscv__cpu.a1 
                                                            = __Vtask_set_rd__2__value;
                                                    } else {
                                                        if (
                                                            (0xcU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                 >> 7U)))) {
                                                            vlSymsp->TOP__tb_riscv__cpu.a2 
                                                                = __Vtask_set_rd__2__value;
                                                        } else {
                                                            if (
                                                                (0xdU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                     >> 7U)))) {
                                                                vlSymsp->TOP__tb_riscv__cpu.a3 
                                                                    = __Vtask_set_rd__2__value;
                                                            } else {
                                                                if (
                                                                    (0xeU 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                         >> 7U)))) {
                                                                    vlSymsp->TOP__tb_riscv__cpu.a4 
                                                                        = __Vtask_set_rd__2__value;
                                                                } else {
                                                                    if (
                                                                        (0xfU 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                             >> 7U)))) {
                                                                        vlSymsp->TOP__tb_riscv__cpu.a5 
                                                                            = __Vtask_set_rd__2__value;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                            = ((IData)(4U) 
                                               + vlSymsp->TOP__tb_riscv__cpu.pc);
                                    }
                                } else {
                                    vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                        = ((IData)(4U) 
                                           + vlSymsp->TOP__tb_riscv__cpu.pc);
                                }
                            }
                        }
                    } else {
                        vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                            = ((8U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)
                                ? ((IData)(4U) + vlSymsp->TOP__tb_riscv__cpu.pc)
                                : ((4U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)
                                    ? ((IData)(4U) 
                                       + vlSymsp->TOP__tb_riscv__cpu.pc)
                                    : ((2U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)
                                        ? ((1U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)
                                            ? ((IData)(4U) 
                                               + vlSymsp->TOP__tb_riscv__cpu.pc)
                                            : ((IData)(4U) 
                                               + vlSymsp->TOP__tb_riscv__cpu.pc))
                                        : ((IData)(4U) 
                                           + vlSymsp->TOP__tb_riscv__cpu.pc))));
                    }
                } else {
                    if ((0x10U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                        if ((8U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                            vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                = ((IData)(4U) + vlSymsp->TOP__tb_riscv__cpu.pc);
                        } else {
                            if ((4U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                                vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                    = ((IData)(4U) 
                                       + vlSymsp->TOP__tb_riscv__cpu.pc);
                            } else {
                                if ((2U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                                    if ((1U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                                        vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                            = ((IData)(4U) 
                                               + vlSymsp->TOP__tb_riscv__cpu.pc);
                                        if ((0x80000000U 
                                             & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                                            __Vtask_set_rd__3__value 
                                                = (
                                                   (0xfffff000U 
                                                    | (0xfffU 
                                                       & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                          >> 0x14U))) 
                                                   + vlSymsp->TOP__tb_riscv__cpu.__PVT__rs1_out);
                                            if ((((
                                                   (((((1U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                            >> 7U))) 
                                                       | (2U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                              >> 7U)))) 
                                                      | (3U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 7U)))) 
                                                     | (4U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                            >> 7U)))) 
                                                    | (5U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                           >> 7U)))) 
                                                   | (6U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                          >> 7U)))) 
                                                  | (7U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) 
                                                 | (8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                        >> 7U))))) {
                                                if (
                                                    (1U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) {
                                                    vlSymsp->TOP__tb_riscv__cpu.ra 
                                                        = __Vtask_set_rd__3__value;
                                                } else {
                                                    if (
                                                        (2U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 7U)))) {
                                                        vlSymsp->TOP__tb_riscv__cpu.sp 
                                                            = __Vtask_set_rd__3__value;
                                                    } else {
                                                        if (
                                                            (3U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                 >> 7U)))) {
                                                            vlSymsp->TOP__tb_riscv__cpu.gp 
                                                                = __Vtask_set_rd__3__value;
                                                        } else {
                                                            if (
                                                                (4U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                     >> 7U)))) {
                                                                vlSymsp->TOP__tb_riscv__cpu.tp 
                                                                    = __Vtask_set_rd__3__value;
                                                            } else {
                                                                if (
                                                                    (5U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                         >> 7U)))) {
                                                                    vlSymsp->TOP__tb_riscv__cpu.t0 
                                                                        = __Vtask_set_rd__3__value;
                                                                } else {
                                                                    if (
                                                                        (6U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                             >> 7U)))) {
                                                                        vlSymsp->TOP__tb_riscv__cpu.t1 
                                                                            = __Vtask_set_rd__3__value;
                                                                    } else {
                                                                        if (
                                                                            (7U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                                >> 7U)))) {
                                                                            vlSymsp->TOP__tb_riscv__cpu.t2 
                                                                                = __Vtask_set_rd__3__value;
                                                                        } else {
                                                                            vlSymsp->TOP__tb_riscv__cpu.s0_fp 
                                                                                = __Vtask_set_rd__3__value;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (9U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) {
                                                    vlSymsp->TOP__tb_riscv__cpu.s1 
                                                        = __Vtask_set_rd__3__value;
                                                } else {
                                                    if (
                                                        (0xaU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 7U)))) {
                                                        vlSymsp->TOP__tb_riscv__cpu.a0 
                                                            = __Vtask_set_rd__3__value;
                                                    } else {
                                                        if (
                                                            (0xbU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                 >> 7U)))) {
                                                            vlSymsp->TOP__tb_riscv__cpu.a1 
                                                                = __Vtask_set_rd__3__value;
                                                        } else {
                                                            if (
                                                                (0xcU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                     >> 7U)))) {
                                                                vlSymsp->TOP__tb_riscv__cpu.a2 
                                                                    = __Vtask_set_rd__3__value;
                                                            } else {
                                                                if (
                                                                    (0xdU 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                         >> 7U)))) {
                                                                    vlSymsp->TOP__tb_riscv__cpu.a3 
                                                                        = __Vtask_set_rd__3__value;
                                                                } else {
                                                                    if (
                                                                        (0xeU 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                             >> 7U)))) {
                                                                        vlSymsp->TOP__tb_riscv__cpu.a4 
                                                                            = __Vtask_set_rd__3__value;
                                                                    } else {
                                                                        if (
                                                                            (0xfU 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                                >> 7U)))) {
                                                                            vlSymsp->TOP__tb_riscv__cpu.a5 
                                                                                = __Vtask_set_rd__3__value;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            __Vtask_set_rd__4__value 
                                                = (
                                                   (0xfffU 
                                                    & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                       >> 0x14U)) 
                                                   + vlSymsp->TOP__tb_riscv__cpu.__PVT__rs1_out);
                                            if ((((
                                                   (((((1U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                            >> 7U))) 
                                                       | (2U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                              >> 7U)))) 
                                                      | (3U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 7U)))) 
                                                     | (4U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                            >> 7U)))) 
                                                    | (5U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                           >> 7U)))) 
                                                   | (6U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                          >> 7U)))) 
                                                  | (7U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) 
                                                 | (8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                        >> 7U))))) {
                                                if (
                                                    (1U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) {
                                                    vlSymsp->TOP__tb_riscv__cpu.ra 
                                                        = __Vtask_set_rd__4__value;
                                                } else {
                                                    if (
                                                        (2U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 7U)))) {
                                                        vlSymsp->TOP__tb_riscv__cpu.sp 
                                                            = __Vtask_set_rd__4__value;
                                                    } else {
                                                        if (
                                                            (3U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                 >> 7U)))) {
                                                            vlSymsp->TOP__tb_riscv__cpu.gp 
                                                                = __Vtask_set_rd__4__value;
                                                        } else {
                                                            if (
                                                                (4U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                     >> 7U)))) {
                                                                vlSymsp->TOP__tb_riscv__cpu.tp 
                                                                    = __Vtask_set_rd__4__value;
                                                            } else {
                                                                if (
                                                                    (5U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                         >> 7U)))) {
                                                                    vlSymsp->TOP__tb_riscv__cpu.t0 
                                                                        = __Vtask_set_rd__4__value;
                                                                } else {
                                                                    if (
                                                                        (6U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                             >> 7U)))) {
                                                                        vlSymsp->TOP__tb_riscv__cpu.t1 
                                                                            = __Vtask_set_rd__4__value;
                                                                    } else {
                                                                        if (
                                                                            (7U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                                >> 7U)))) {
                                                                            vlSymsp->TOP__tb_riscv__cpu.t2 
                                                                                = __Vtask_set_rd__4__value;
                                                                        } else {
                                                                            vlSymsp->TOP__tb_riscv__cpu.s0_fp 
                                                                                = __Vtask_set_rd__4__value;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (9U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) {
                                                    vlSymsp->TOP__tb_riscv__cpu.s1 
                                                        = __Vtask_set_rd__4__value;
                                                } else {
                                                    if (
                                                        (0xaU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 7U)))) {
                                                        vlSymsp->TOP__tb_riscv__cpu.a0 
                                                            = __Vtask_set_rd__4__value;
                                                    } else {
                                                        if (
                                                            (0xbU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                 >> 7U)))) {
                                                            vlSymsp->TOP__tb_riscv__cpu.a1 
                                                                = __Vtask_set_rd__4__value;
                                                        } else {
                                                            if (
                                                                (0xcU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                     >> 7U)))) {
                                                                vlSymsp->TOP__tb_riscv__cpu.a2 
                                                                    = __Vtask_set_rd__4__value;
                                                            } else {
                                                                if (
                                                                    (0xdU 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                         >> 7U)))) {
                                                                    vlSymsp->TOP__tb_riscv__cpu.a3 
                                                                        = __Vtask_set_rd__4__value;
                                                                } else {
                                                                    if (
                                                                        (0xeU 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                             >> 7U)))) {
                                                                        vlSymsp->TOP__tb_riscv__cpu.a4 
                                                                            = __Vtask_set_rd__4__value;
                                                                    } else {
                                                                        if (
                                                                            (0xfU 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                                >> 7U)))) {
                                                                            vlSymsp->TOP__tb_riscv__cpu.a5 
                                                                                = __Vtask_set_rd__4__value;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                            = ((IData)(4U) 
                                               + vlSymsp->TOP__tb_riscv__cpu.pc);
                                    }
                                } else {
                                    vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                        = ((IData)(4U) 
                                           + vlSymsp->TOP__tb_riscv__cpu.pc);
                                }
                            }
                        }
                    } else {
                        if ((8U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                            vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                = ((IData)(4U) + vlSymsp->TOP__tb_riscv__cpu.pc);
                        } else {
                            if ((4U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                                vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                    = ((IData)(4U) 
                                       + vlSymsp->TOP__tb_riscv__cpu.pc);
                            } else {
                                if ((2U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                                    if ((1U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) {
                                        vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                            = ((IData)(4U) 
                                               + vlSymsp->TOP__tb_riscv__cpu.pc);
                                        if ((4U == 
                                             (7U & 
                                              (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                               >> 0xcU)))) {
                                            __Vtask_set_rd__5__value 
                                                = (0xffU 
                                                   & vlSymsp->TOP__tb_riscv.__PVT__data);
                                            if ((((
                                                   (((((1U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                            >> 7U))) 
                                                       | (2U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                              >> 7U)))) 
                                                      | (3U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 7U)))) 
                                                     | (4U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                            >> 7U)))) 
                                                    | (5U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                           >> 7U)))) 
                                                   | (6U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                          >> 7U)))) 
                                                  | (7U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) 
                                                 | (8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                        >> 7U))))) {
                                                if (
                                                    (1U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) {
                                                    vlSymsp->TOP__tb_riscv__cpu.ra 
                                                        = __Vtask_set_rd__5__value;
                                                } else {
                                                    if (
                                                        (2U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 7U)))) {
                                                        vlSymsp->TOP__tb_riscv__cpu.sp 
                                                            = __Vtask_set_rd__5__value;
                                                    } else {
                                                        if (
                                                            (3U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                 >> 7U)))) {
                                                            vlSymsp->TOP__tb_riscv__cpu.gp 
                                                                = __Vtask_set_rd__5__value;
                                                        } else {
                                                            if (
                                                                (4U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                     >> 7U)))) {
                                                                vlSymsp->TOP__tb_riscv__cpu.tp 
                                                                    = __Vtask_set_rd__5__value;
                                                            } else {
                                                                if (
                                                                    (5U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                         >> 7U)))) {
                                                                    vlSymsp->TOP__tb_riscv__cpu.t0 
                                                                        = __Vtask_set_rd__5__value;
                                                                } else {
                                                                    if (
                                                                        (6U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                             >> 7U)))) {
                                                                        vlSymsp->TOP__tb_riscv__cpu.t1 
                                                                            = __Vtask_set_rd__5__value;
                                                                    } else {
                                                                        if (
                                                                            (7U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                                >> 7U)))) {
                                                                            vlSymsp->TOP__tb_riscv__cpu.t2 
                                                                                = __Vtask_set_rd__5__value;
                                                                        } else {
                                                                            vlSymsp->TOP__tb_riscv__cpu.s0_fp 
                                                                                = __Vtask_set_rd__5__value;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (9U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) {
                                                    vlSymsp->TOP__tb_riscv__cpu.s1 
                                                        = __Vtask_set_rd__5__value;
                                                } else {
                                                    if (
                                                        (0xaU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 7U)))) {
                                                        vlSymsp->TOP__tb_riscv__cpu.a0 
                                                            = __Vtask_set_rd__5__value;
                                                    } else {
                                                        if (
                                                            (0xbU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                 >> 7U)))) {
                                                            vlSymsp->TOP__tb_riscv__cpu.a1 
                                                                = __Vtask_set_rd__5__value;
                                                        } else {
                                                            if (
                                                                (0xcU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                     >> 7U)))) {
                                                                vlSymsp->TOP__tb_riscv__cpu.a2 
                                                                    = __Vtask_set_rd__5__value;
                                                            } else {
                                                                if (
                                                                    (0xdU 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                         >> 7U)))) {
                                                                    vlSymsp->TOP__tb_riscv__cpu.a3 
                                                                        = __Vtask_set_rd__5__value;
                                                                } else {
                                                                    if (
                                                                        (0xeU 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                             >> 7U)))) {
                                                                        vlSymsp->TOP__tb_riscv__cpu.a4 
                                                                            = __Vtask_set_rd__5__value;
                                                                    } else {
                                                                        if (
                                                                            (0xfU 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                                >> 7U)))) {
                                                                            vlSymsp->TOP__tb_riscv__cpu.a5 
                                                                                = __Vtask_set_rd__5__value;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            __Vtask_set_rd__6__value 
                                                = vlSymsp->TOP__tb_riscv.__PVT__data;
                                            if ((((
                                                   (((((1U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                            >> 7U))) 
                                                       | (2U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                              >> 7U)))) 
                                                      | (3U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 7U)))) 
                                                     | (4U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                            >> 7U)))) 
                                                    | (5U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                           >> 7U)))) 
                                                   | (6U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                          >> 7U)))) 
                                                  | (7U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) 
                                                 | (8U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                        >> 7U))))) {
                                                if (
                                                    (1U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) {
                                                    vlSymsp->TOP__tb_riscv__cpu.ra 
                                                        = __Vtask_set_rd__6__value;
                                                } else {
                                                    if (
                                                        (2U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 7U)))) {
                                                        vlSymsp->TOP__tb_riscv__cpu.sp 
                                                            = __Vtask_set_rd__6__value;
                                                    } else {
                                                        if (
                                                            (3U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                 >> 7U)))) {
                                                            vlSymsp->TOP__tb_riscv__cpu.gp 
                                                                = __Vtask_set_rd__6__value;
                                                        } else {
                                                            if (
                                                                (4U 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                     >> 7U)))) {
                                                                vlSymsp->TOP__tb_riscv__cpu.tp 
                                                                    = __Vtask_set_rd__6__value;
                                                            } else {
                                                                if (
                                                                    (5U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                         >> 7U)))) {
                                                                    vlSymsp->TOP__tb_riscv__cpu.t0 
                                                                        = __Vtask_set_rd__6__value;
                                                                } else {
                                                                    if (
                                                                        (6U 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                             >> 7U)))) {
                                                                        vlSymsp->TOP__tb_riscv__cpu.t1 
                                                                            = __Vtask_set_rd__6__value;
                                                                    } else {
                                                                        if (
                                                                            (7U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                                >> 7U)))) {
                                                                            vlSymsp->TOP__tb_riscv__cpu.t2 
                                                                                = __Vtask_set_rd__6__value;
                                                                        } else {
                                                                            vlSymsp->TOP__tb_riscv__cpu.s0_fp 
                                                                                = __Vtask_set_rd__6__value;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (9U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 7U)))) {
                                                    vlSymsp->TOP__tb_riscv__cpu.s1 
                                                        = __Vtask_set_rd__6__value;
                                                } else {
                                                    if (
                                                        (0xaU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 7U)))) {
                                                        vlSymsp->TOP__tb_riscv__cpu.a0 
                                                            = __Vtask_set_rd__6__value;
                                                    } else {
                                                        if (
                                                            (0xbU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                 >> 7U)))) {
                                                            vlSymsp->TOP__tb_riscv__cpu.a1 
                                                                = __Vtask_set_rd__6__value;
                                                        } else {
                                                            if (
                                                                (0xcU 
                                                                 == 
                                                                 (0x1fU 
                                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                     >> 7U)))) {
                                                                vlSymsp->TOP__tb_riscv__cpu.a2 
                                                                    = __Vtask_set_rd__6__value;
                                                            } else {
                                                                if (
                                                                    (0xdU 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                         >> 7U)))) {
                                                                    vlSymsp->TOP__tb_riscv__cpu.a3 
                                                                        = __Vtask_set_rd__6__value;
                                                                } else {
                                                                    if (
                                                                        (0xeU 
                                                                         == 
                                                                         (0x1fU 
                                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                             >> 7U)))) {
                                                                        vlSymsp->TOP__tb_riscv__cpu.a4 
                                                                            = __Vtask_set_rd__6__value;
                                                                    } else {
                                                                        if (
                                                                            (0xfU 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                                >> 7U)))) {
                                                                            vlSymsp->TOP__tb_riscv__cpu.a5 
                                                                                = __Vtask_set_rd__6__value;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                            = ((IData)(4U) 
                                               + vlSymsp->TOP__tb_riscv__cpu.pc);
                                    }
                                } else {
                                    vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc 
                                        = ((IData)(4U) 
                                           + vlSymsp->TOP__tb_riscv__cpu.pc);
                                }
                            }
                        }
                    }
                }
            }
            __Vdly__state = 1U;
        }
    }
    vlSymsp->TOP__tb_riscv__cpu.__PVT__state = __Vdly__state;
}

VL_INLINE_OPT void Vtb_riscv_mini_riscv::_sequent__TOP__tb_riscv__cpu__3(Vtb_riscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_riscv_mini_riscv::_sequent__TOP__tb_riscv__cpu__3\n"); );
    Vtb_riscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_riscv__cpu.__PVT__immS = ((0xfe0U 
                                                & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                     >> 7U)));
}

VL_INLINE_OPT void Vtb_riscv_mini_riscv::_sequent__TOP__tb_riscv__cpu__4(Vtb_riscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_riscv_mini_riscv::_sequent__TOP__tb_riscv__cpu__4\n"); );
    Vtb_riscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__tb_riscv__cpu.pc = vlSymsp->TOP__tb_riscv__cpu.__Vdly__pc;
    vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_wre = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__tb_riscv__cpu.__PVT__state)))) {
        if ((3U != (0x7fU & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata))) {
            vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_wre 
                = (0x23U == (0x7fU & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata));
        }
    }
    vlSymsp->TOP__tb_riscv__cpu.__PVT__is_byte = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__tb_riscv__cpu.__PVT__state)))) {
        if ((3U != (0x7fU & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata))) {
            vlSymsp->TOP__tb_riscv__cpu.__PVT__is_byte 
                = ((0x23U == (0x7fU & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)) 
                   & (0U == (7U & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                   >> 0xcU))));
        }
    }
    vlSymsp->TOP__tb_riscv__cpu.__PVT__rs2_out = ((
                                                   (((((((0U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                              >> 0x14U))) 
                                                         | (1U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                >> 0x14U)))) 
                                                        | (2U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                               >> 0x14U)))) 
                                                       | (3U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                              >> 0x14U)))) 
                                                      | (4U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 0x14U)))) 
                                                     | (5U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                            >> 0x14U)))) 
                                                    | (6U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                           >> 0x14U)))) 
                                                   | (7U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                          >> 0x14U))))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                        >> 0x14U)))
                                                    ? vlSymsp->TOP__tb_riscv__cpu.zero
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 0x14U)))
                                                     ? vlSymsp->TOP__tb_riscv__cpu.ra
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                          >> 0x14U)))
                                                      ? vlSymsp->TOP__tb_riscv__cpu.sp
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                           >> 0x14U)))
                                                       ? vlSymsp->TOP__tb_riscv__cpu.gp
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                            >> 0x14U)))
                                                        ? vlSymsp->TOP__tb_riscv__cpu.tp
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 0x14U)))
                                                         ? vlSymsp->TOP__tb_riscv__cpu.t0
                                                         : 
                                                        ((6U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                              >> 0x14U)))
                                                          ? vlSymsp->TOP__tb_riscv__cpu.t1
                                                          : vlSymsp->TOP__tb_riscv__cpu.t2)))))))
                                                   : 
                                                  (((((((((8U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                               >> 0x14U))) 
                                                          | (9U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                 >> 0x14U)))) 
                                                         | (0xaU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                >> 0x14U)))) 
                                                        | (0xbU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                               >> 0x14U)))) 
                                                       | (0xcU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                              >> 0x14U)))) 
                                                      | (0xdU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 0x14U)))) 
                                                     | (0xeU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                            >> 0x14U)))) 
                                                    | (0xfU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                           >> 0x14U))))
                                                    ? 
                                                   ((8U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 0x14U)))
                                                     ? vlSymsp->TOP__tb_riscv__cpu.s0_fp
                                                     : 
                                                    ((9U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                          >> 0x14U)))
                                                      ? vlSymsp->TOP__tb_riscv__cpu.s1
                                                      : 
                                                     ((0xaU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                           >> 0x14U)))
                                                       ? vlSymsp->TOP__tb_riscv__cpu.a0
                                                       : 
                                                      ((0xbU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                            >> 0x14U)))
                                                        ? vlSymsp->TOP__tb_riscv__cpu.a1
                                                        : 
                                                       ((0xcU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 0x14U)))
                                                         ? vlSymsp->TOP__tb_riscv__cpu.a2
                                                         : 
                                                        ((0xdU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                              >> 0x14U)))
                                                          ? vlSymsp->TOP__tb_riscv__cpu.a3
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                               >> 0x14U)))
                                                           ? vlSymsp->TOP__tb_riscv__cpu.a4
                                                           : vlSymsp->TOP__tb_riscv__cpu.a5)))))))
                                                    : 0U));
    vlSymsp->TOP__tb_riscv__cpu.__PVT__rs1_out = ((
                                                   (((((((0U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                              >> 0xfU))) 
                                                         | (1U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                >> 0xfU)))) 
                                                        | (2U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                               >> 0xfU)))) 
                                                       | (3U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                              >> 0xfU)))) 
                                                      | (4U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 0xfU)))) 
                                                     | (5U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                            >> 0xfU)))) 
                                                    | (6U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                           >> 0xfU)))) 
                                                   | (7U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                          >> 0xfU))))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                        >> 0xfU)))
                                                    ? vlSymsp->TOP__tb_riscv__cpu.zero
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 0xfU)))
                                                     ? vlSymsp->TOP__tb_riscv__cpu.ra
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                          >> 0xfU)))
                                                      ? vlSymsp->TOP__tb_riscv__cpu.sp
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                           >> 0xfU)))
                                                       ? vlSymsp->TOP__tb_riscv__cpu.gp
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                            >> 0xfU)))
                                                        ? vlSymsp->TOP__tb_riscv__cpu.tp
                                                        : 
                                                       ((5U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 0xfU)))
                                                         ? vlSymsp->TOP__tb_riscv__cpu.t0
                                                         : 
                                                        ((6U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                              >> 0xfU)))
                                                          ? vlSymsp->TOP__tb_riscv__cpu.t1
                                                          : vlSymsp->TOP__tb_riscv__cpu.t2)))))))
                                                   : 
                                                  (((((((((8U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                               >> 0xfU))) 
                                                          | (9U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                 >> 0xfU)))) 
                                                         | (0xaU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                                >> 0xfU)))) 
                                                        | (0xbU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                               >> 0xfU)))) 
                                                       | (0xcU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                              >> 0xfU)))) 
                                                      | (0xdU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 0xfU)))) 
                                                     | (0xeU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                            >> 0xfU)))) 
                                                    | (0xfU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                           >> 0xfU))))
                                                    ? 
                                                   ((8U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                         >> 0xfU)))
                                                     ? vlSymsp->TOP__tb_riscv__cpu.s0_fp
                                                     : 
                                                    ((9U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                          >> 0xfU)))
                                                      ? vlSymsp->TOP__tb_riscv__cpu.s1
                                                      : 
                                                     ((0xaU 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                           >> 0xfU)))
                                                       ? vlSymsp->TOP__tb_riscv__cpu.a0
                                                       : 
                                                      ((0xbU 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                            >> 0xfU)))
                                                        ? vlSymsp->TOP__tb_riscv__cpu.a1
                                                        : 
                                                       ((0xcU 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                             >> 0xfU)))
                                                         ? vlSymsp->TOP__tb_riscv__cpu.a2
                                                         : 
                                                        ((0xdU 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                              >> 0xfU)))
                                                          ? vlSymsp->TOP__tb_riscv__cpu.a3
                                                          : 
                                                         ((0xeU 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                               >> 0xfU)))
                                                           ? vlSymsp->TOP__tb_riscv__cpu.a4
                                                           : vlSymsp->TOP__tb_riscv__cpu.a5)))))))
                                                    : 0U));
    vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_out = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__tb_riscv__cpu.__PVT__state)))) {
        if ((3U != (0x7fU & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata))) {
            vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_out 
                = ((0x23U == (0x7fU & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata))
                    ? vlSymsp->TOP__tb_riscv__cpu.__PVT__rs2_out
                    : 0U);
        }
    }
    vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_addr = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP__tb_riscv__cpu.__PVT__state)))) {
        vlSymsp->TOP__tb_riscv__cpu.__PVT__dataMem_addr 
            = ((3U == (0x7fU & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata))
                ? ((0x80000000U & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata)
                    ? (vlSymsp->TOP__tb_riscv__cpu.__PVT__rs1_out 
                       + (0xfffff000U | (0xfffU & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                   >> 0x14U))))
                    : (vlSymsp->TOP__tb_riscv__cpu.__PVT__rs1_out 
                       + (0xfffU & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                    >> 0x14U)))) : 
               ((0x23U == (0x7fU & vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata))
                 ? ((0x800U & (IData)(vlSymsp->TOP__tb_riscv__cpu.__PVT__immS))
                     ? (vlSymsp->TOP__tb_riscv__cpu.__PVT__rs1_out 
                        + (0xfffff000U | (IData)(vlSymsp->TOP__tb_riscv__cpu.__PVT__immS)))
                     : (vlSymsp->TOP__tb_riscv__cpu.__PVT__rs1_out 
                        + (IData)(vlSymsp->TOP__tb_riscv__cpu.__PVT__immS)))
                 : 0U));
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_riscv.h for the primary calling header

#include "Vtb_riscv_mini_riscv.h"
#include "Vtb_riscv__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtb_riscv_mini_riscv) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtb_riscv_mini_riscv::__Vconfigure(Vtb_riscv__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtb_riscv_mini_riscv::~Vtb_riscv_mini_riscv() {
}

void Vtb_riscv_mini_riscv::_settle__TOP__tb_riscv__cpu__2(Vtb_riscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_riscv_mini_riscv::_settle__TOP__tb_riscv__cpu__2\n"); );
    Vtb_riscv* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlSymsp->TOP__tb_riscv__cpu.__PVT__immS = ((0xfe0U 
                                                & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__tb_riscv.__PVT__lfu_rdata 
                                                     >> 7U)));
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

void Vtb_riscv_mini_riscv::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_riscv_mini_riscv::_ctor_var_reset\n"); );
    // Body
    __PVT__dataMem_addr = VL_RAND_RESET_I(32);
    __PVT__dataMem_out = VL_RAND_RESET_I(32);
    __PVT__instr_addr = VL_RAND_RESET_I(32);
    __PVT__is_byte = VL_RAND_RESET_I(1);
    __PVT__dataMem_wre = VL_RAND_RESET_I(1);
    __PVT__instr = VL_RAND_RESET_I(32);
    __PVT__dataMem_in = VL_RAND_RESET_I(32);
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__reset = VL_RAND_RESET_I(1);
    __PVT__state = VL_RAND_RESET_I(1);
    zero = VL_RAND_RESET_I(32);
    ra = VL_RAND_RESET_I(32);
    sp = VL_RAND_RESET_I(32);
    gp = VL_RAND_RESET_I(32);
    tp = VL_RAND_RESET_I(32);
    t0 = VL_RAND_RESET_I(32);
    t1 = VL_RAND_RESET_I(32);
    t2 = VL_RAND_RESET_I(32);
    s0_fp = VL_RAND_RESET_I(32);
    s1 = VL_RAND_RESET_I(32);
    a0 = VL_RAND_RESET_I(32);
    a1 = VL_RAND_RESET_I(32);
    a2 = VL_RAND_RESET_I(32);
    a3 = VL_RAND_RESET_I(32);
    a4 = VL_RAND_RESET_I(32);
    a5 = VL_RAND_RESET_I(32);
    pc = VL_RAND_RESET_I(32);
    __PVT__rs1_out = VL_RAND_RESET_I(32);
    __PVT__rs2_out = VL_RAND_RESET_I(32);
    __PVT__immS = VL_RAND_RESET_I(12);
    __Vdly__pc = VL_RAND_RESET_I(32);
}

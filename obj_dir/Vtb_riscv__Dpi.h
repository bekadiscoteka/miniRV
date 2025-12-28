// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif
    
    
    // DPI IMPORTS
    // DPI import at Memory_DPI.v:15:33
    extern int mem_read(int raddr);
    // DPI import at Memory_DPI.v:16:34
    extern void mem_write(int waddr, int wdata, char wmask);
    
#ifdef __cplusplus
}
#endif

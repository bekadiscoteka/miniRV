# miniRV-CPU: A Subset RISC-V Implementation

This project features a **32-bit RISC-V processor implementation in Verilog**, designed to support the **miniRV ISA**—a curated subset of the RISC-V specification. The system is built for **high-performance simulation using Verilator** and includes a robust verification suite featuring a **C++ golden reference model** and a comprehensive runtime environment.

---

## 🚀 Project Overview

The **miniRV** is a hardware implementation of a 32-bit RISC-V processor that adheres to the **RV32E register specification** while supporting a specific set of **8 fundamental instructions**.

This project demonstrates the **full vertical stack of computer architecture**, including:
- RTL design
- Hardware–software co-simulation
- Functional memory modeling
- Runtime environment implementation

---

## 🛠 Architecture & ISA

### Processor Specifications

- **ISA:** miniRV (subset of RISC-V)
- **Register File:** 16 General Purpose Registers (GPRs, `x0–x15`) conforming to the RV32E standard
- **Zero Register:** `x0` is hard-wired to zero
- **Program Counter (PC):**
  - 32-bit width
  - Initialized to `0`
  - Standard byte-aligned increments (`PC + 4`)

---

### Supported Instruction Set (8 Instructions)

The CPU implements the following instructions, with behavior matching the official RISC-V specification:

- **Arithmetic**
  - `add`
  - `addi`
- **Control Flow**
  - `jalr`
- **Memory Access**
  - `lw`, `lbu` (Load)
  - `sw`, `sb` (Store)
- **Immediate Loading**
  - `lui`

---

## 💻 Implementation Details

### RTL & Simulation

- **Hardware Description:** Core logic implemented in Verilog RTL
- **Simulation Engine:** Powered by **Verilator**, converting Verilog into high-speed C++ models for cycle-accurate simulation
- **Verification:** Uses **DPI-C (Direct Programming Interface)** to bridge the Verilog RTL with a C++ testbench

---

## 🧪 Golden Model Co-Simulation

To ensure architectural correctness, the project employs a **Golden Reference Model** implemented in C++.

- **Instruction-by-Instruction Comparison:**  
  After each instruction, the architectural state (registers and PC) of the RTL is compared against the golden model

- **Trace Debugging:**  
  If a discrepancy is detected, the simulation halts and reports:
  - The exact instruction
  - The mismatched register or PC value  

This approach significantly reduces debug time for complex software workloads.

---

## 🧠 Memory Model

The system follows a **Von Neumann architecture**, where instructions and data share a single memory space.

- **Unified Address Space:**  
  A single `2^32` byte-addressable memory range

- **C++ Backend:**  
  Physical memory is implemented as a large array in the C++ testbench  
  (typically **128 MB** to support complex benchmarks)

- **Access Mechanism:**  
  - The RTL does **not** contain an internal memory array  
  - All memory accesses are performed via DPI functions:
    - `pmem_read`
    - `pmem_write`

- **Initialization:**  
  Software binaries (`.bin` or `.hex`) are loaded directly into the C++ memory array before simulation begins

---


## 📁 Project Structure

```
.
├── rtl/                  # Synthesizable CPU RTL
│   └── mini_riscv.v
├── sim/                  # Verilator testbench + C++ golden model
│   ├── tb_riscv.v        # Top-level: CPU + DPI memory
│   ├── Memory_DPI.v      # Memory bridged to C++ via DPI-C
│   ├── main_diff.cpp     # Simulation driver / differential testing
│   ├── GoldenModel.h     # C++ reference ISA model
│   └── legacy/           # Old behavioral ROM/RAM models + ModelSim script
├── programs/
│   ├── bin/              # Raw binaries built with abstract-machine
│   ├── hex/              # Hex images ($readmemh); hex/raw = original word dumps
│   └── roms/             # NES ROMs for fceux-am
├── tools/                # Helper scripts (hex conversion)
├── scripts/              # Toolchain install / test runners
├── third_party/          # git submodules: abstract-machine, am-kernels, fceux-am
└── Makefile
```

## ▶️ Build & Run

```bash
scripts/install_compilers.sh      # riscv toolchain + verilator
scripts/install_AM.sh             # init submodules, prints AM_HOME export
make build                        # verilate + compile -> build/obj_dir/Vtb_riscv
make sim IMG=programs/bin/add-minirv-npc.bin
make clean
```

# Legacy ModelSim flow (behavioral ROM32x32/RAM32x32). Kept for reference:
# sim/tb_riscv.v now uses the DPI memory (sim/Memory_DPI.v), so this flow needs
# a testbench that instantiates ROM32x32/RAM32x32. Run from repo root:
#   vsim -do sim/legacy/script.do
vlib build/modelsim
vlog -work build/modelsim rtl/mini_riscv.v sim/legacy/ROM32x32.v sim/legacy/RAM32x32.v sim/tb_riscv.v
vsim build/modelsim.tb_riscv
add wave -r sim:/tb_riscv/*
run -all

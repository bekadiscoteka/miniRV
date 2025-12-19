vlib design_test 
vlog -work design_test tb_sCPU.v
vsim design_test.stimulus
add wave -r sim:/stimulus/*
run -all

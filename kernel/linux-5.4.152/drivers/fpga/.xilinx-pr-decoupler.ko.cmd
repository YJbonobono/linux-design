cmd_drivers/fpga/xilinx-pr-decoupler.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/fpga/xilinx-pr-decoupler.ko drivers/fpga/xilinx-pr-decoupler.o drivers/fpga/xilinx-pr-decoupler.mod.o;  true

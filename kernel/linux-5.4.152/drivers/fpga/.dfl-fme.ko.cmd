cmd_drivers/fpga/dfl-fme.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/fpga/dfl-fme.ko drivers/fpga/dfl-fme.o drivers/fpga/dfl-fme.mod.o;  true

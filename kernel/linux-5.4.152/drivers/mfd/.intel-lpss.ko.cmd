cmd_drivers/mfd/intel-lpss.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mfd/intel-lpss.ko drivers/mfd/intel-lpss.o drivers/mfd/intel-lpss.mod.o;  true

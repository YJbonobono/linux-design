cmd_drivers/mfd/max8907.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mfd/max8907.ko drivers/mfd/max8907.o drivers/mfd/max8907.mod.o;  true

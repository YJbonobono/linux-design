cmd_drivers/input/touchscreen/tsc2005.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/input/touchscreen/tsc2005.ko drivers/input/touchscreen/tsc2005.o drivers/input/touchscreen/tsc2005.mod.o;  true

cmd_drivers/regulator/tps65023-regulator.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/regulator/tps65023-regulator.ko drivers/regulator/tps65023-regulator.o drivers/regulator/tps65023-regulator.mod.o;  true

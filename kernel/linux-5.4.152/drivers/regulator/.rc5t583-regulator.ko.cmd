cmd_drivers/regulator/rc5t583-regulator.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/regulator/rc5t583-regulator.ko drivers/regulator/rc5t583-regulator.o drivers/regulator/rc5t583-regulator.mod.o;  true

cmd_drivers/regulator/max8998.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/regulator/max8998.ko drivers/regulator/max8998.o drivers/regulator/max8998.mod.o;  true

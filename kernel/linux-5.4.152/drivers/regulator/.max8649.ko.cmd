cmd_drivers/regulator/max8649.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/regulator/max8649.ko drivers/regulator/max8649.o drivers/regulator/max8649.mod.o;  true

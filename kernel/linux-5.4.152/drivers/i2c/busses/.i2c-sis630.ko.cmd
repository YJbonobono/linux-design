cmd_drivers/i2c/busses/i2c-sis630.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/i2c/busses/i2c-sis630.ko drivers/i2c/busses/i2c-sis630.o drivers/i2c/busses/i2c-sis630.mod.o;  true

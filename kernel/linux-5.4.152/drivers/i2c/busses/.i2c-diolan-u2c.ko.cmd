cmd_drivers/i2c/busses/i2c-diolan-u2c.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/i2c/busses/i2c-diolan-u2c.ko drivers/i2c/busses/i2c-diolan-u2c.o drivers/i2c/busses/i2c-diolan-u2c.mod.o;  true

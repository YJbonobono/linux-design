cmd_drivers/mfd/madera-i2c.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mfd/madera-i2c.ko drivers/mfd/madera-i2c.o drivers/mfd/madera-i2c.mod.o;  true

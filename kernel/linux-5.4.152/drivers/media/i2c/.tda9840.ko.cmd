cmd_drivers/media/i2c/tda9840.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/i2c/tda9840.ko drivers/media/i2c/tda9840.o drivers/media/i2c/tda9840.mod.o;  true

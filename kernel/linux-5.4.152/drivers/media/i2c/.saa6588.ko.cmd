cmd_drivers/media/i2c/saa6588.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/i2c/saa6588.ko drivers/media/i2c/saa6588.o drivers/media/i2c/saa6588.mod.o;  true

cmd_drivers/media/i2c/mt9m001.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/i2c/mt9m001.ko drivers/media/i2c/mt9m001.o drivers/media/i2c/mt9m001.mod.o;  true

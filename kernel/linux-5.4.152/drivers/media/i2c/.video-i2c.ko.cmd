cmd_drivers/media/i2c/video-i2c.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/i2c/video-i2c.ko drivers/media/i2c/video-i2c.o drivers/media/i2c/video-i2c.mod.o;  true

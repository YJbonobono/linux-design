cmd_drivers/media/i2c/tvaudio.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/i2c/tvaudio.ko drivers/media/i2c/tvaudio.o drivers/media/i2c/tvaudio.mod.o;  true

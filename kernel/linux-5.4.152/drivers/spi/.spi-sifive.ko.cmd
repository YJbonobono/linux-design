cmd_drivers/spi/spi-sifive.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/spi/spi-sifive.ko drivers/spi/spi-sifive.o drivers/spi/spi-sifive.mod.o;  true

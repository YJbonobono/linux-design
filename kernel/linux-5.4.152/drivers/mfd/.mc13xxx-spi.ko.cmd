cmd_drivers/mfd/mc13xxx-spi.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mfd/mc13xxx-spi.ko drivers/mfd/mc13xxx-spi.o drivers/mfd/mc13xxx-spi.mod.o;  true

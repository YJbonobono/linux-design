cmd_drivers/net/can/spi/hi311x.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/can/spi/hi311x.ko drivers/net/can/spi/hi311x.o drivers/net/can/spi/hi311x.mod.o;  true

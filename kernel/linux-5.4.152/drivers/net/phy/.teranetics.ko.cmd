cmd_drivers/net/phy/teranetics.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/phy/teranetics.ko drivers/net/phy/teranetics.o drivers/net/phy/teranetics.mod.o;  true

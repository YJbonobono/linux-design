cmd_drivers/net/ethernet/natsemi/ns83820.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/ethernet/natsemi/ns83820.ko drivers/net/ethernet/natsemi/ns83820.o drivers/net/ethernet/natsemi/ns83820.mod.o;  true

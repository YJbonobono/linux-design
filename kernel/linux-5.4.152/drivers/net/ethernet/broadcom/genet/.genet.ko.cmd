cmd_drivers/net/ethernet/broadcom/genet/genet.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/ethernet/broadcom/genet/genet.ko drivers/net/ethernet/broadcom/genet/genet.o drivers/net/ethernet/broadcom/genet/genet.mod.o;  true

cmd_drivers/net/ethernet/amd/amd8111e.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/ethernet/amd/amd8111e.ko drivers/net/ethernet/amd/amd8111e.o drivers/net/ethernet/amd/amd8111e.mod.o;  true

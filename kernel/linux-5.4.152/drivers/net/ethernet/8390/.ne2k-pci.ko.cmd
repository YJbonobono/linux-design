cmd_drivers/net/ethernet/8390/ne2k-pci.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/ethernet/8390/ne2k-pci.ko drivers/net/ethernet/8390/ne2k-pci.o drivers/net/ethernet/8390/ne2k-pci.mod.o;  true

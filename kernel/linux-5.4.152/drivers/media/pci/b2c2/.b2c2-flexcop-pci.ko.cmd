cmd_drivers/media/pci/b2c2/b2c2-flexcop-pci.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/pci/b2c2/b2c2-flexcop-pci.ko drivers/media/pci/b2c2/b2c2-flexcop-pci.o drivers/media/pci/b2c2/b2c2-flexcop-pci.mod.o;  true

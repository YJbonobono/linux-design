cmd_drivers/net/wan/pci200syn.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/wan/pci200syn.ko drivers/net/wan/pci200syn.o drivers/net/wan/pci200syn.mod.o;  true

cmd_drivers/misc/mei/mei-txe.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/misc/mei/mei-txe.o drivers/misc/mei/pci-txe.o drivers/misc/mei/hw-txe.o

cmd_drivers/media/pci/saa7134/saa7134-dvb.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/pci/saa7134/saa7134-dvb.ko drivers/media/pci/saa7134/saa7134-dvb.o drivers/media/pci/saa7134/saa7134-dvb.mod.o;  true

cmd_drivers/ata/pata_pcmcia.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/ata/pata_pcmcia.ko drivers/ata/pata_pcmcia.o drivers/ata/pata_pcmcia.mod.o;  true

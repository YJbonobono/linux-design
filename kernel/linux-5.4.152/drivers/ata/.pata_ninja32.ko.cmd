cmd_drivers/ata/pata_ninja32.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/ata/pata_ninja32.ko drivers/ata/pata_ninja32.o drivers/ata/pata_ninja32.mod.o;  true

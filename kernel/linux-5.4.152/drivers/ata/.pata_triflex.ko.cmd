cmd_drivers/ata/pata_triflex.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/ata/pata_triflex.ko drivers/ata/pata_triflex.o drivers/ata/pata_triflex.mod.o;  true

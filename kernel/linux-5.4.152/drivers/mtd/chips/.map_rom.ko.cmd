cmd_drivers/mtd/chips/map_rom.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mtd/chips/map_rom.ko drivers/mtd/chips/map_rom.o drivers/mtd/chips/map_rom.mod.o;  true

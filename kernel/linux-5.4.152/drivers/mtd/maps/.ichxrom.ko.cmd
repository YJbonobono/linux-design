cmd_drivers/mtd/maps/ichxrom.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mtd/maps/ichxrom.ko drivers/mtd/maps/ichxrom.o drivers/mtd/maps/ichxrom.mod.o;  true

cmd_drivers/mtd/chips/chipreg.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mtd/chips/chipreg.ko drivers/mtd/chips/chipreg.o drivers/mtd/chips/chipreg.mod.o;  true

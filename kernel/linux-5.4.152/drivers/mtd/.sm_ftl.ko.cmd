cmd_drivers/mtd/sm_ftl.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mtd/sm_ftl.ko drivers/mtd/sm_ftl.o drivers/mtd/sm_ftl.mod.o;  true

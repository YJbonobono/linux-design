cmd_drivers/mtd/chips/jedec_probe.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mtd/chips/jedec_probe.ko drivers/mtd/chips/jedec_probe.o drivers/mtd/chips/jedec_probe.mod.o;  true

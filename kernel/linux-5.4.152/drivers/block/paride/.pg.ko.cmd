cmd_drivers/block/paride/pg.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/block/paride/pg.ko drivers/block/paride/pg.o drivers/block/paride/pg.mod.o;  true

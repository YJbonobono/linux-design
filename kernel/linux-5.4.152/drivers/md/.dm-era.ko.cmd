cmd_drivers/md/dm-era.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/md/dm-era.ko drivers/md/dm-era.o drivers/md/dm-era.mod.o;  true

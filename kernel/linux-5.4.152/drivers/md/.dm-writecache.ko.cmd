cmd_drivers/md/dm-writecache.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/md/dm-writecache.ko drivers/md/dm-writecache.o drivers/md/dm-writecache.mod.o;  true

cmd_drivers/vhost/vringh.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/vhost/vringh.ko drivers/vhost/vringh.o drivers/vhost/vringh.mod.o;  true

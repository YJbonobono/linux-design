cmd_drivers/xen/xenfs/xenfs.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/xen/xenfs/xenfs.ko drivers/xen/xenfs/xenfs.o drivers/xen/xenfs/xenfs.mod.o;  true

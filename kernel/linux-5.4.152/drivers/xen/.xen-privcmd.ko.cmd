cmd_drivers/xen/xen-privcmd.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/xen/xen-privcmd.ko drivers/xen/xen-privcmd.o drivers/xen/xen-privcmd.mod.o;  true

cmd_drivers/xen/xenfs/xenfs.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/xen/xenfs/xenfs.o drivers/xen/xenfs/super.o drivers/xen/xenfs/xenstored.o drivers/xen/xenfs/xensyms.o

cmd_drivers/misc/ti-st/st_drv.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/misc/ti-st/st_drv.o drivers/misc/ti-st/st_core.o drivers/misc/ti-st/st_kim.o drivers/misc/ti-st/st_ll.o

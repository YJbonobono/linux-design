cmd_drivers/net/usb/lg-vl600.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/usb/lg-vl600.ko drivers/net/usb/lg-vl600.o drivers/net/usb/lg-vl600.mod.o;  true

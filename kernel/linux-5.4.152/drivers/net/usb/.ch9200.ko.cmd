cmd_drivers/net/usb/ch9200.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/usb/ch9200.ko drivers/net/usb/ch9200.o drivers/net/usb/ch9200.mod.o;  true

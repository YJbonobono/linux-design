cmd_drivers/usb/serial/f81534.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/usb/serial/f81534.ko drivers/usb/serial/f81534.o drivers/usb/serial/f81534.mod.o;  true

cmd_drivers/usb/misc/idmouse.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/usb/misc/idmouse.ko drivers/usb/misc/idmouse.o drivers/usb/misc/idmouse.mod.o;  true

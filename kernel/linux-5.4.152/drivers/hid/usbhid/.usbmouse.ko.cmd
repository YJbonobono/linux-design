cmd_drivers/hid/usbhid/usbmouse.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hid/usbhid/usbmouse.ko drivers/hid/usbhid/usbmouse.o drivers/hid/usbhid/usbmouse.mod.o;  true

cmd_drivers/usb/misc/usblcd.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/usb/misc/usblcd.ko drivers/usb/misc/usblcd.o drivers/usb/misc/usblcd.mod.o;  true

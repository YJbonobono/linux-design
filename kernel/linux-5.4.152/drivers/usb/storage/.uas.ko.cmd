cmd_drivers/usb/storage/uas.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/usb/storage/uas.ko drivers/usb/storage/uas.o drivers/usb/storage/uas.mod.o;  true

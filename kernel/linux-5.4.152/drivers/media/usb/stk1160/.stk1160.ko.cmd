cmd_drivers/media/usb/stk1160/stk1160.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/usb/stk1160/stk1160.ko drivers/media/usb/stk1160/stk1160.o drivers/media/usb/stk1160/stk1160.mod.o;  true

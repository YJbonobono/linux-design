cmd_drivers/usb/gadget/udc/gr_udc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/usb/gadget/udc/gr_udc.ko drivers/usb/gadget/udc/gr_udc.o drivers/usb/gadget/udc/gr_udc.mod.o;  true

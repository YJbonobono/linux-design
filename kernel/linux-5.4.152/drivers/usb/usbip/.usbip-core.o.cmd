cmd_drivers/usb/usbip/usbip-core.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/usb/usbip/usbip-core.o drivers/usb/usbip/usbip_common.o drivers/usb/usbip/usbip_event.o

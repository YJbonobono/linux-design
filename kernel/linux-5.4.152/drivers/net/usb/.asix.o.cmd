cmd_drivers/net/usb/asix.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/net/usb/asix.o drivers/net/usb/asix_devices.o drivers/net/usb/asix_common.o drivers/net/usb/ax88172a.o

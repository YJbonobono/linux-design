cmd_drivers/usb/host/xhci-plat-hcd.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/usb/host/xhci-plat-hcd.ko drivers/usb/host/xhci-plat-hcd.o drivers/usb/host/xhci-plat-hcd.mod.o;  true

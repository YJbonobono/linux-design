cmd_drivers/usb/host/isp116x-hcd.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/usb/host/isp116x-hcd.ko drivers/usb/host/isp116x-hcd.o drivers/usb/host/isp116x-hcd.mod.o;  true

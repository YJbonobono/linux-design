cmd_drivers/usb/host/ehci-fsl.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/usb/host/ehci-fsl.ko drivers/usb/host/ehci-fsl.o drivers/usb/host/ehci-fsl.mod.o;  true

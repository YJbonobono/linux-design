cmd_drivers/net/usb/cdc_subset.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/usb/cdc_subset.ko drivers/net/usb/cdc_subset.o drivers/net/usb/cdc_subset.mod.o;  true

cmd_drivers/power/supply/cros_usbpd-charger.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/power/supply/cros_usbpd-charger.ko drivers/power/supply/cros_usbpd-charger.o drivers/power/supply/cros_usbpd-charger.mod.o;  true

cmd_drivers/power/supply/axp20x_usb_power.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/power/supply/axp20x_usb_power.ko drivers/power/supply/axp20x_usb_power.o drivers/power/supply/axp20x_usb_power.mod.o;  true

cmd_drivers/power/supply/pcf50633-charger.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/power/supply/pcf50633-charger.ko drivers/power/supply/pcf50633-charger.o drivers/power/supply/pcf50633-charger.mod.o;  true

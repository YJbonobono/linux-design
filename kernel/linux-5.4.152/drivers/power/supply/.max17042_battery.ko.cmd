cmd_drivers/power/supply/max17042_battery.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/power/supply/max17042_battery.ko drivers/power/supply/max17042_battery.o drivers/power/supply/max17042_battery.mod.o;  true

cmd_drivers/power/supply/ds2760_battery.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/power/supply/ds2760_battery.ko drivers/power/supply/ds2760_battery.o drivers/power/supply/ds2760_battery.mod.o;  true

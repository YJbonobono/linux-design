cmd_drivers/power/supply/max8998_charger.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/power/supply/max8998_charger.ko drivers/power/supply/max8998_charger.o drivers/power/supply/max8998_charger.mod.o;  true

cmd_drivers/power/supply/sbs-battery.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/power/supply/sbs-battery.ko drivers/power/supply/sbs-battery.o drivers/power/supply/sbs-battery.mod.o;  true

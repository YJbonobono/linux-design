cmd_drivers/hwmon/wm831x-hwmon.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/wm831x-hwmon.ko drivers/hwmon/wm831x-hwmon.o drivers/hwmon/wm831x-hwmon.mod.o;  true

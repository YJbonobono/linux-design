cmd_drivers/hwmon/applesmc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/applesmc.ko drivers/hwmon/applesmc.o drivers/hwmon/applesmc.mod.o;  true

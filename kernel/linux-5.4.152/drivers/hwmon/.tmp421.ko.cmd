cmd_drivers/hwmon/tmp421.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/tmp421.ko drivers/hwmon/tmp421.o drivers/hwmon/tmp421.mod.o;  true

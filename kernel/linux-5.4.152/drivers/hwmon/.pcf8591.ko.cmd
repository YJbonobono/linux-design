cmd_drivers/hwmon/pcf8591.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/pcf8591.ko drivers/hwmon/pcf8591.o drivers/hwmon/pcf8591.mod.o;  true

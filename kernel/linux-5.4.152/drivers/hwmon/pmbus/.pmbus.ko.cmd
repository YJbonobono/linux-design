cmd_drivers/hwmon/pmbus/pmbus.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/pmbus/pmbus.ko drivers/hwmon/pmbus/pmbus.o drivers/hwmon/pmbus/pmbus.mod.o;  true

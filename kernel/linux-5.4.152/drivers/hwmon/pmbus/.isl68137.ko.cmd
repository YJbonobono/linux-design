cmd_drivers/hwmon/pmbus/isl68137.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/pmbus/isl68137.ko drivers/hwmon/pmbus/isl68137.o drivers/hwmon/pmbus/isl68137.mod.o;  true

cmd_drivers/hwmon/pmbus/adm1275.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/pmbus/adm1275.ko drivers/hwmon/pmbus/adm1275.o drivers/hwmon/pmbus/adm1275.mod.o;  true

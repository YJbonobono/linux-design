cmd_drivers/hwmon/sht3x.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/sht3x.ko drivers/hwmon/sht3x.o drivers/hwmon/sht3x.mod.o;  true

cmd_drivers/hwmon/w83795.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/w83795.ko drivers/hwmon/w83795.o drivers/hwmon/w83795.mod.o;  true

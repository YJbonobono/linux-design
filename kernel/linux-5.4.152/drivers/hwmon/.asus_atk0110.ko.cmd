cmd_drivers/hwmon/asus_atk0110.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/asus_atk0110.ko drivers/hwmon/asus_atk0110.o drivers/hwmon/asus_atk0110.mod.o;  true

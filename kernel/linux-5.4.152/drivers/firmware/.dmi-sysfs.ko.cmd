cmd_drivers/firmware/dmi-sysfs.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/firmware/dmi-sysfs.ko drivers/firmware/dmi-sysfs.o drivers/firmware/dmi-sysfs.mod.o;  true

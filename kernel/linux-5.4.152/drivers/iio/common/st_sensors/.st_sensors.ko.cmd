cmd_drivers/iio/common/st_sensors/st_sensors.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/common/st_sensors/st_sensors.ko drivers/iio/common/st_sensors/st_sensors.o drivers/iio/common/st_sensors/st_sensors.mod.o;  true

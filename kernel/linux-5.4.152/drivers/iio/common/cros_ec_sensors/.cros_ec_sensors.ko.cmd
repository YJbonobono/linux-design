cmd_drivers/iio/common/cros_ec_sensors/cros_ec_sensors.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/common/cros_ec_sensors/cros_ec_sensors.ko drivers/iio/common/cros_ec_sensors/cros_ec_sensors.o drivers/iio/common/cros_ec_sensors/cros_ec_sensors.mod.o;  true

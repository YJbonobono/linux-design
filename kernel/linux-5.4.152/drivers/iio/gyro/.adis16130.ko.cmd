cmd_drivers/iio/gyro/adis16130.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/gyro/adis16130.ko drivers/iio/gyro/adis16130.o drivers/iio/gyro/adis16130.mod.o;  true

cmd_drivers/iio/imu/adis_lib.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/iio/imu/adis_lib.o drivers/iio/imu/adis.o drivers/iio/imu/adis_trigger.o drivers/iio/imu/adis_buffer.o

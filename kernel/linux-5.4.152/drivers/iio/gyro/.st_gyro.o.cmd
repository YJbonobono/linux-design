cmd_drivers/iio/gyro/st_gyro.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/iio/gyro/st_gyro.o drivers/iio/gyro/st_gyro_core.o drivers/iio/gyro/st_gyro_buffer.o

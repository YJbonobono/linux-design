cmd_drivers/iio/humidity/hts221.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/iio/humidity/hts221.o drivers/iio/humidity/hts221_core.o drivers/iio/humidity/hts221_buffer.o

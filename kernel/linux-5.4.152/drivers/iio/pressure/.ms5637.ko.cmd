cmd_drivers/iio/pressure/ms5637.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/pressure/ms5637.ko drivers/iio/pressure/ms5637.o drivers/iio/pressure/ms5637.mod.o;  true

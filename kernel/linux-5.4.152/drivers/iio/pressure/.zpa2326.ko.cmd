cmd_drivers/iio/pressure/zpa2326.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/pressure/zpa2326.ko drivers/iio/pressure/zpa2326.o drivers/iio/pressure/zpa2326.mod.o;  true

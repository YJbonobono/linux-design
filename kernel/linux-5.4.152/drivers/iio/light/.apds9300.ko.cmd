cmd_drivers/iio/light/apds9300.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/light/apds9300.ko drivers/iio/light/apds9300.o drivers/iio/light/apds9300.mod.o;  true

cmd_drivers/iio/potentiometer/max5432.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/potentiometer/max5432.ko drivers/iio/potentiometer/max5432.o drivers/iio/potentiometer/max5432.mod.o;  true

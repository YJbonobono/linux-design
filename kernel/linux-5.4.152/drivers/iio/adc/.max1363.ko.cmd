cmd_drivers/iio/adc/max1363.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/adc/max1363.ko drivers/iio/adc/max1363.o drivers/iio/adc/max1363.mod.o;  true

cmd_drivers/iio/light/rpr0521.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/iio/light/rpr0521.ko drivers/iio/light/rpr0521.o drivers/iio/light/rpr0521.mod.o;  true

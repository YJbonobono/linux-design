cmd_drivers/media/radio/radio-raremono.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/radio/radio-raremono.ko drivers/media/radio/radio-raremono.o drivers/media/radio/radio-raremono.mod.o;  true

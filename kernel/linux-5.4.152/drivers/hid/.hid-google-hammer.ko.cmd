cmd_drivers/hid/hid-google-hammer.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hid/hid-google-hammer.ko drivers/hid/hid-google-hammer.o drivers/hid/hid-google-hammer.mod.o;  true

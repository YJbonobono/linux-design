cmd_drivers/hid/hid-corsair.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hid/hid-corsair.ko drivers/hid/hid-corsair.o drivers/hid/hid-corsair.mod.o;  true

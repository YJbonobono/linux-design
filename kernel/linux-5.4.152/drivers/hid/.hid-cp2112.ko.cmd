cmd_drivers/hid/hid-cp2112.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hid/hid-cp2112.ko drivers/hid/hid-cp2112.o drivers/hid/hid-cp2112.mod.o;  true

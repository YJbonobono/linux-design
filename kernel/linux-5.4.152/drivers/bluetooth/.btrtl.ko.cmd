cmd_drivers/bluetooth/btrtl.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/bluetooth/btrtl.ko drivers/bluetooth/btrtl.o drivers/bluetooth/btrtl.mod.o;  true

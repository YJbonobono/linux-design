cmd_drivers/hid/hid-creative-sb0540.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hid/hid-creative-sb0540.ko drivers/hid/hid-creative-sb0540.o drivers/hid/hid-creative-sb0540.mod.o;  true

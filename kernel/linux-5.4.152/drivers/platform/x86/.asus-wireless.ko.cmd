cmd_drivers/platform/x86/asus-wireless.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/platform/x86/asus-wireless.ko drivers/platform/x86/asus-wireless.o drivers/platform/x86/asus-wireless.mod.o;  true

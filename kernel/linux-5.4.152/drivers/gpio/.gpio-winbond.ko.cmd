cmd_drivers/gpio/gpio-winbond.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/gpio/gpio-winbond.ko drivers/gpio/gpio-winbond.o drivers/gpio/gpio-winbond.mod.o;  true

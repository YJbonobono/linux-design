cmd_drivers/input/keyboard/gpio_keys.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/input/keyboard/gpio_keys.ko drivers/input/keyboard/gpio_keys.o drivers/input/keyboard/gpio_keys.mod.o;  true

cmd_drivers/input/keyboard/lm8323.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/input/keyboard/lm8323.ko drivers/input/keyboard/lm8323.o drivers/input/keyboard/lm8323.mod.o;  true

cmd_drivers/input/sparse-keymap.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/input/sparse-keymap.ko drivers/input/sparse-keymap.o drivers/input/sparse-keymap.mod.o;  true

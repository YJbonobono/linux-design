cmd_drivers/input/gameport/ns558.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/input/gameport/ns558.ko drivers/input/gameport/ns558.o drivers/input/gameport/ns558.mod.o;  true

cmd_drivers/input/gameport/lightning.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/input/gameport/lightning.ko drivers/input/gameport/lightning.o drivers/input/gameport/lightning.mod.o;  true

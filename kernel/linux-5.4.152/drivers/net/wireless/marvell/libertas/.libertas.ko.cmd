cmd_drivers/net/wireless/marvell/libertas/libertas.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/wireless/marvell/libertas/libertas.ko drivers/net/wireless/marvell/libertas/libertas.o drivers/net/wireless/marvell/libertas/libertas.mod.o;  true

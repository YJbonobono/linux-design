cmd_drivers/misc/mei/mei-txe.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/misc/mei/mei-txe.ko drivers/misc/mei/mei-txe.o drivers/misc/mei/mei-txe.mod.o;  true

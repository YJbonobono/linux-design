cmd_drivers/mcb/mcb.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mcb/mcb.ko drivers/mcb/mcb.o drivers/mcb/mcb.mod.o;  true

cmd_drivers/visorbus/visorbus.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/visorbus/visorbus.ko drivers/visorbus/visorbus.o drivers/visorbus/visorbus.mod.o;  true

cmd_drivers/input/misc/bma150.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/input/misc/bma150.ko drivers/input/misc/bma150.o drivers/input/misc/bma150.mod.o;  true

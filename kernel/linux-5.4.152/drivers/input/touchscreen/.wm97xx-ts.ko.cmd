cmd_drivers/input/touchscreen/wm97xx-ts.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/input/touchscreen/wm97xx-ts.ko drivers/input/touchscreen/wm97xx-ts.o drivers/input/touchscreen/wm97xx-ts.mod.o;  true

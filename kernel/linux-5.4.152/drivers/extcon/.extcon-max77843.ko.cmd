cmd_drivers/extcon/extcon-max77843.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/extcon/extcon-max77843.ko drivers/extcon/extcon-max77843.o drivers/extcon/extcon-max77843.mod.o;  true

cmd_drivers/input/misc/da9052_onkey.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/input/misc/da9052_onkey.ko drivers/input/misc/da9052_onkey.o drivers/input/misc/da9052_onkey.mod.o;  true

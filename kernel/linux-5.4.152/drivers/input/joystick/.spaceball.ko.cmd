cmd_drivers/input/joystick/spaceball.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/input/joystick/spaceball.ko drivers/input/joystick/spaceball.o drivers/input/joystick/spaceball.mod.o;  true

cmd_drivers/staging/greybus/gb-pwm.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/staging/greybus/gb-pwm.ko drivers/staging/greybus/gb-pwm.o drivers/staging/greybus/gb-pwm.mod.o;  true

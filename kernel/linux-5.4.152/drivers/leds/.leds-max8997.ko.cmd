cmd_drivers/leds/leds-max8997.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/leds/leds-max8997.ko drivers/leds/leds-max8997.o drivers/leds/leds-max8997.mod.o;  true

cmd_drivers/atm/ambassador.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/atm/ambassador.ko drivers/atm/ambassador.o drivers/atm/ambassador.mod.o;  true

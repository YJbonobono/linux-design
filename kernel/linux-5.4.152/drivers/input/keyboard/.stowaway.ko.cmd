cmd_drivers/input/keyboard/stowaway.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/input/keyboard/stowaway.ko drivers/input/keyboard/stowaway.o drivers/input/keyboard/stowaway.mod.o;  true

cmd_drivers/firewire/nosy.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/firewire/nosy.ko drivers/firewire/nosy.o drivers/firewire/nosy.mod.o;  true

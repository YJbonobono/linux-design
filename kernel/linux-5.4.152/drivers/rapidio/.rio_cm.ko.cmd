cmd_drivers/rapidio/rio_cm.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/rapidio/rio_cm.ko drivers/rapidio/rio_cm.o drivers/rapidio/rio_cm.mod.o;  true

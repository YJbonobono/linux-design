cmd_drivers/net/wan/farsync.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/wan/farsync.ko drivers/net/wan/farsync.o drivers/net/wan/farsync.mod.o;  true

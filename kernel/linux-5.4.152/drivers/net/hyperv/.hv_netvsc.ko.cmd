cmd_drivers/net/hyperv/hv_netvsc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/hyperv/hv_netvsc.ko drivers/net/hyperv/hv_netvsc.o drivers/net/hyperv/hv_netvsc.mod.o;  true

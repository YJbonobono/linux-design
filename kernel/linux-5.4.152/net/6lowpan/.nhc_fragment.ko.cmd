cmd_net/6lowpan/nhc_fragment.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/6lowpan/nhc_fragment.ko net/6lowpan/nhc_fragment.o net/6lowpan/nhc_fragment.mod.o;  true

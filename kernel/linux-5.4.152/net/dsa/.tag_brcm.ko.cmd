cmd_net/dsa/tag_brcm.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/dsa/tag_brcm.ko net/dsa/tag_brcm.o net/dsa/tag_brcm.mod.o;  true

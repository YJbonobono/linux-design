cmd_sound/pci/au88x0/snd-au8830.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/pci/au88x0/snd-au8830.ko sound/pci/au88x0/snd-au8830.o sound/pci/au88x0/snd-au8830.mod.o;  true

cmd_sound/pci/hda/snd-hda-codec-generic.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/pci/hda/snd-hda-codec-generic.ko sound/pci/hda/snd-hda-codec-generic.o sound/pci/hda/snd-hda-codec-generic.mod.o;  true

cmd_sound/pci/echoaudio/snd-mona.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/pci/echoaudio/snd-mona.ko sound/pci/echoaudio/snd-mona.o sound/pci/echoaudio/snd-mona.mod.o;  true

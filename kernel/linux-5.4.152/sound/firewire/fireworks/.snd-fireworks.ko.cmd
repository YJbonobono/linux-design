cmd_sound/firewire/fireworks/snd-fireworks.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/firewire/fireworks/snd-fireworks.ko sound/firewire/fireworks/snd-fireworks.o sound/firewire/fireworks/snd-fireworks.mod.o;  true

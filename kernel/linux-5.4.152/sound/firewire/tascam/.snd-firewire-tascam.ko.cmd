cmd_sound/firewire/tascam/snd-firewire-tascam.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/firewire/tascam/snd-firewire-tascam.ko sound/firewire/tascam/snd-firewire-tascam.o sound/firewire/tascam/snd-firewire-tascam.mod.o;  true

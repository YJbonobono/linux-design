cmd_sound/synth/emux/snd-emux-synth.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/synth/emux/snd-emux-synth.ko sound/synth/emux/snd-emux-synth.o sound/synth/emux/snd-emux-synth.mod.o;  true

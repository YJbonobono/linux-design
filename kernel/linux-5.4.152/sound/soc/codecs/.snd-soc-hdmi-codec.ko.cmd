cmd_sound/soc/codecs/snd-soc-hdmi-codec.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/soc/codecs/snd-soc-hdmi-codec.ko sound/soc/codecs/snd-soc-hdmi-codec.o sound/soc/codecs/snd-soc-hdmi-codec.mod.o;  true

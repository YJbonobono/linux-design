cmd_sound/i2c/other/snd-ak4114.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/i2c/other/snd-ak4114.ko sound/i2c/other/snd-ak4114.o sound/i2c/other/snd-ak4114.mod.o;  true

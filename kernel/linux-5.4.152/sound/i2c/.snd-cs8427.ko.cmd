cmd_sound/i2c/snd-cs8427.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/i2c/snd-cs8427.ko sound/i2c/snd-cs8427.o sound/i2c/snd-cs8427.mod.o;  true

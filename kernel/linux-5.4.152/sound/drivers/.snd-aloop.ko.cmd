cmd_sound/drivers/snd-aloop.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/drivers/snd-aloop.ko sound/drivers/snd-aloop.o sound/drivers/snd-aloop.mod.o;  true

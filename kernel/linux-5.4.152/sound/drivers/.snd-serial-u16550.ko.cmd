cmd_sound/drivers/snd-serial-u16550.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/drivers/snd-serial-u16550.ko sound/drivers/snd-serial-u16550.o sound/drivers/snd-serial-u16550.mod.o;  true

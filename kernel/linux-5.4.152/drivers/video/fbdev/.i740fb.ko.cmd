cmd_drivers/video/fbdev/i740fb.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/video/fbdev/i740fb.ko drivers/video/fbdev/i740fb.o drivers/video/fbdev/i740fb.mod.o;  true

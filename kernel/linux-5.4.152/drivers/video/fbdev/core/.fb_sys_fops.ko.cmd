cmd_drivers/video/fbdev/core/fb_sys_fops.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/video/fbdev/core/fb_sys_fops.ko drivers/video/fbdev/core/fb_sys_fops.o drivers/video/fbdev/core/fb_sys_fops.mod.o;  true

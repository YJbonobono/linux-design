cmd_drivers/media/rc/keymaps/rc-hauppauge.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/rc/keymaps/rc-hauppauge.ko drivers/media/rc/keymaps/rc-hauppauge.o drivers/media/rc/keymaps/rc-hauppauge.mod.o;  true

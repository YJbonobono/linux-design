cmd_drivers/media/platform/vim2m.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/platform/vim2m.ko drivers/media/platform/vim2m.o drivers/media/platform/vim2m.mod.o;  true

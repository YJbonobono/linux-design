cmd_lib/libcrc32c.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o lib/libcrc32c.ko lib/libcrc32c.o lib/libcrc32c.mod.o;  true

cmd_fs/nls/mac-croatian.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/nls/mac-croatian.ko fs/nls/mac-croatian.o fs/nls/mac-croatian.mod.o;  true

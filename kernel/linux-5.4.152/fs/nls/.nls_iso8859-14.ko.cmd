cmd_fs/nls/nls_iso8859-14.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/nls/nls_iso8859-14.ko fs/nls/nls_iso8859-14.o fs/nls/nls_iso8859-14.mod.o;  true

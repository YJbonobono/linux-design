cmd_crypto/twofish_common.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/twofish_common.ko crypto/twofish_common.o crypto/twofish_common.mod.o;  true

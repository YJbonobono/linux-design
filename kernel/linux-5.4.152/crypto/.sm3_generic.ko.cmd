cmd_crypto/sm3_generic.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o crypto/sm3_generic.ko crypto/sm3_generic.o crypto/sm3_generic.mod.o;  true

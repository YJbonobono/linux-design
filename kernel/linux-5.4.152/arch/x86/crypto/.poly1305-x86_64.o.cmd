cmd_arch/x86/crypto/poly1305-x86_64.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o arch/x86/crypto/poly1305-x86_64.o arch/x86/crypto/poly1305-sse2-x86_64.o arch/x86/crypto/poly1305_glue.o arch/x86/crypto/poly1305-avx2-x86_64.o

cmd_drivers/crypto/chelsio/chcr.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/crypto/chelsio/chcr.o drivers/crypto/chelsio/chcr_core.o drivers/crypto/chelsio/chcr_algo.o

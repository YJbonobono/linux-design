cmd_drivers/mtd/nftl.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/mtd/nftl.o drivers/mtd/nftlcore.o drivers/mtd/nftlmount.o

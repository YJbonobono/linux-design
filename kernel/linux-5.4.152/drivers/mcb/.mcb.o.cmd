cmd_drivers/mcb/mcb.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/mcb/mcb.o drivers/mcb/mcb-core.o drivers/mcb/mcb-parse.o

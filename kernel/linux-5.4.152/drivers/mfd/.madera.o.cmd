cmd_drivers/mfd/madera.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/mfd/madera.o drivers/mfd/madera-core.o drivers/mfd/cs47l15-tables.o drivers/mfd/cs47l35-tables.o drivers/mfd/cs47l85-tables.o drivers/mfd/cs47l90-tables.o drivers/mfd/cs47l92-tables.o

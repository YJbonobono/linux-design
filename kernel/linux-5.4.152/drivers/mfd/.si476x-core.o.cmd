cmd_drivers/mfd/si476x-core.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/mfd/si476x-core.o drivers/mfd/si476x-cmd.o drivers/mfd/si476x-prop.o drivers/mfd/si476x-i2c.o

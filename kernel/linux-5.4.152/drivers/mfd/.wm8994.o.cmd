cmd_drivers/mfd/wm8994.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/mfd/wm8994.o drivers/mfd/wm8994-core.o drivers/mfd/wm8994-irq.o drivers/mfd/wm8994-regmap.o

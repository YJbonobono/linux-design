cmd_drivers/edac/i10nm_edac.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/edac/i10nm_edac.o drivers/edac/skx_common.o drivers/edac/i10nm_base.o

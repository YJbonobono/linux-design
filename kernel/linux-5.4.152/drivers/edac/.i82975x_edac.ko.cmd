cmd_drivers/edac/i82975x_edac.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/edac/i82975x_edac.ko drivers/edac/i82975x_edac.o drivers/edac/i82975x_edac.mod.o;  true

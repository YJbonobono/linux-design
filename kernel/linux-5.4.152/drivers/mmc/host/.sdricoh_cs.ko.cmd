cmd_drivers/mmc/host/sdricoh_cs.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mmc/host/sdricoh_cs.ko drivers/mmc/host/sdricoh_cs.o drivers/mmc/host/sdricoh_cs.mod.o;  true

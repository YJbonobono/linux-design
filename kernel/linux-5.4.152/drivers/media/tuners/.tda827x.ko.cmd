cmd_drivers/media/tuners/tda827x.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/tuners/tda827x.ko drivers/media/tuners/tda827x.o drivers/media/tuners/tda827x.mod.o;  true

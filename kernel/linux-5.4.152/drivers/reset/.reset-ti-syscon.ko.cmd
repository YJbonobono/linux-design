cmd_drivers/reset/reset-ti-syscon.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/reset/reset-ti-syscon.ko drivers/reset/reset-ti-syscon.o drivers/reset/reset-ti-syscon.mod.o;  true

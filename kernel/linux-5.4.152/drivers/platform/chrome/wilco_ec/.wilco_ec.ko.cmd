cmd_drivers/platform/chrome/wilco_ec/wilco_ec.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/platform/chrome/wilco_ec/wilco_ec.ko drivers/platform/chrome/wilco_ec/wilco_ec.o drivers/platform/chrome/wilco_ec/wilco_ec.mod.o;  true

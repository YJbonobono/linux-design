cmd_drivers/scsi/megaraid/megaraid_mm.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/scsi/megaraid/megaraid_mm.ko drivers/scsi/megaraid/megaraid_mm.o drivers/scsi/megaraid/megaraid_mm.mod.o;  true

cmd_drivers/scsi/megaraid/megaraid_mbox.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/scsi/megaraid/megaraid_mbox.ko drivers/scsi/megaraid/megaraid_mbox.o drivers/scsi/megaraid/megaraid_mbox.mod.o;  true

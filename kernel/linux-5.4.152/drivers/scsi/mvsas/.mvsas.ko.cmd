cmd_drivers/scsi/mvsas/mvsas.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/scsi/mvsas/mvsas.ko drivers/scsi/mvsas/mvsas.o drivers/scsi/mvsas/mvsas.mod.o;  true

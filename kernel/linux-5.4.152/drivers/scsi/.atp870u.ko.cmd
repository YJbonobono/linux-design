cmd_drivers/scsi/atp870u.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/scsi/atp870u.ko drivers/scsi/atp870u.o drivers/scsi/atp870u.mod.o;  true

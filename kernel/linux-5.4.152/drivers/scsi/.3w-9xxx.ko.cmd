cmd_drivers/scsi/3w-9xxx.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/scsi/3w-9xxx.ko drivers/scsi/3w-9xxx.o drivers/scsi/3w-9xxx.mod.o;  true

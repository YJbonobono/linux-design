cmd_drivers/scsi/ufs/tc-dwc-g210-pltfrm.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/scsi/ufs/tc-dwc-g210-pltfrm.ko drivers/scsi/ufs/tc-dwc-g210-pltfrm.o drivers/scsi/ufs/tc-dwc-g210-pltfrm.mod.o;  true

cmd_drivers/scsi/mpt3sas/mpt3sas.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/scsi/mpt3sas/mpt3sas.o drivers/scsi/mpt3sas/mpt3sas_base.o drivers/scsi/mpt3sas/mpt3sas_config.o drivers/scsi/mpt3sas/mpt3sas_scsih.o drivers/scsi/mpt3sas/mpt3sas_transport.o drivers/scsi/mpt3sas/mpt3sas_ctl.o drivers/scsi/mpt3sas/mpt3sas_trigger_diag.o drivers/scsi/mpt3sas/mpt3sas_warpdrive.o

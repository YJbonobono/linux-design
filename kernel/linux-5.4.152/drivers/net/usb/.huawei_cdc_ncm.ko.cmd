cmd_drivers/net/usb/huawei_cdc_ncm.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/usb/huawei_cdc_ncm.ko drivers/net/usb/huawei_cdc_ncm.o drivers/net/usb/huawei_cdc_ncm.mod.o;  true

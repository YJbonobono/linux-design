cmd_drivers/nfc/nfcmrvl/nfcmrvl_spi.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/nfc/nfcmrvl/nfcmrvl_spi.ko drivers/nfc/nfcmrvl/nfcmrvl_spi.o drivers/nfc/nfcmrvl/nfcmrvl_spi.mod.o;  true

cmd_drivers/bluetooth/btmrvl_sdio.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/bluetooth/btmrvl_sdio.ko drivers/bluetooth/btmrvl_sdio.o drivers/bluetooth/btmrvl_sdio.mod.o;  true

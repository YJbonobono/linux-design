cmd_net/nfc/nci/nci_uart.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/nfc/nci/nci_uart.ko net/nfc/nci/nci_uart.o net/nfc/nci/nci_uart.mod.o;  true

cmd_drivers/mmc/host/sdhci-pci.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mmc/host/sdhci-pci.ko drivers/mmc/host/sdhci-pci.o drivers/mmc/host/sdhci-pci.mod.o;  true

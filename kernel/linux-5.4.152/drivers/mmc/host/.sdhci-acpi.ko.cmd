cmd_drivers/mmc/host/sdhci-acpi.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mmc/host/sdhci-acpi.ko drivers/mmc/host/sdhci-acpi.o drivers/mmc/host/sdhci-acpi.mod.o;  true

cmd_drivers/phy/samsung/phy-exynos-usb2.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/phy/samsung/phy-exynos-usb2.ko drivers/phy/samsung/phy-exynos-usb2.o drivers/phy/samsung/phy-exynos-usb2.mod.o;  true

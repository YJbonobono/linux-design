cmd_drivers/watchdog/iTCO_wdt.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/watchdog/iTCO_wdt.ko drivers/watchdog/iTCO_wdt.o drivers/watchdog/iTCO_wdt.mod.o;  true

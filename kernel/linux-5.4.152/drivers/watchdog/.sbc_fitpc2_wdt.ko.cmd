cmd_drivers/watchdog/sbc_fitpc2_wdt.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/watchdog/sbc_fitpc2_wdt.ko drivers/watchdog/sbc_fitpc2_wdt.o drivers/watchdog/sbc_fitpc2_wdt.mod.o;  true

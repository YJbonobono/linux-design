cmd_drivers/watchdog/ziirave_wdt.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/watchdog/ziirave_wdt.ko drivers/watchdog/ziirave_wdt.o drivers/watchdog/ziirave_wdt.mod.o;  true

cmd_drivers/rtc/rtc-rx8025.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/rtc/rtc-rx8025.ko drivers/rtc/rtc-rx8025.o drivers/rtc/rtc-rx8025.mod.o;  true

cmd_drivers/rtc/rtc-em3027.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/rtc/rtc-em3027.ko drivers/rtc/rtc-em3027.o drivers/rtc/rtc-em3027.mod.o;  true

cmd_drivers/rtc/rtc-pcf8583.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/rtc/rtc-pcf8583.ko drivers/rtc/rtc-pcf8583.o drivers/rtc/rtc-pcf8583.mod.o;  true

cmd_drivers/rtc/rtc-palmas.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/rtc/rtc-palmas.ko drivers/rtc/rtc-palmas.o drivers/rtc/rtc-palmas.mod.o;  true

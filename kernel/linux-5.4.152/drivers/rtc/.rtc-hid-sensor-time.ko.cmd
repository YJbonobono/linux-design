cmd_drivers/rtc/rtc-hid-sensor-time.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/rtc/rtc-hid-sensor-time.ko drivers/rtc/rtc-hid-sensor-time.o drivers/rtc/rtc-hid-sensor-time.mod.o;  true

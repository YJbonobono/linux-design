cmd_drivers/media/usb/dvb-usb/dvb-usb-ttusb2.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/usb/dvb-usb/dvb-usb-ttusb2.ko drivers/media/usb/dvb-usb/dvb-usb-ttusb2.o drivers/media/usb/dvb-usb/dvb-usb-ttusb2.mod.o;  true

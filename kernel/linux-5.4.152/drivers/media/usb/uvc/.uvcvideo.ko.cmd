cmd_drivers/media/usb/uvc/uvcvideo.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/usb/uvc/uvcvideo.ko drivers/media/usb/uvc/uvcvideo.o drivers/media/usb/uvc/uvcvideo.mod.o;  true

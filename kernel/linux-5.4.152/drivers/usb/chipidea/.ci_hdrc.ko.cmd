cmd_drivers/usb/chipidea/ci_hdrc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/usb/chipidea/ci_hdrc.ko drivers/usb/chipidea/ci_hdrc.o drivers/usb/chipidea/ci_hdrc.mod.o;  true

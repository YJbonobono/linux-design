cmd_drivers/platform/chrome/cros_kbd_led_backlight.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/platform/chrome/cros_kbd_led_backlight.ko drivers/platform/chrome/cros_kbd_led_backlight.o drivers/platform/chrome/cros_kbd_led_backlight.mod.o;  true

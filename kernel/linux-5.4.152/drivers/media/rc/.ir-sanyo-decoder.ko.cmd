cmd_drivers/media/rc/ir-sanyo-decoder.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/rc/ir-sanyo-decoder.ko drivers/media/rc/ir-sanyo-decoder.o drivers/media/rc/ir-sanyo-decoder.mod.o;  true

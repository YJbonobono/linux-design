cmd_drivers/input/tablet/pegasus_notetaker.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/input/tablet/pegasus_notetaker.ko drivers/input/tablet/pegasus_notetaker.o drivers/input/tablet/pegasus_notetaker.mod.o;  true

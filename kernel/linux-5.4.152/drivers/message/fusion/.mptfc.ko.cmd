cmd_drivers/message/fusion/mptfc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/message/fusion/mptfc.ko drivers/message/fusion/mptfc.o drivers/message/fusion/mptfc.mod.o;  true

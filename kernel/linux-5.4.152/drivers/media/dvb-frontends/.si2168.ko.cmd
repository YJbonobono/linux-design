cmd_drivers/media/dvb-frontends/si2168.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/dvb-frontends/si2168.ko drivers/media/dvb-frontends/si2168.o drivers/media/dvb-frontends/si2168.mod.o;  true

cmd_drivers/media/dvb-frontends/drxd.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/dvb-frontends/drxd.ko drivers/media/dvb-frontends/drxd.o drivers/media/dvb-frontends/drxd.mod.o;  true

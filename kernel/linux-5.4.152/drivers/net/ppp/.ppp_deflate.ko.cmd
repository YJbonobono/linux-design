cmd_drivers/net/ppp/ppp_deflate.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/ppp/ppp_deflate.ko drivers/net/ppp/ppp_deflate.o drivers/net/ppp/ppp_deflate.mod.o;  true

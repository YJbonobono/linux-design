cmd_net/xfrm/xfrm_algo.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/xfrm/xfrm_algo.ko net/xfrm/xfrm_algo.o net/xfrm/xfrm_algo.mod.o;  true

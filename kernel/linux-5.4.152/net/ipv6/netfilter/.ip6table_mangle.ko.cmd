cmd_net/ipv6/netfilter/ip6table_mangle.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/ipv6/netfilter/ip6table_mangle.ko net/ipv6/netfilter/ip6table_mangle.o net/ipv6/netfilter/ip6table_mangle.mod.o;  true

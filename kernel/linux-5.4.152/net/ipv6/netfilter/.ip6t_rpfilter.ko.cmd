cmd_net/ipv6/netfilter/ip6t_rpfilter.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/ipv6/netfilter/ip6t_rpfilter.ko net/ipv6/netfilter/ip6t_rpfilter.o net/ipv6/netfilter/ip6t_rpfilter.mod.o;  true

cmd_net/netfilter/ipvs/ip_vs_pe_sip.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/netfilter/ipvs/ip_vs_pe_sip.ko net/netfilter/ipvs/ip_vs_pe_sip.o net/netfilter/ipvs/ip_vs_pe_sip.mod.o;  true

cmd_drivers/net/hyperv/hv_netvsc.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/net/hyperv/hv_netvsc.o drivers/net/hyperv/netvsc_drv.o drivers/net/hyperv/netvsc.o drivers/net/hyperv/rndis_filter.o drivers/net/hyperv/netvsc_trace.o

cmd_drivers/net/ethernet/qlogic/netxen/netxen_nic.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/ethernet/qlogic/netxen/netxen_nic.ko drivers/net/ethernet/qlogic/netxen/netxen_nic.o drivers/net/ethernet/qlogic/netxen/netxen_nic.mod.o;  true

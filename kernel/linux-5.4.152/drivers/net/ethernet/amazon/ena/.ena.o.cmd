cmd_drivers/net/ethernet/amazon/ena/ena.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/net/ethernet/amazon/ena/ena.o drivers/net/ethernet/amazon/ena/ena_netdev.o drivers/net/ethernet/amazon/ena/ena_com.o drivers/net/ethernet/amazon/ena/ena_eth_com.o drivers/net/ethernet/amazon/ena/ena_ethtool.o

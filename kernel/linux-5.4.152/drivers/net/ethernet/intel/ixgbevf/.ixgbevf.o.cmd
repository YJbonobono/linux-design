cmd_drivers/net/ethernet/intel/ixgbevf/ixgbevf.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/net/ethernet/intel/ixgbevf/ixgbevf.o drivers/net/ethernet/intel/ixgbevf/vf.o drivers/net/ethernet/intel/ixgbevf/mbx.o drivers/net/ethernet/intel/ixgbevf/ethtool.o drivers/net/ethernet/intel/ixgbevf/ixgbevf_main.o drivers/net/ethernet/intel/ixgbevf/ipsec.o

cmd_drivers/net/ethernet/mellanox/mlxsw/mlxsw_spectrum.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/ethernet/mellanox/mlxsw/mlxsw_spectrum.ko drivers/net/ethernet/mellanox/mlxsw/mlxsw_spectrum.o drivers/net/ethernet/mellanox/mlxsw/mlxsw_spectrum.mod.o;  true

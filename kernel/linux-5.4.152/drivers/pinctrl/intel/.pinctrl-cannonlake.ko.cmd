cmd_drivers/pinctrl/intel/pinctrl-cannonlake.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/pinctrl/intel/pinctrl-cannonlake.ko drivers/pinctrl/intel/pinctrl-cannonlake.o drivers/pinctrl/intel/pinctrl-cannonlake.mod.o;  true

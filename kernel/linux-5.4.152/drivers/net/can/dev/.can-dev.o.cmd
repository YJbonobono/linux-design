cmd_drivers/net/can/dev/can-dev.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/net/can/dev/can-dev.o drivers/net/can/dev/dev.o drivers/net/can/dev/rx-offload.o

cmd_drivers/nvme/target/nvme-loop.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/nvme/target/nvme-loop.o drivers/nvme/target/loop.o

cmd_drivers/infiniband/core/ib_umad.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/infiniband/core/ib_umad.ko drivers/infiniband/core/ib_umad.o drivers/infiniband/core/ib_umad.mod.o;  true

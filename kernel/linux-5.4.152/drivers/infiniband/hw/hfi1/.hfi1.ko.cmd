cmd_drivers/infiniband/hw/hfi1/hfi1.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/infiniband/hw/hfi1/hfi1.ko drivers/infiniband/hw/hfi1/hfi1.o drivers/infiniband/hw/hfi1/hfi1.mod.o;  true

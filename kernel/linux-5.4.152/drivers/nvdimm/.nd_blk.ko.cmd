cmd_drivers/nvdimm/nd_blk.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/nvdimm/nd_blk.ko drivers/nvdimm/nd_blk.o drivers/nvdimm/nd_blk.mod.o;  true

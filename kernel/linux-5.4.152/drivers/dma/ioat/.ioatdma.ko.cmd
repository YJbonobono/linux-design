cmd_drivers/dma/ioat/ioatdma.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/dma/ioat/ioatdma.ko drivers/dma/ioat/ioatdma.o drivers/dma/ioat/ioatdma.mod.o;  true

cmd_drivers/media/mc/mc.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/media/mc/mc.o drivers/media/mc/mc-device.o drivers/media/mc/mc-devnode.o drivers/media/mc/mc-entity.o drivers/media/mc/mc-request.o drivers/media/mc/mc-dev-allocator.o

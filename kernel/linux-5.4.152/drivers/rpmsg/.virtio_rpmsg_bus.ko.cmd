cmd_drivers/rpmsg/virtio_rpmsg_bus.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/rpmsg/virtio_rpmsg_bus.ko drivers/rpmsg/virtio_rpmsg_bus.o drivers/rpmsg/virtio_rpmsg_bus.mod.o;  true

cmd_drivers/gpu/drm/vgem/vgem.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/gpu/drm/vgem/vgem.o drivers/gpu/drm/vgem/vgem_drv.o drivers/gpu/drm/vgem/vgem_fence.o

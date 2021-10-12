#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x689f370d, "frame_vector_to_pages" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x52e96379, "vb2_destroy_framevec" },
	{ 0xdbe28db9, "dma_get_sgtable_attrs" },
	{ 0xf6a55bda, "dma_mmap_attrs" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xdd9b682e, "dma_buf_detach" },
	{ 0x6618707, "set_page_dirty_lock" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x1eb1bd3c, "dma_direct_sync_sg_for_cpu" },
	{ 0x87b8798d, "sg_next" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdc4d0092, "vb2_create_framevec" },
	{ 0x5d154a07, "dma_buf_vunmap" },
	{ 0xc5850110, "printk" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa94a09bb, "mem_section" },
	{ 0x4f075465, "dma_buf_unmap_attachment" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x712416e0, "dma_direct_map_resource" },
	{ 0x4f4ffc8, "dma_buf_map_attachment" },
	{ 0x6e9cda46, "dma_buf_export" },
	{ 0xfb0c6b14, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfcdc14d6, "frame_vector_to_pfns" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x3ff122ff, "dma_buf_attach" },
	{ 0x3750a460, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x12b94ab5, "vb2_common_vm_ops" },
	{ 0xec43c30e, "dma_direct_sync_sg_for_device" },
	{ 0xa14e96ba, "sg_alloc_table_from_pages" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xf3bfaedd, "dma_buf_vmap" },
	{ 0x83fd8b0f, "dma_ops" },
};

MODULE_INFO(depends, "videobuf2-memops");


MODULE_INFO(srcversion, "B3043D3E0EA139C8096318D");

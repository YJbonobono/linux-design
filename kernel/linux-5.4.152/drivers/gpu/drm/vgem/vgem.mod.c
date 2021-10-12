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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x440fd18, "drm_release" },
	{ 0x204dcb99, "drm_prime_gem_destroy" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x316d896, "drm_dev_register" },
	{ 0x4cc8dbe6, "drm_compat_ioctl" },
	{ 0x4c5d9020, "drm_gem_put_pages" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x411d4808, "dma_resv_test_signaled_rcu" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xf303156, "drm_gem_prime_import_dev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x29df1f0d, "platform_device_register_full" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x66130819, "drm_dev_fini" },
	{ 0x1d40b6f3, "idr_for_each" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd689c608, "drm_dev_put" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x31423ba3, "drm_dev_unregister" },
	{ 0x2db4e288, "drm_prime_pages_to_sg" },
	{ 0x16dee44d, "dma_fence_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a55da0b, "dma_resv_add_shared_fence" },
	{ 0x87ca1281, "drm_gem_handle_create" },
	{ 0xeb818c9d, "vmap" },
	{ 0xb770bfac, "drm_gem_object_put_unlocked" },
	{ 0x83726580, "shmem_read_mapping_page_gfp" },
	{ 0xcd6eae2f, "ww_mutex_lock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xde039a55, "drm_gem_object_release" },
	{ 0xdd8166a1, "dma_fence_free" },
	{ 0xc06abf4a, "drm_read" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xa164179, "fput" },
	{ 0xf3219852, "drm_gem_vm_open" },
	{ 0x129cf3a6, "drm_gem_vm_close" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x537d7129, "drm_gem_prime_fd_to_handle" },
	{ 0x7e79e64e, "drm_ioctl" },
	{ 0x106a0828, "drm_gem_mmap" },
	{ 0xc052b2b6, "drm_clflush_pages" },
	{ 0xa508c46e, "dma_resv_reserve_shared" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe677f7c5, "drm_dev_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa8cf10c1, "drm_gem_object_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x8a69ced4, "drm_gem_prime_handle_to_fd" },
	{ 0x7d570964, "drm_gem_object_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0xc2e6f7f4, "ww_mutex_unlock" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x34a4640a, "drm_dbg" },
	{ 0x494e3393, "vm_get_page_prot" },
	{ 0x900347a0, "drm_prime_sg_to_page_addr_arrays" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2e7782c2, "drm_gem_get_pages" },
	{ 0x19029c92, "dma_resv_add_excl_fence" },
	{ 0xde5bb39c, "drm_poll" },
	{ 0x52e0a149, "drm_open" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "drm");


MODULE_INFO(srcversion, "FECD1854B6D77A38D5FAB13");

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
	{ 0xe7750f8, "kobject_put" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xdd592615, "drm_vma_offset_remove" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x53b954a2, "up_read" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x2e786d0d, "drm_class_device_unregister" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x767ddb02, "set_memory_wc" },
	{ 0xcc328a5c, "reservation_ww_class" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x70a9708a, "vmf_insert_mixed" },
	{ 0x411d4808, "dma_resv_test_signaled_rcu" },
	{ 0x785a93b4, "si_mem_available" },
	{ 0x39c88378, "set_pages_array_uc" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xa0d3456d, "nr_swap_pages" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xb177d101, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xe93e49c3, "devres_free" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2aad1fd8, "kobject_del" },
	{ 0x16ac2597, "drm_printf" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xd0c7e96a, "set_pages_array_wc" },
	{ 0x8d9ca0e6, "dma_fence_enable_sw_signaling" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x8c06514e, "drm_vma_offset_lookup_locked" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xf20a3aa8, "devres_alloc_node" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xc87d5c7d, "set_page_dirty" },
	{ 0x356d7807, "dma_resv_copy_fences" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x5a33e063, "agp_unbind_memory" },
	{ 0xed458fcf, "agp_allocate_memory" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x7b982195, "drm_mm_init" },
	{ 0x89e4bb2, "dma_resv_wait_timeout_rcu" },
	{ 0x7ca0833d, "drm_vma_offset_manager_destroy" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9a55da0b, "dma_resv_add_shared_fence" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0xeb818c9d, "vmap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0x83726580, "shmem_read_mapping_page_gfp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xcd6eae2f, "ww_mutex_lock" },
	{ 0x925493f, "clear_page_orig" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa86f1787, "dma_resv_fini" },
	{ 0x731c4a9c, "dma_fence_signal" },
	{ 0x259fd1db, "agp_free_memory" },
	{ 0xa164179, "fput" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xee8ce717, "shmem_file_setup" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xaa3b63e6, "mark_page_accessed" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0xdcd75238, "__free_pages" },
	{ 0xeb7840a1, "kmem_cache_alloc_node_trace" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdc3bb303, "unregister_shrinker" },
	{ 0x33b84f74, "copy_page" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xe6a07ae9, "set_pages_array_wb" },
	{ 0xc052b2b6, "drm_clflush_pages" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0xa508c46e, "dma_resv_reserve_shared" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1000e51, "schedule" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x55c107cf, "drm_class_device_register" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x970fe5da, "set_pages_wb" },
	{ 0x6e0bbabe, "drm_mm_print" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x98c039dc, "dma_fence_wait_timeout" },
	{ 0x7835fd59, "devres_add" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x21c5c26, "drm_vma_offset_add" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x94961283, "vunmap" },
	{ 0x37e9b999, "unmap_mapping_range" },
	{ 0x981ffc7c, "register_shrinker" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xc2e6f7f4, "ww_mutex_unlock" },
	{ 0x1d12fd6e, "drm_mm_insert_node_in_range" },
	{ 0x42bf49b3, "devres_destroy" },
	{ 0xec606497, "set_pages_uc" },
	{ 0xc307a10c, "drm_mm_takedown" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x494e3393, "vm_get_page_prot" },
	{ 0xc74e259d, "dma_resv_init" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x220493ec, "vmalloc_to_page" },
	{ 0x28db880d, "dev_set_name" },
	{ 0xf0fadb05, "agp_bind_memory" },
	{ 0x10c62b61, "__drm_printfn_debug" },
	{ 0x2c287154, "drm_mm_remove_node" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc73cda3c, "drm_vma_offset_manager_init" },
	{ 0x19029c92, "dma_resv_add_excl_fence" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd09bc71f, "ww_mutex_lock_interruptible" },
	{ 0xdb18e0e8, "vmf_insert_pfn" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x71dc307b, "__put_page" },
	{ 0xe484e35f, "ioread32" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "drm");


MODULE_INFO(srcversion, "F55CAD383E12DB71F2B085A");

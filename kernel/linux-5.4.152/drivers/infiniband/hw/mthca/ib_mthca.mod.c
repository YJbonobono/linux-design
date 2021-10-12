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
	{ 0xcc445ceb, "__sg_page_iter_dma_next" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x46dbb2a8, "ib_set_device_ops" },
	{ 0x48415adb, "dma_direct_unmap_sg" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5b8b5058, "pcix_set_mmrbc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x4b270d61, "pci_free_irq_vectors" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x3cab7375, "ib_register_mad_agent" },
	{ 0x6e9b46ef, "pcie_set_readrq" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa99f49b7, "ib_free_send_mad" },
	{ 0x210ffb71, "ib_dealloc_device" },
	{ 0x7869d9a8, "rdma_destroy_ah_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xae956dce, "ib_rate_to_mult" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7a1884c2, "ib_query_port" },
	{ 0x925493f, "clear_page_orig" },
	{ 0x5792f848, "strlcpy" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x36f34884, "pcix_get_max_mmrbc" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9b99b1de, "ib_umem_get" },
	{ 0x6626afca, "down" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x745637ef, "ib_get_cached_pkey" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb7852a05, "ib_ud_header_init" },
	{ 0x2dfb449c, "ib_dispatch_event" },
	{ 0xb67ecb17, "ib_create_send_mad" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x8423fbea, "ib_post_send_mad" },
	{ 0x938e3ba4, "pci_find_capability" },
	{ 0x8e23dedf, "ib_unregister_mad_agent" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdcd75238, "__free_pages" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x225c6ef3, "ib_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4ce452a3, "ib_unregister_device" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x41e93b83, "rdma_create_ah" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7d3d2e42, "_ib_alloc_device" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xc702dbb2, "dma_direct_map_sg" },
	{ 0x1ed2b8a8, "remap_pfn_range" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xcf2a6966, "up" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x99b23286, "ib_modify_qp_is_ok" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe9e799fc, "ib_ud_header_pack" },
	{ 0xe7b52e5f, "mult_to_ib_rate" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdde949c7, "dma_pool_create" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x911c9e1e, "pcie_capability_write_word" },
	{ 0x516c8e72, "ib_umem_release" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x71dc307b, "__put_page" },
	{ 0x2c96b1b5, "get_user_pages_fast" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "ib_core,ib_uverbs");

MODULE_ALIAS("pci:v000015B3d00005A44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00005A44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006278sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00006278sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006282sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00006282sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006274sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00006274sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00005E8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00005E8Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C6F48CE31AE238CC519276A");

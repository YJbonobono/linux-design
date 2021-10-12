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
	{ 0x46dbb2a8, "ib_set_device_ops" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4b270d61, "pci_free_irq_vectors" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x40355fb5, "pci_get_slot" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x210ffb71, "ib_dealloc_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x7a1884c2, "ib_query_port" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9b99b1de, "ib_umem_get" },
	{ 0x4f5e81f6, "ib_device_set_netdev" },
	{ 0x6626afca, "down" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2dfb449c, "ib_dispatch_event" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x3a47447d, "ib_umem_page_count" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x225c6ef3, "ib_register_device" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x4ce452a3, "ib_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7d3d2e42, "_ib_alloc_device" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0x37a0cba, "kfree" },
	{ 0x8dfc4b74, "ib_sg_to_pages" },
	{ 0x1ed2b8a8, "remap_pfn_range" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xcf2a6966, "up" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x99b23286, "ib_modify_qp_is_ok" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x516c8e72, "ib_umem_release" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "ib_core,ib_uverbs");

MODULE_ALIAS("pci:v000015ADd00000820sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0618C1DAB4AF52BA9D41DCF");

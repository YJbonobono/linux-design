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
	{ 0x2d3385d3, "system_wq" },
	{ 0x46dbb2a8, "ib_set_device_ops" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdaeaa0a8, "ib_get_eth_speed" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xee25e17e, "__vlan_find_dev_deep_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0x997e5495, "pci_dev_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x210ffb71, "ib_dealloc_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9b99b1de, "ib_umem_get" },
	{ 0x4f5e81f6, "ib_device_set_netdev" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x1788200a, "dcb_ieee_getapp_mask" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6b958320, "ib_ud_ip4_csum" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb7852a05, "ib_ud_header_init" },
	{ 0xe70ff90d, "vlan_dev_real_dev" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0x2dfb449c, "ib_dispatch_event" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x3a47447d, "ib_umem_page_count" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x225c6ef3, "ib_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4ce452a3, "ib_unregister_device" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7d3d2e42, "_ib_alloc_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e7528da, "__rdma_block_iter_next" },
	{ 0x8dfc4b74, "ib_sg_to_pages" },
	{ 0x1ed2b8a8, "remap_pfn_range" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2faa098e, "ib_umem_find_best_pgsz" },
	{ 0xedc03953, "iounmap" },
	{ 0x99b23286, "ib_modify_qp_is_ok" },
	{ 0x96848186, "scnprintf" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe9e799fc, "ib_ud_header_pack" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x37033f9d, "rdma_read_gid_l2_fields" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x1b037462, "__rdma_block_iter_start" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x516c8e72, "ib_umem_release" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "ib_core,ib_uverbs");


MODULE_INFO(srcversion, "439D190CA94C1812AF8E8B8");

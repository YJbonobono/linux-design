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
	{ 0xf9a482f9, "msleep" },
	{ 0x7ce93bb, "ipv6_chk_addr" },
	{ 0x342ac131, "vlan_dev_vlan_id" },
	{ 0xb0704523, "dst_release" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xa2fa640f, "neigh_destroy" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x341037be, "qede_rdma_unregister_driver" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x745a981, "xa_erase" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x93b8bab5, "qed_get_rdma_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x210ffb71, "ib_dealloc_device" },
	{ 0x4ecee62a, "__neigh_event_send" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9b99b1de, "ib_umem_get" },
	{ 0x4f5e81f6, "ib_device_set_netdev" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x78381292, "init_net" },
	{ 0xfeb29b9a, "rdma_destroy_ah_attr" },
	{ 0xb7852a05, "ib_ud_header_init" },
	{ 0x2dfb449c, "ib_dispatch_event" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xe4ea2e03, "qede_rdma_register_driver" },
	{ 0x3a47447d, "ib_umem_page_count" },
	{ 0xa290dc85, "ip6_route_output_flags" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x225c6ef3, "ib_register_device" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4ce452a3, "ib_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7d3d2e42, "_ib_alloc_device" },
	{ 0x18ce08c, "ip_route_output_flow" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ed2b8a8, "remap_pfn_range" },
	{ 0x8dfc4b74, "ib_sg_to_pages" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0x99b23286, "ib_modify_qp_is_ok" },
	{ 0x44ea65da, "__ip_dev_find" },
	{ 0x96848186, "scnprintf" },
	{ 0xe9e799fc, "ib_ud_header_pack" },
	{ 0x37033f9d, "rdma_read_gid_l2_fields" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xabfd9390, "pci_enable_atomic_ops_to_root" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x516c8e72, "ib_umem_release" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7ee277a2, "rdma_copy_ah_attr" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "ib_core,qede,qed,ib_uverbs");


MODULE_INFO(srcversion, "0E8C4E5BDBD7B0B69CF2135");

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
	{ 0x46dbb2a8, "ib_set_device_ops" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2765edd5, "crypto_alloc_shash" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7ce93bb, "ipv6_chk_addr" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x7d0ba682, "gen_pool_virt_to_phys" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xb2405efc, "secure_tcp_seq" },
	{ 0x342ac131, "vlan_dev_vlan_id" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb0704523, "dst_release" },
	{ 0x2b593aa8, "gen_pool_alloc_algo_owner" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x35eaa2ea, "netdev_master_upper_dev_get" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x60ba97c, "gen_pool_free_owner" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb6fa89ba, "crypto_shash_final" },
	{ 0x999e8297, "vfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xa2fa640f, "neigh_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf4d03bfe, "in_dev_finish_destroy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x210ffb71, "ib_dealloc_device" },
	{ 0x4ecee62a, "__neigh_event_send" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xbefa51a3, "gen_pool_add_owner" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x78b45fc8, "crypto_shash_update" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7a1884c2, "ib_query_port" },
	{ 0x4fe1eddf, "unregister_netevent_notifier" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xc25ec48, "secure_tcpv6_seq" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9b99b1de, "ib_umem_get" },
	{ 0x4f5e81f6, "ib_device_set_netdev" },
	{ 0xf4f14de6, "rtnl_trylock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x78381292, "init_net" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe70ff90d, "vlan_dev_real_dev" },
	{ 0x2dfb449c, "ib_dispatch_event" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xa290dc85, "ip6_route_output_flags" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x225c6ef3, "ib_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1fbd16da, "ip_tos2prio" },
	{ 0x6c224cda, "gen_pool_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4ce452a3, "ib_unregister_device" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7d3d2e42, "_ib_alloc_device" },
	{ 0x18ce08c, "ip_route_output_flow" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e7528da, "__rdma_block_iter_next" },
	{ 0x8dfc4b74, "ib_sg_to_pages" },
	{ 0x1ed2b8a8, "remap_pfn_range" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2faa098e, "ib_umem_find_best_pgsz" },
	{ 0xde293f9e, "add_wait_queue_exclusive" },
	{ 0x44ea65da, "__ip_dev_find" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xced0f4d4, "gen_pool_create" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x220493ec, "vmalloc_to_page" },
	{ 0xb9fe97a7, "i40e_register_client" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4761f17c, "register_netevent_notifier" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1b037462, "__rdma_block_iter_start" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xf2b018a4, "i40e_unregister_client" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x516c8e72, "ib_umem_release" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "ib_core,ib_uverbs,i40e");


MODULE_INFO(srcversion, "A1ED7C0E8D6D73FB7699C27");

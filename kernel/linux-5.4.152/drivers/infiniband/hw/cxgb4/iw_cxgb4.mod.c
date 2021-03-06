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
	{ 0x1a68e2df, "cxgb4_clip_release" },
	{ 0x91e2da0f, "cxgb4_l2t_release" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x1ab6b47b, "rdma_nl_put_driver_u64" },
	{ 0x87a67f49, "single_open" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x7ce93bb, "ipv6_chk_addr" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x400315f0, "cxgb4_create_server6" },
	{ 0xa3b53740, "single_release" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb0704523, "dst_release" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x2b593aa8, "gen_pool_alloc_algo_owner" },
	{ 0xb177d101, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0xe058ebdf, "cxgb4_free_stid" },
	{ 0x60ba97c, "gen_pool_free_owner" },
	{ 0x8fa25c24, "xa_find" },
	{ 0x676a11a9, "cxgb4_unregister_uld" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x59515036, "cxgb4_dbfifo_count" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xa2fa640f, "neigh_destroy" },
	{ 0x7ac2674e, "cxgb4_port_chan" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xf4d03bfe, "in_dev_finish_destroy" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x7dcf4135, "__xa_insert" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x4c20034b, "cxgb4_alloc_sftid" },
	{ 0x210ffb71, "ib_dealloc_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xbefa51a3, "gen_pool_add_owner" },
	{ 0xcdb2874f, "cxgb4_alloc_atid" },
	{ 0x2a205d2f, "cxgb4_remove_tid" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x50f8643f, "tcp_parse_options" },
	{ 0x331a552a, "cxgb4_ofld_send" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x3a428fce, "rdma_nl_put_driver_u32_hex" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xcad28986, "cxgb4_create_server_filter" },
	{ 0xc34b242b, "default_llseek" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x646c332c, "debugfs_create_file_size" },
	{ 0xe738c3be, "cxgb4_alloc_stid" },
	{ 0x8dd16375, "cxgb4_read_tpte" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x255ab30f, "cxgb_get_4tuple" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xf2c09ce2, "cxgb4_l2t_send" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x7a1884c2, "ib_query_port" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9b99b1de, "ib_umem_get" },
	{ 0x4f5e81f6, "ib_device_set_netdev" },
	{ 0xda1af0a5, "cxgb_find_route6" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0xa4429626, "cxgb4_remove_server_filter" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x9b553753, "skb_pull" },
	{ 0x78381292, "init_net" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xd3807353, "cxgb4_free_atid" },
	{ 0x9bda2f63, "rdma_iw_cm_id" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe70ff90d, "vlan_dev_real_dev" },
	{ 0x4703ebb0, "cxgb4_select_ntuple" },
	{ 0x2dfb449c, "ib_dispatch_event" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x84e89e38, "cxgb4_sync_txq_pidx" },
	{ 0x2323112f, "cxgb_find_route" },
	{ 0x635e1df8, "cxgb4_clip_get" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x3ae503a3, "rdma_nl_put_driver_u32" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xf0063bf7, "rdma_res_to_id" },
	{ 0xfcdd657b, "cxgb4_remove_server" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x225c6ef3, "ib_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x1fbd16da, "ip_tos2prio" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6c224cda, "gen_pool_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4ce452a3, "ib_unregister_device" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x33f02ead, "cxgb4_register_uld" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7d3d2e42, "_ib_alloc_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x50ee5c07, "cxgb4_best_aligned_mtu" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ed2b8a8, "remap_pfn_range" },
	{ 0x8dfc4b74, "ib_sg_to_pages" },
	{ 0xb572917e, "cxgb4_flush_eq_cache" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd2384416, "rdma_nl_put_driver_u64_hex" },
	{ 0xd86c3c51, "cxgb4_get_tcp_stats" },
	{ 0xedc03953, "iounmap" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0x44ea65da, "__ip_dev_find" },
	{ 0xa38670f7, "cxgb4_port_idx" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xced0f4d4, "gen_pool_create" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x29ae9354, "cxgb4_pktgl_to_skb" },
	{ 0xa6bf4926, "cxgb4_bar2_sge_qregs" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x516c8e72, "ib_umem_release" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6af35031, "cxgb4_l2t_get" },
	{ 0x129372a7, "cxgb4_read_sge_timestamp" },
	{ 0x8b959c67, "cxgb4_create_server" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "ib_core,cxgb4,libcxgb,ib_uverbs,rdma_cm");


MODULE_INFO(srcversion, "5ED73366661F4EAC70BBBA6");

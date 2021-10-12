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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xf11f616d, "release_sock" },
	{ 0xc5920c58, "kmem_cache_destroy" },
	{ 0xcf4b0f2, "register_pernet_device" },
	{ 0xa029e88, "rds_trans_register" },
	{ 0xb8cc585b, "kernel_sendmsg" },
	{ 0x46e131aa, "sock_create_lite" },
	{ 0x7ce93bb, "ipv6_chk_addr" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0xd3e39f5d, "rds_conn_path_drop" },
	{ 0x64aff8b2, "sock_release" },
	{ 0xf2c3599c, "rds_inc_path_init" },
	{ 0x36087aa4, "rds_stats" },
	{ 0x49f30586, "rds_send_ping" },
	{ 0xc14c3f80, "rds_conn_create" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc8050216, "sock_create_kern" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf712936a, "rds_recv_incoming" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x4e908343, "kernel_setsockopt" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xb2a0fdb5, "rds_connect_path_complete" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xe56723fa, "pskb_extract" },
	{ 0xbc3a7fc8, "skb_copy_datagram_iter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4fa26b8f, "inet_addr_type" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0x3d117aa8, "unregister_pernet_device" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x2e4bdc67, "rds_info_register_func" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfcfce128, "rds_inc_put" },
	{ 0x85e4e520, "rds_stats_info_copy" },
	{ 0xc2dab779, "rds_info_copy" },
	{ 0xc3556e50, "kernel_sock_shutdown" },
	{ 0x49e981bf, "dev_get_by_index_rcu" },
	{ 0x3b84bc09, "rds_send_path_drop_acked" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x78381292, "init_net" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x41254788, "rds_conn_destroy" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xb8ce18a0, "kmem_cache_alloc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa467af, "rds_wq" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5274cc60, "kmem_cache_create" },
	{ 0x6b347276, "__module_get" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xfde2fedf, "rds_info_deregister_func" },
	{ 0xd157f8fe, "rds_trans_unregister" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd879ab8, "register_net_sysctl" },
	{ 0x45a4781e, "rds_addr_cmp" },
	{ 0x4b38b212, "rds_conn_path_connect_if_down" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x8d12095d, "tcp_read_sock" },
	{ 0x13c20ab6, "rds_send_path_reset" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xfd22dd56, "rds_cong_map_updated" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x200b2041, "in6addr_any" },
};

MODULE_INFO(depends, "rds");


MODULE_INFO(srcversion, "8D578509BD7720791C13F32");

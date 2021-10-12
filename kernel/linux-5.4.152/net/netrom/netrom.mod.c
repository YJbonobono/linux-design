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
	{ 0x77733870, "skb_queue_head" },
	{ 0xf11f616d, "release_sock" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb5fc8f7b, "sock_init_data" },
	{ 0xa41f47ba, "proc_create_seq_private" },
	{ 0x9099b9f0, "skb_append" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x5fb22c8e, "send_sig" },
	{ 0xb9422e23, "sk_stop_timer" },
	{ 0x6d008ed6, "sock_gettstamp" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd6af1248, "skb_clone" },
	{ 0x7028574e, "dev_get_by_name" },
	{ 0xb177d101, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x74a17a79, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd6de0d57, "ax25_linkfail_release" },
	{ 0x46dab489, "skb_recv_datagram" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa3de0625, "skb_set_owner_w" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xf6c38fa5, "ax25_register_pid" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x6833822f, "netif_rx" },
	{ 0xb09130b0, "sock_no_sendpage" },
	{ 0x7a688d36, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x8f64285e, "sock_efree" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0x80197bfb, "sk_alloc" },
	{ 0x6006847, "current_task" },
	{ 0xbc3a7fc8, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0x66aea581, "ax25_listen_release" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0x5a921311, "strncmp" },
	{ 0x581cf443, "skb_push" },
	{ 0x3bcbf347, "sk_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x242852b9, "ax25_uid_policy" },
	{ 0x24d273d1, "add_timer" },
	{ 0x9b553753, "skb_pull" },
	{ 0x78381292, "init_net" },
	{ 0xb64f81a0, "sock_no_shutdown" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbecfaee9, "skb_copy_expand" },
	{ 0x56954b59, "ax25_send_frame" },
	{ 0xec60789c, "proto_register" },
	{ 0x5ab123d, "sk_reset_timer" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x108ec659, "datagram_poll" },
	{ 0xc82d7720, "sock_register" },
	{ 0x1000e51, "schedule" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xb99540a6, "proto_unregister" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8b13c320, "sock_alloc_send_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x8ede9e26, "ax25_protocol_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x9a23cf48, "ax25_listen_register" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x14cecd59, "ax25_display_timer" },
	{ 0xc1444946, "ax25cmp" },
	{ 0xd879ab8, "register_net_sysctl" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xee02e420, "ax25_findbyuid" },
	{ 0x79c9b81, "ax25_linkfail_register" },
	{ 0x53dea1ff, "ax2asc" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe914e41e, "strcpy" },
	{ 0xaef989e6, "skb_free_datagram" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "ax25");


MODULE_INFO(srcversion, "75C6C5007148AA40D804213");

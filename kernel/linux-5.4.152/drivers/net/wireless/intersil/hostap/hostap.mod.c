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
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3fea57d8, "iw_handler_set_thrspy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0xa41f47ba, "proc_create_seq_private" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x92d3725, "proc_create_single_data" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xfbbb3727, "skb_copy" },
	{ 0x2593431c, "lib80211_crypt_delayed_deinit" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xb177d101, "seq_printf" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7769ac9c, "skb_realloc_headroom" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0x9bd1bf27, "proc_remove" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6833822f, "netif_rx" },
	{ 0x86d5e384, "wireless_spy_update" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xfd28534, "PDE_DATA" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0x524f0ed8, "proc_mkdir" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x1604b82c, "iw_handler_get_spy" },
	{ 0x30c76023, "free_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0x1208a414, "seq_putc" },
	{ 0x368e0297, "wireless_send_event" },
	{ 0x581cf443, "skb_push" },
	{ 0x5e121547, "dev_close" },
	{ 0x24d273d1, "add_timer" },
	{ 0x9b553753, "skb_pull" },
	{ 0x78381292, "init_net" },
	{ 0xf7419e8e, "dev_open" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x34aca9e0, "lib80211_get_crypto_ops" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xa916b694, "strnlen" },
	{ 0xa5c2eea9, "eth_header_cache_update" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x57dbcb92, "iw_handler_get_thrspy" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0x4297c00d, "proc_create_data" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x3fe0270d, "iw_handler_set_spy" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd23d0972, "eth_header_cache" },
	{ 0x6e724099, "param_array_ops" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xf346231f, "seq_list_start_head" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xb832485a, "consume_skb" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0x9b50799e, "eth_header" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "lib80211");


MODULE_INFO(srcversion, "969409F733A1E3F5E0F5B6F");

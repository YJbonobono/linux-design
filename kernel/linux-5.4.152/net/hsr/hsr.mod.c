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
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xef932dcc, "genl_register_family" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x87a67f49, "single_open" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7a189d11, "dev_disable_lro" },
	{ 0x68908fb2, "genl_unregister_family" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa3b53740, "single_release" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x828a5caf, "netdev_rx_handler_register" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xb177d101, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa5976e4f, "dev_base_lock" },
	{ 0x7d4f6161, "call_netdevice_notifiers" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xfbf6141a, "debugfs_rename" },
	{ 0x5932b0cc, "seq_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6833822f, "netif_rx" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x581cf443, "skb_push" },
	{ 0x49e981bf, "dev_get_by_index_rcu" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x29c46ab7, "netlink_unicast" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9b553753, "skb_pull" },
	{ 0x78381292, "init_net" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0x62b804bc, "__dev_get_by_index" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xbbdc19ba, "netlink_broadcast" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9dc5663c, "eth_header_parse" },
	{ 0xdf25c14, "netdev_rx_handler_unregister" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x241d32, "__pskb_copy_fclone" },
	{ 0x76382d49, "netdev_state_change" },
	{ 0xf45855f7, "netlink_ack" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x8cb12717, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x804e1930, "genlmsg_put" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xb0e602eb, "memmove" },
	{ 0x81303a34, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x9b50799e, "eth_header" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0x1425ab24, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EC9CCB4675B871649B2490E");

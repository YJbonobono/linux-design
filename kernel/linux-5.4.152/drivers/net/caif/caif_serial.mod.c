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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc5850110, "printk" },
	{ 0xdd9a0b52, "tty_register_ldisc" },
	{ 0x30c76023, "free_netdev" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0xf32c7033, "debugfs_create_x8" },
	{ 0xbfb9dc69, "debugfs_create_x32" },
	{ 0x88118632, "debugfs_create_blob" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0x5e121547, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xaebb54bc, "tty_kref_put" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0x9b553753, "skb_pull" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xef25e439, "tty_write_room" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xcdeed490, "netif_rx_ni" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BFCEFB65C094DF35ED144A3");

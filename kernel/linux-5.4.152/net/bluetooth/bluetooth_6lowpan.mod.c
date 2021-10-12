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
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x2457c6c2, "l2cap_chan_set_defaults" },
	{ 0x87a67f49, "single_open" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xa3b53740, "single_release" },
	{ 0xde57ab1b, "l2cap_chan_del" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xfd205417, "no_llseek" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xfbbb3727, "skb_copy" },
	{ 0x6a5d16e5, "lowpan_header_compress" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb177d101, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x78a73bb8, "l2cap_chan_send" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa2fa640f, "neigh_destroy" },
	{ 0x34367b10, "l2cap_add_psm" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x4ef18219, "l2cap_chan_close" },
	{ 0x718b8b7, "bt_info" },
	{ 0xa23e6cf8, "hci_get_route" },
	{ 0xcdeed490, "netif_rx_ni" },
	{ 0x7a5e1c4a, "l2cap_chan_put" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0x30c76023, "free_netdev" },
	{ 0xf239fce, "iov_iter_kvec" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5e121547, "dev_close" },
	{ 0x44548a37, "nd_tbl" },
	{ 0xfbfa3abe, "simple_attr_release" },
	{ 0xebb7a8a2, "debugfs_create_file_unsafe" },
	{ 0x9b553753, "skb_pull" },
	{ 0xd0f032e1, "debugfs_attr_read" },
	{ 0xf7419e8e, "dev_open" },
	{ 0x4f661f7f, "lowpan_header_decompress" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xbecfaee9, "skb_copy_expand" },
	{ 0x1b684a5b, "lowpan_unregister_netdev" },
	{ 0x276b9f34, "bt_debugfs" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbf399a0b, "l2cap_chan_connect" },
	{ 0x806f3ce7, "netdev_notify_peers" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1b4e2ba2, "lowpan_register_netdev" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x86a32523, "l2cap_chan_create" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb832485a, "consume_skb" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd2278d5b, "debugfs_attr_write" },
	{ 0x541745d, "simple_attr_open" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x64a5ffa3, "try_module_get" },
};

MODULE_INFO(depends, "bluetooth,6lowpan");


MODULE_INFO(srcversion, "4906B5E194EF9320F940059");

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
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0x4cd9d8cb, "wiphy_register" },
	{ 0x7d28b2c4, "wiphy_new_nm" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x17726e51, "wiphy_free" },
	{ 0x9e29c256, "wiphy_unregister" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x325c28d1, "netdev_upper_dev_unlink" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0xdf25c14, "netdev_rx_handler_unregister" },
	{ 0x6b347276, "__module_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa4068433, "netdev_upper_dev_link" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xea29a0bd, "netif_stacked_transfer_operstate" },
	{ 0x828a5caf, "netdev_rx_handler_register" },
	{ 0x62b804bc, "__dev_get_by_index" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xb832485a, "consume_skb" },
	{ 0xd6af1248, "skb_clone" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xd98972de, "cfg80211_disconnected" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x4288e22b, "cfg80211_connect_done" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x21b81078, "cfg80211_scan_done" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0xd2b341cf, "cfg80211_put_bss" },
	{ 0xc4464103, "cfg80211_inform_bss_data" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "EF0D7F67EDA7277C6E677F9");

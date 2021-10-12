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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x42acac50, "most_stop_channel" },
	{ 0x558b71d1, "most_deregister_configfs_subsys" },
	{ 0x6f9481d9, "most_register_component" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xd30d8266, "linkwatch_fire_event" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xda5cd86b, "most_put_mbo" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6833822f, "netif_rx" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2d8f96bf, "most_deregister_component" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x72180714, "most_submit_mbo" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xc78a4cef, "most_get_mbo" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe03f0cbd, "most_start_channel" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x4b66a255, "most_register_configfs_subsys" },
};

MODULE_INFO(depends, "most_core");


MODULE_INFO(srcversion, "AEA9D19A850076AEBCD665C");

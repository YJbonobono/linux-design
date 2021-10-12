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
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x463b9b0e, "dev_remove_pack" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa2c3efa3, "dev_add_pack" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x8b897fd6, "lapb_data_received" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xb832485a, "consume_skb" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0x30c76023, "free_netdev" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5e121547, "dev_close" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x78381292, "init_net" },
	{ 0x6833822f, "netif_rx" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x581cf443, "skb_push" },
	{ 0x762957a1, "lapb_register" },
	{ 0xdd4650f0, "lapb_unregister" },
	{ 0xc5850110, "printk" },
	{ 0xcc909f08, "lapb_connect_request" },
	{ 0xd2e0803f, "lapb_disconnect_request" },
	{ 0xe77e29f7, "lapb_data_request" },
	{ 0x9b553753, "skb_pull" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lapb");


MODULE_INFO(srcversion, "89DFA29934434B65E8982DB");

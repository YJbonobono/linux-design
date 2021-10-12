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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x68908fb2, "genl_unregister_family" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x29df1f0d, "platform_device_register_full" },
	{ 0xef932dcc, "genl_register_family" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xbbdc19ba, "netlink_broadcast" },
	{ 0x78381292, "init_net" },
	{ 0xcafc8f93, "genl_notify" },
	{ 0xa81af661, "ieee802154_register_hw" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x4817b006, "ieee802154_alloc_hw" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x29c46ab7, "netlink_unicast" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x804e1930, "genlmsg_put" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xeac25319, "ieee802154_free_hw" },
	{ 0x3d5d6c8, "ieee802154_unregister_hw" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x9dd70d96, "ieee802154_xmit_complete" },
	{ 0x7e21bbe, "ieee802154_rx_irqsafe" },
	{ 0x241d32, "__pskb_copy_fclone" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154");


MODULE_INFO(srcversion, "AF413882A2AB829A6E6952C");

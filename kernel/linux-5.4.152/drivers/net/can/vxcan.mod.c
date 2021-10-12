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
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x30c76023, "free_netdev" },
	{ 0x596c50d1, "__put_net" },
	{ 0x3959cd5b, "rtnl_configure_link" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x93645de7, "rtnl_create_link" },
	{ 0xd95ea9f9, "rtnl_link_get_net" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xe1e7e40c, "rtnl_nla_parse_ifla" },
	{ 0x56470118, "__warn_printk" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xcdeed490, "netif_rx_ni" },
	{ 0xb832485a, "consume_skb" },
	{ 0x8f64285e, "sock_efree" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A982670010C24160E06982B");

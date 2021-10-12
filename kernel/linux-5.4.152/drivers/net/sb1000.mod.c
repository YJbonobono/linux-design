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
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x718a59be, "pnp_unregister_driver" },
	{ 0x7e1bb40c, "pnp_register_driver" },
	{ 0x6833822f, "netif_rx" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x760a0f4f, "yield" },
	{ 0xe296672d, "register_netdev" },
	{ 0x555f812c, "pnp_device_detach" },
	{ 0xce8ba0ff, "pnp_disable_dev" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x85bd1608, "__request_region" },
	{ 0xcc4bab63, "pnp_get_resource" },
	{ 0xdd177627, "pnp_activate_dev" },
	{ 0x73d532e5, "pnp_device_attach" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb832485a, "consume_skb" },
	{ 0xc5850110, "printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x30c76023, "free_netdev" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pnp:dGIC1000*");
MODULE_ALIAS("acpi*:GIC1000:*");

MODULE_INFO(srcversion, "8DCBD3E6FA18B9277BE2E85");

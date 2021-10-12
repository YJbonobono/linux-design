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
	{ 0xc5850110, "printk" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0xbed50661, "blackhole_netdev" },
	{ 0x38a9f7c5, "in6addr_loopback" },
	{ 0x581cf443, "skb_push" },
	{ 0xac8173c9, "__alloc_skb" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B36C41C8F871ED7A9377642");

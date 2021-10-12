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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x66d230ae, "param_ops_string" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x30c76023, "free_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe296672d, "register_netdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xecb730b0, "arcnet_interrupt" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xc5850110, "printk" },
	{ 0xa1f7642a, "alloc_arcdev" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xedc03953, "iounmap" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x6534792a, "arcnet_debug" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "arcnet");


MODULE_INFO(srcversion, "3E95091C6F906EA3D508919");

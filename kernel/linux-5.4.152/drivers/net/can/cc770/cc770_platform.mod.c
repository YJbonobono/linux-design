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
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xb96deb49, "register_cc770dev" },
	{ 0x76001404, "alloc_cc770dev" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xbfd54aee, "free_cc770dev" },
	{ 0xedc03953, "iounmap" },
	{ 0x5c21ce6b, "unregister_cc770dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cc770");

MODULE_ALIAS("of:N*T*Cbosch,cc770");
MODULE_ALIAS("of:N*T*Cbosch,cc770C*");
MODULE_ALIAS("of:N*T*Cintc,82527");
MODULE_ALIAS("of:N*T*Cintc,82527C*");

MODULE_INFO(srcversion, "D2A36546CCD392314DB1774");

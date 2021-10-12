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
	{ 0xe7a568ab, "ad7606_pm_ops" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x408df29c, "ad7606_probe" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x49951708, "sev_enable_key" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ad7606");

MODULE_ALIAS("of:N*T*Cadi,ad7605-4");
MODULE_ALIAS("of:N*T*Cadi,ad7605-4C*");
MODULE_ALIAS("of:N*T*Cadi,ad7606-4");
MODULE_ALIAS("of:N*T*Cadi,ad7606-4C*");
MODULE_ALIAS("of:N*T*Cadi,ad7606-6");
MODULE_ALIAS("of:N*T*Cadi,ad7606-6C*");
MODULE_ALIAS("of:N*T*Cadi,ad7606-8");
MODULE_ALIAS("of:N*T*Cadi,ad7606-8C*");
MODULE_ALIAS("platform:ad7605-4");
MODULE_ALIAS("platform:ad7606-4");
MODULE_ALIAS("platform:ad7606-6");
MODULE_ALIAS("platform:ad7606-8");

MODULE_INFO(srcversion, "DF2D3BB857B523EAFBA85F2");

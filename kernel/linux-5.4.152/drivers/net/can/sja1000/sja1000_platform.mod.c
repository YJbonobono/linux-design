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
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xfbd14f15, "register_sja1000dev" },
	{ 0x4fb897b3, "alloc_sja1000dev" },
	{ 0xd97e4b96, "devm_ioremap_nocache" },
	{ 0x89d68935, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xbb46f0fd, "free_sja1000dev" },
	{ 0x1767383e, "unregister_sja1000dev" },
	{ 0xc5534d64, "ioread16" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sja1000");

MODULE_ALIAS("of:N*T*Cnxp,sja1000");
MODULE_ALIAS("of:N*T*Cnxp,sja1000C*");
MODULE_ALIAS("of:N*T*Ctechnologic,sja1000");
MODULE_ALIAS("of:N*T*Ctechnologic,sja1000C*");

MODULE_INFO(srcversion, "4EA74E24629C92CF2A90A3F");

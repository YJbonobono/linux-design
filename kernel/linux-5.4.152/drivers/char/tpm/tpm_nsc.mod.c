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
	{ 0x2b3da341, "tpm_pm_resume" },
	{ 0x7c53209d, "tpm_pm_suspend" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xe6852960, "platform_device_put" },
	{ 0xb1d86bc1, "platform_device_del" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x146b7fc7, "tpm_chip_register" },
	{ 0xe40d3439, "tpmm_chip_alloc" },
	{ 0x85bd1608, "__request_region" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xaa37bd45, "tpm_chip_unregister" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DC791D72D02D62E381709C6");

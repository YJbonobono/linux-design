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
	{ 0xa949d817, "__platform_driver_probe" },
	{ 0xcf0c733, "devm_rtc_device_register" },
	{ 0x9d4d4772, "devm_ioremap" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "14A81656A39E2D7EAF5F464");

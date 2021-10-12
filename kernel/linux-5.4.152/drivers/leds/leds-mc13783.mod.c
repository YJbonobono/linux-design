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
	{ 0xa050ddb, "led_classdev_register_ext" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8aa59303, "mc13xxx_reg_write" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf943e9be, "mc13xxx_reg_rmw" },
	{ 0xd0e4e11b, "led_classdev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc13xxx-core");

MODULE_ALIAS("platform:mc13783-led");
MODULE_ALIAS("platform:mc13892-led");
MODULE_ALIAS("platform:mc34708-led");

MODULE_INFO(srcversion, "93B3D6CE45A959EBA661ED1");

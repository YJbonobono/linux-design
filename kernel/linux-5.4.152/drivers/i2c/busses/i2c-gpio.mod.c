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
	{ 0xc5850110, "printk" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x9ef2743f, "desc_to_gpio" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7c981677, "i2c_bit_add_numbered_bus" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8df9e738, "gpiod_cansleep" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xbef23ff4, "devm_gpiod_get_index" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0x1b45043a, "gpiod_get_value_cansleep" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-algo-bit");


MODULE_INFO(srcversion, "362BC45DFBB052825D1034C");

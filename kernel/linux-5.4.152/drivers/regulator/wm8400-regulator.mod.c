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
	{ 0xde235e38, "regulator_set_voltage_sel_regmap" },
	{ 0x81bcb098, "regulator_map_voltage_linear" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0xfbb7a3a6, "rdev_get_regmap" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xc8718098, "regulator_get_voltage_sel_regmap" },
	{ 0x5d14cd7, "regulator_map_voltage_linear_range" },
	{ 0x36a86a0d, "regulator_list_voltage_linear_range" },
	{ 0xe48bb274, "regulator_list_voltage_linear" },
	{ 0x3a2d2600, "regulator_disable_regmap" },
	{ 0xff58e72a, "rdev_get_id" },
	{ 0xd3fda225, "regulator_enable_regmap" },
	{ 0x9570732b, "platform_device_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf1efcfb8, "regulator_is_enabled_regmap" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xfeec5a57, "devm_regulator_register" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8032FB0BF273F20A2EABFE1");

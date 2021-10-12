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
	{ 0x81bcb098, "regulator_map_voltage_linear" },
	{ 0xe48bb274, "regulator_list_voltage_linear" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x65190b88, "gpiod_get_raw_value" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0xb1879108, "max8998_write_reg" },
	{ 0x9d10da1c, "gpiod_direction_output_raw" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xddbcebc, "max8998_update_reg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x855ab009, "max8998_read_reg" },
	{ 0xff58e72a, "rdev_get_id" },
	{ 0x63202f01, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:max8998-pmic");
MODULE_ALIAS("platform:lp3974-pmic");

MODULE_INFO(srcversion, "11D1E03B7147ED900524D52");

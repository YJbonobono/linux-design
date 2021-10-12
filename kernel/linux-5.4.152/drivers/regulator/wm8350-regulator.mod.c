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
	{ 0xc35e0472, "wm8350_reg_write" },
	{ 0xde235e38, "regulator_set_voltage_sel_regmap" },
	{ 0x81bcb098, "regulator_map_voltage_linear" },
	{ 0x11fac205, "regulator_lock" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xc8718098, "regulator_get_voltage_sel_regmap" },
	{ 0xaf53d7cf, "wm8350_set_bits" },
	{ 0x9982465d, "wm8350_clear_bits" },
	{ 0xf19b7ba9, "regulator_notifier_call_chain" },
	{ 0x5d14cd7, "regulator_map_voltage_linear_range" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x36a86a0d, "regulator_list_voltage_linear_range" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe48bb274, "regulator_list_voltage_linear" },
	{ 0x63202f01, "rdev_get_drvdata" },
	{ 0x3a2d2600, "regulator_disable_regmap" },
	{ 0xff58e72a, "rdev_get_id" },
	{ 0xd3fda225, "regulator_enable_regmap" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcbb3ceaf, "regulator_get_current_limit_regmap" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf1efcfb8, "regulator_is_enabled_regmap" },
	{ 0xbb77c6ef, "regulator_set_current_limit_regmap" },
	{ 0x6cb185f1, "regulator_unlock" },
	{ 0xb535c067, "wm8350_reg_read" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe6852960, "platform_device_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A0E3C484EA7E0115EC1B17E");

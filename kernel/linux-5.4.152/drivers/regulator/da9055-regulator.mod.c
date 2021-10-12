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
	{ 0xcbb3ceaf, "regulator_get_current_limit_regmap" },
	{ 0xbb77c6ef, "regulator_set_current_limit_regmap" },
	{ 0xf1efcfb8, "regulator_is_enabled_regmap" },
	{ 0x3a2d2600, "regulator_disable_regmap" },
	{ 0xd3fda225, "regulator_enable_regmap" },
	{ 0xe48bb274, "regulator_list_voltage_linear" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xfb44fe01, "platform_get_irq_byname" },
	{ 0x8a361363, "devm_gpio_request_one" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x81bcb098, "regulator_map_voltage_linear" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x63202f01, "rdev_get_drvdata" },
	{ 0x6cb185f1, "regulator_unlock" },
	{ 0xf19b7ba9, "regulator_notifier_call_chain" },
	{ 0x11fac205, "regulator_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D95DA2472B9CBC9D70494AB");

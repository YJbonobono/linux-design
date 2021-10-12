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
	{ 0xc7384e2b, "regulator_get_bypass_regmap" },
	{ 0xe31c087, "regulator_set_bypass_regmap" },
	{ 0x36a86a0d, "regulator_list_voltage_linear_range" },
	{ 0xf1efcfb8, "regulator_is_enabled_regmap" },
	{ 0x3a2d2600, "regulator_disable_regmap" },
	{ 0xd3fda225, "regulator_enable_regmap" },
	{ 0xc8718098, "regulator_get_voltage_sel_regmap" },
	{ 0xde235e38, "regulator_set_voltage_sel_regmap" },
	{ 0xe48bb274, "regulator_list_voltage_linear" },
	{ 0x1a9f6087, "platform_unregister_drivers" },
	{ 0x3c1c3d30, "__platform_register_drivers" },
	{ 0x56310925, "regulator_mode_to_status" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x6d109050, "irq_create_mapping_affinity" },
	{ 0xfb44fe01, "platform_get_irq_byname" },
	{ 0x5d14cd7, "regulator_map_voltage_linear_range" },
	{ 0x6cb185f1, "regulator_unlock" },
	{ 0xf19b7ba9, "regulator_notifier_call_chain" },
	{ 0x11fac205, "regulator_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x3cb699f2, "wm831x_reg_read" },
	{ 0xff58e72a, "rdev_get_id" },
	{ 0x3acfceab, "wm831x_set_bits" },
	{ 0x81bcb098, "regulator_map_voltage_linear" },
	{ 0x63202f01, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "77AE852BB2E5B769662A8C8");

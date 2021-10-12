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
	{ 0xf1efcfb8, "regulator_is_enabled_regmap" },
	{ 0xc8718098, "regulator_get_voltage_sel_regmap" },
	{ 0xde235e38, "regulator_set_voltage_sel_regmap" },
	{ 0x5d14cd7, "regulator_map_voltage_linear_range" },
	{ 0x36a86a0d, "regulator_list_voltage_linear_range" },
	{ 0x1a9f6087, "platform_unregister_drivers" },
	{ 0x3c1c3d30, "__platform_register_drivers" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4f207f00, "snd_soc_component_force_enable_pin" },
	{ 0x982ab40d, "snd_soc_dapm_sync" },
	{ 0xec0b434, "snd_soc_component_disable_pin" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xd3fda225, "regulator_enable_regmap" },
	{ 0x3a2d2600, "regulator_disable_regmap" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe31c087, "regulator_set_bypass_regmap" },
	{ 0x63202f01, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "76A5C5B621FCA409518FAA5");

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
	{ 0xc8718098, "regulator_get_voltage_sel_regmap" },
	{ 0xde235e38, "regulator_set_voltage_sel_regmap" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0x5b9ce59c, "tps80031_ext_power_req_config" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x57d3b403, "regulator_map_voltage_iterate" },
	{ 0x81bcb098, "regulator_map_voltage_linear" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe48bb274, "regulator_list_voltage_linear" },
	{ 0x5b9c0cfa, "rdev_get_dev" },
	{ 0x63202f01, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D0171A4BC5419A5B6ABFE0B");

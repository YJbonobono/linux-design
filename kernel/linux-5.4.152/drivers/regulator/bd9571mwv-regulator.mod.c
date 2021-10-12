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
	{ 0x81bcb098, "regulator_map_voltage_linear" },
	{ 0xe48bb274, "regulator_list_voltage_linear" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7e83fb8, "device_remove_file" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:bd9571mwv-regulator");

MODULE_INFO(srcversion, "0D54D3760F2FED401A88DA3");

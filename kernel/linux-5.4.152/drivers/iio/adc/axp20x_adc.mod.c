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
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0xa4b53f23, "iio_map_array_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x456150cf, "iio_map_array_unregister" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("platform:axp20x-adc");
MODULE_ALIAS("platform:axp22x-adc");
MODULE_ALIAS("platform:axp813-adc");
MODULE_ALIAS("of:N*T*Cx-powers,axp209-adc");
MODULE_ALIAS("of:N*T*Cx-powers,axp209-adcC*");
MODULE_ALIAS("of:N*T*Cx-powers,axp221-adc");
MODULE_ALIAS("of:N*T*Cx-powers,axp221-adcC*");
MODULE_ALIAS("of:N*T*Cx-powers,axp813-adc");
MODULE_ALIAS("of:N*T*Cx-powers,axp813-adcC*");

MODULE_INFO(srcversion, "D4B3A7D617634E6E3EABC59");

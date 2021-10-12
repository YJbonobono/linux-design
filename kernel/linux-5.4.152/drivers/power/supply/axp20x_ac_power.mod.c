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
	{ 0xa5056eb6, "iio_read_channel_processed" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cx-powers,axp202-ac-power-supply");
MODULE_ALIAS("of:N*T*Cx-powers,axp202-ac-power-supplyC*");
MODULE_ALIAS("of:N*T*Cx-powers,axp221-ac-power-supply");
MODULE_ALIAS("of:N*T*Cx-powers,axp221-ac-power-supplyC*");
MODULE_ALIAS("of:N*T*Cx-powers,axp813-ac-power-supply");
MODULE_ALIAS("of:N*T*Cx-powers,axp813-ac-power-supplyC*");

MODULE_INFO(srcversion, "063C50D42C4ACE2774FBDE3");

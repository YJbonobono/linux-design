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
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4824868, "devm_request_any_context_irq" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0xda013ad6, "devm_power_supply_register" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd72694ff, "gpiod_get_value" },
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Clltc,ltc3651-charger");
MODULE_ALIAS("of:N*T*Clltc,ltc3651-chargerC*");
MODULE_ALIAS("of:N*T*Clltc,lt3651-charger");
MODULE_ALIAS("of:N*T*Clltc,lt3651-chargerC*");

MODULE_INFO(srcversion, "ED14D59507C54D52A4F6B10");

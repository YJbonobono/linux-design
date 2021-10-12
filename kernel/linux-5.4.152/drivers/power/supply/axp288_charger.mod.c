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
	{ 0xb1ff0942, "extcon_get_state" },
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0x9ecd6d1, "devm_extcon_register_notifier" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x19c278b5, "devm_extcon_register_notifier_all" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xda013ad6, "devm_power_supply_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0xefb11847, "extcon_get_extcon_dev" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:axp288_charger");

MODULE_INFO(srcversion, "601EBEC508C6783F21EF5B0");

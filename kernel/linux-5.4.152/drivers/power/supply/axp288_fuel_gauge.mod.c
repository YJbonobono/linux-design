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
	{ 0xa3b53740, "single_release" },
	{ 0x5932b0cc, "seq_read" },
	{ 0xcdaf7988, "seq_lseek" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe34a98e1, "iio_read_channel_raw" },
	{ 0xb177d101, "seq_printf" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0xd27dba6b, "power_supply_register" },
	{ 0x3b947043, "iio_channel_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x87a67f49, "single_open" },
	{ 0xe0fd101b, "power_supply_changed" },
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0x7cca1b34, "iio_channel_release" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0xf36f30f5, "power_supply_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("platform:axp288_fuel_gauge");

MODULE_INFO(srcversion, "27D5E7939E825C77635221D");

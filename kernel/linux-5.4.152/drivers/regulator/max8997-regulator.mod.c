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
	{ 0x7ee11208, "regulator_list_voltage_table" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0x3f827a7d, "max8997_write_reg" },
	{ 0x9d10da1c, "gpiod_direction_output_raw" },
	{ 0x1d864272, "devm_gpio_request" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xe0adf954, "max8997_read_reg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcc03315e, "max8997_update_reg" },
	{ 0x63202f01, "rdev_get_drvdata" },
	{ 0xff58e72a, "rdev_get_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:max8997-pmic");

MODULE_INFO(srcversion, "C17009E626B4BA3C8A93832");

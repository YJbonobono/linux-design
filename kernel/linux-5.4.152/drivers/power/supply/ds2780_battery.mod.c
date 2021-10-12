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
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x6297fead, "w1_ds2780_eeprom_cmd" },
	{ 0xda013ad6, "devm_power_supply_register" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x984b5a23, "w1_ds2780_io" },
	{ 0x85665f95, "power_supply_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "w1_ds2780");


MODULE_INFO(srcversion, "31D1A3F9B6B3679D5CAAF64");

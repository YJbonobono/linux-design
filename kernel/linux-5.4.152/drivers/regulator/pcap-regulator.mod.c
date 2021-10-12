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
	{ 0xfeec5a57, "devm_regulator_register" },
	{ 0x1866a57, "ezx_pcap_set_bits" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf31632e0, "ezx_pcap_read" },
	{ 0x63202f01, "rdev_get_drvdata" },
	{ 0xff58e72a, "rdev_get_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DD0675605BD1E4536600BAA");

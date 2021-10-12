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
	{ 0x60c2ccfe, "device_set_wakeup_capable" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xcf0c733, "devm_rtc_device_register" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x5b7de35e, "rtc_update_irq" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7775d5ed, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6721C890B4D18C672C51936");

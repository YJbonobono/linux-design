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
	{ 0xb1879108, "max8998_write_reg" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x6d109050, "irq_create_mapping_affinity" },
	{ 0xcf0c733, "devm_rtc_device_register" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x855ab009, "max8998_read_reg" },
	{ 0x112ed4be, "max8998_bulk_read" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd1ff2139, "max8998_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x5b7de35e, "rtc_update_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:max8998-rtc");
MODULE_ALIAS("platform:lp3974-rtc");

MODULE_INFO(srcversion, "DDF1972AD8B2C1E4A318DD4");

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
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xfb44fe01, "platform_get_irq_byname" },
	{ 0xcf0c733, "devm_rtc_device_register" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x5b7de35e, "rtc_update_irq" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xebe81e66, "regmap_raw_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E3738684CEDDAB913C63086");

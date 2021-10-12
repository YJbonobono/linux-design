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
	{ 0x2fb6de5d, "add_device_randomness" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x57685f1f, "__rtc_register_device" },
	{ 0xaedff678, "devm_rtc_allocate_device" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x6d109050, "irq_create_mapping_affinity" },
	{ 0xfb44fe01, "platform_get_irq_byname" },
	{ 0xf9a482f9, "msleep" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3cb699f2, "wm831x_reg_read" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xdecb6a17, "wm831x_bulk_read" },
	{ 0xac81ce1a, "wm831x_reg_write" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5b7de35e, "rtc_update_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x3acfceab, "wm831x_set_bits" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C8AAC81B7025E90E6FFC150");

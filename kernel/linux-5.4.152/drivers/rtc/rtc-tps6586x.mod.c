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
	{ 0x57685f1f, "__rtc_register_device" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0xaedff678, "devm_rtc_allocate_device" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x5e79c2ec, "tps6586x_set_bits" },
	{ 0xb3905e4f, "tps6586x_clr_bits" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x28b9f774, "tps6586x_writes" },
	{ 0xc6bb38fd, "tps6586x_reads" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x5b7de35e, "rtc_update_irq" },
	{ 0x3832480b, "tps6586x_update" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4BB7F2551FCF49B0A210117");

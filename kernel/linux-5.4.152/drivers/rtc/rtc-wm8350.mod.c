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
	{ 0xa5868a47, "wm8350_reg_lock" },
	{ 0xf20b396d, "wm8350_reg_unlock" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcf0c733, "devm_rtc_device_register" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0x4859b8bb, "rtc_year_days" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x9982465d, "wm8350_clear_bits" },
	{ 0x4b211f55, "wm8350_block_write" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xb535c067, "wm8350_reg_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa8d653b6, "wm8350_block_read" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xaf53d7cf, "wm8350_set_bits" },
	{ 0x5b7de35e, "rtc_update_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F9964C85466B18381E654B7");

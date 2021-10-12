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
	{ 0x12ebb3e3, "max8925_reg_read" },
	{ 0x2720641f, "max8925_bulk_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb996e4ba, "max8925_reg_write" },
	{ 0xcd24ccec, "max8925_bulk_write" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcf0c733, "devm_rtc_device_register" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x5b7de35e, "rtc_update_irq" },
	{ 0x9b259df1, "max8925_set_bits" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DBA939176AAC29CFC604B48");

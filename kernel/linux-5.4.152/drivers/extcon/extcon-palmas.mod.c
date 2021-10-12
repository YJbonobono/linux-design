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
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x60c2ccfe, "device_set_wakeup_capable" },
	{ 0x6a07d4da, "devm_extcon_dev_register" },
	{ 0xb98b11e7, "devm_extcon_dev_allocate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x87e5e4e2, "gpiod_set_debounce" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x1b45043a, "gpiod_get_value_cansleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xa6acd45d, "extcon_set_state_sync" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,palmas-usb");
MODULE_ALIAS("of:N*T*Cti,palmas-usbC*");
MODULE_ALIAS("of:N*T*Cti,palmas-usb-vid");
MODULE_ALIAS("of:N*T*Cti,palmas-usb-vidC*");
MODULE_ALIAS("of:N*T*Cti,twl6035-usb");
MODULE_ALIAS("of:N*T*Cti,twl6035-usbC*");
MODULE_ALIAS("of:N*T*Cti,twl6035-usb-vid");
MODULE_ALIAS("of:N*T*Cti,twl6035-usb-vidC*");

MODULE_INFO(srcversion, "9B81AD7E289DB14A7E35267");

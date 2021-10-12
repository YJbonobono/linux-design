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
	{ 0x9c50cfce, "usb_gadget_vbus_connect" },
	{ 0xff47930e, "usb_phy_set_event" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0x5aab6723, "usb_gadget_vbus_disconnect" },
	{ 0x65190b88, "gpiod_get_raw_value" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0x9d10da1c, "gpiod_direction_output_raw" },
	{ 0x1cb8f314, "usb_add_phy" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xe426aec8, "gpiod_direction_input" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x1d864272, "devm_gpio_request" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0xa1a8647d, "regulator_set_current_limit" },
	{ 0xe6dfb004, "usb_remove_phy" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "0B79E3D1AC6DE76818CCD10");

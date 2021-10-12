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
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xde7e0663, "pm_wakeup_dev_event" },
	{ 0xf8c679e2, "input_event" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfb44fe01, "platform_get_irq_byname" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "855BAA1E598236A45600F29");

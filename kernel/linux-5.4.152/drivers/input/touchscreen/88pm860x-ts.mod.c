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
	{ 0x4ce68b52, "input_register_device" },
	{ 0x49df2111, "input_set_abs_params" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x74236285, "pm860x_reg_write" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xf8c679e2, "input_event" },
	{ 0xcb8954aa, "pm860x_bulk_read" },
	{ 0xc8cf93c, "pm860x_set_bits" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "60B686924D2D48E9C04A6A8");

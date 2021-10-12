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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xe6dfb004, "usb_remove_phy" },
	{ 0x815588a6, "clk_enable" },
	{ 0xaa7413e8, "gpiod_direction_output" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x29df1f0d, "platform_device_register_full" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xd3752c27, "atomic_notifier_call_chain" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x8a361363, "devm_gpio_request_one" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xd72694ff, "gpiod_get_value" },
	{ 0x77bb7c11, "usb_add_phy_dev" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0xa1a8647d, "regulator_set_current_limit" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xc0877d2b, "regulator_enable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cusb-nop-xceiv");
MODULE_ALIAS("of:N*T*Cusb-nop-xceivC*");

MODULE_INFO(srcversion, "B2F8D1F5892531D914EB60E");

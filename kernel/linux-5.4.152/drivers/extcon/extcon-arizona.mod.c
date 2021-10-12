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
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf36d80ec, "device_property_present" },
	{ 0xedb4b219, "device_property_read_u32_array" },
	{ 0xa80a6d9b, "gpiod_get_optional" },
	{ 0x4ce68b52, "input_register_device" },
	{ 0x6ed7f5ae, "arizona_clk32k_enable" },
	{ 0x8c72a999, "arizona_request_irq" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x281d1f24, "input_set_capability" },
	{ 0x8a361363, "devm_gpio_request_one" },
	{ 0xda9d1e18, "devm_input_allocate_device" },
	{ 0x6a07d4da, "devm_extcon_dev_register" },
	{ 0xb98b11e7, "devm_extcon_dev_allocate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf8c679e2, "input_event" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xb1ff0942, "extcon_get_state" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x1f9ca8d1, "regulator_allow_bypass" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0xec0b434, "snd_soc_component_disable_pin" },
	{ 0x982ab40d, "snd_soc_dapm_sync" },
	{ 0x4f207f00, "snd_soc_component_force_enable_pin" },
	{ 0x7e838fed, "gpiod_set_raw_value_cansleep" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0xa6acd45d, "extcon_set_state_sync" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x8bb8c57b, "gpiod_put" },
	{ 0xebef0be4, "arizona_clk32k_disable" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xf504a567, "arizona_free_irq" },
	{ 0x9f95bc58, "arizona_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-soc-core");


MODULE_INFO(srcversion, "7AD273074A784518FC5DD63");

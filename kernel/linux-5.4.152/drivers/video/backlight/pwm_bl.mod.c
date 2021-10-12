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
	{ 0xc2c6b78c, "pwm_request" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x8a361363, "devm_gpio_request_one" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xaa7413e8, "gpiod_direction_output" },
	{ 0xfc2497e3, "regulator_is_enabled" },
	{ 0x1b45043a, "gpiod_get_value_cansleep" },
	{ 0x388c8f33, "backlight_device_register" },
	{ 0x2e160fd2, "devm_pwm_get" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0xa156a6d8, "pwm_free" },
	{ 0x92d02b1d, "backlight_device_unregister" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xb2faa7c2, "pwm_apply_state" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ABD342FDD378D90459A8B0C");

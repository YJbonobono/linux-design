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
	{ 0x29361773, "complete" },
	{ 0xd72694ff, "gpiod_get_value" },
	{ 0x9ef2743f, "desc_to_gpio" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa9cff0a9, "gpiod_to_irq" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x917490b, "wait_for_completion_killable_timeout" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xe426aec8, "gpiod_direction_input" },
	{ 0x12a38747, "usleep_range" },
	{ 0xaa7413e8, "gpiod_direction_output" },
	{ 0xfe476039, "ktime_get_resolution_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cdht11");
MODULE_ALIAS("of:N*T*Cdht11C*");

MODULE_INFO(srcversion, "9A869538A82E3EF19567146");

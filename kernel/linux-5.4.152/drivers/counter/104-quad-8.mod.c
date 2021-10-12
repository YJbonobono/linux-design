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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x5afa1383, "iio_enum_available_read" },
	{ 0x2178290e, "iio_enum_write" },
	{ 0x31aad9b7, "iio_enum_read" },
	{ 0xee526d0f, "counter_count_mode_str" },
	{ 0x5bdaa886, "counter_signal_enum_available_read" },
	{ 0x488b555d, "counter_signal_enum_write" },
	{ 0x53465dee, "counter_signal_enum_read" },
	{ 0x9efe63fd, "counter_count_enum_available_read" },
	{ 0xc579787b, "counter_count_enum_write" },
	{ 0x964a1ce9, "counter_count_enum_read" },
	{ 0x1ee2b308, "isa_unregister_driver" },
	{ 0x4736d750, "isa_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3feccbbf, "counter_signal_read_value_set" },
	{ 0xf79abbb2, "counter_count_read_value_set" },
	{ 0xb4f0aea, "counter_count_write_value_get" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x1aab51b, "counter_count_direction_str" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x49c362b4, "devm_counter_register" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x89d68935, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,counter");


MODULE_INFO(srcversion, "774B84E54453BEE283656F1");

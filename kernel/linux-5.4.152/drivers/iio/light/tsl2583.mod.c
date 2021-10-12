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
	{ 0xffc70028, "iio_read_const_attr" },
	{ 0xb710a07d, "pm_runtime_force_resume" },
	{ 0xd70fe06e, "pm_runtime_force_suspend" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x868acba5, "get_options" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xb80ad490, "i2c_smbus_write_byte" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Camstaos,tsl2580");
MODULE_ALIAS("of:N*T*Camstaos,tsl2580C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2581");
MODULE_ALIAS("of:N*T*Camstaos,tsl2581C*");
MODULE_ALIAS("of:N*T*Camstaos,tsl2583");
MODULE_ALIAS("of:N*T*Camstaos,tsl2583C*");
MODULE_ALIAS("i2c:tsl2580");
MODULE_ALIAS("i2c:tsl2581");
MODULE_ALIAS("i2c:tsl2583");

MODULE_INFO(srcversion, "9489CA4C350DC5B967764B8");

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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4f44fe30, "i2c_smbus_xfer" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x4b6a438b, "i2c_smbus_read_word_data" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe426aec8, "gpiod_direction_input" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaa7413e8, "gpiod_direction_output" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cmelexis,mlx90614");
MODULE_ALIAS("of:N*T*Cmelexis,mlx90614C*");
MODULE_ALIAS("i2c:mlx90614");

MODULE_INFO(srcversion, "D197D9A4A7243053D453689");

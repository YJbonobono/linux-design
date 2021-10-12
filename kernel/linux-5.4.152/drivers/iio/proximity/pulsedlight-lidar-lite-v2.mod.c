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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x5dcb9550, "iio_device_release_direct_mode" },
	{ 0xc61fb118, "iio_device_claim_direct_mode" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0xab1649af, "iio_triggered_buffer_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x45c9ddea, "i2c_smbus_read_byte" },
	{ 0xb80ad490, "i2c_smbus_write_byte" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x1c01fa2e, "iio_triggered_buffer_cleanup" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cpulsedlight,lidar-lite-v2");
MODULE_ALIAS("of:N*T*Cpulsedlight,lidar-lite-v2C*");
MODULE_ALIAS("of:N*T*Cgrmn,lidar-lite-v3");
MODULE_ALIAS("of:N*T*Cgrmn,lidar-lite-v3C*");
MODULE_ALIAS("i2c:lidar-lite-v2");
MODULE_ALIAS("i2c:lidar-lite-v3");

MODULE_INFO(srcversion, "2C9943FA3759CA5CA44109C");

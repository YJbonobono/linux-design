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
	{ 0xf2663790, "iio_triggered_buffer_predisable" },
	{ 0x4838e3c6, "iio_triggered_buffer_postenable" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x4b6a438b, "i2c_smbus_read_word_data" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x2f81b10a, "acpi_match_device" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xe7e67bce, "__iio_trigger_register" },
	{ 0x6b347276, "__module_get" },
	{ 0x3750a460, "get_device" },
	{ 0x24d88838, "devm_iio_trigger_alloc" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x935ea4c2, "iio_trigger_unregister" },
	{ 0x1c01fa2e, "iio_triggered_buffer_cleanup" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xab1649af, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x3369a11b, "iio_push_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x27c29caa, "iio_trigger_poll" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3d0a5ea8, "i2c_smbus_read_i2c_block_data_or_emulated" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Ckionix,kxcjk1013");
MODULE_ALIAS("of:N*T*Ckionix,kxcjk1013C*");
MODULE_ALIAS("of:N*T*Ckionix,kxcj91008");
MODULE_ALIAS("of:N*T*Ckionix,kxcj91008C*");
MODULE_ALIAS("of:N*T*Ckionix,kxtj21009");
MODULE_ALIAS("of:N*T*Ckionix,kxtj21009C*");
MODULE_ALIAS("of:N*T*Ckionix,kxtf9");
MODULE_ALIAS("of:N*T*Ckionix,kxtf9C*");
MODULE_ALIAS("i2c:kxcjk1013");
MODULE_ALIAS("i2c:kxcj91008");
MODULE_ALIAS("i2c:kxtj21009");
MODULE_ALIAS("i2c:kxtf9");
MODULE_ALIAS("i2c:SMO8500");
MODULE_ALIAS("acpi*:KXCJ1013:*");
MODULE_ALIAS("acpi*:KXCJ1008:*");
MODULE_ALIAS("acpi*:KXCJ9000:*");
MODULE_ALIAS("acpi*:KIOX0008:*");
MODULE_ALIAS("acpi*:KIOX0009:*");
MODULE_ALIAS("acpi*:KIOX000A:*");
MODULE_ALIAS("acpi*:KIOX010A:*");
MODULE_ALIAS("acpi*:KIOX020A:*");
MODULE_ALIAS("acpi*:KXTJ1009:*");
MODULE_ALIAS("acpi*:KXJ2109:*");
MODULE_ALIAS("acpi*:SMO8500:*");

MODULE_INFO(srcversion, "66ADAEFF3BED2FCE70B689E");

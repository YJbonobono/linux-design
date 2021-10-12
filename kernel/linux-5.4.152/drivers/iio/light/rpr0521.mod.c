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
	{ 0xc5850110, "printk" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0xa461b429, "devm_iio_triggered_buffer_setup" },
	{ 0x2f7c0345, "__devm_iio_trigger_register" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x24d88838, "devm_iio_trigger_alloc" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x5dcb9550, "iio_device_release_direct_mode" },
	{ 0xc61fb118, "iio_device_claim_direct_mode" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9f09f6f3, "regcache_sync" },
	{ 0xebe81e66, "regmap_raw_write" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xfd52385f, "regcache_mark_dirty" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1a5933f0, "iio_trigger_poll_chained" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0x51e394bb, "iio_trigger_using_own" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:rpr0521");
MODULE_ALIAS("acpi*:RPR0521:*");

MODULE_INFO(srcversion, "B85846FF42F603EBA2DE8FA");

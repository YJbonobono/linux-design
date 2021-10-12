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
	{ 0x4838e3c6, "iio_triggered_buffer_postenable" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5dcb9550, "iio_device_release_direct_mode" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0xc61fb118, "iio_device_claim_direct_mode" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xf2663790, "iio_triggered_buffer_predisable" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x1c01fa2e, "iio_triggered_buffer_cleanup" },
	{ 0x935ea4c2, "iio_trigger_unregister" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0xab1649af, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xe7e67bce, "__iio_trigger_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x24d88838, "devm_iio_trigger_alloc" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7775d5ed, "regmap_bulk_write" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0x27c29caa, "iio_trigger_poll" },
	{ 0xcfb5871c, "irq_work_queue" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Catlas,ph-sm");
MODULE_ALIAS("of:N*T*Catlas,ph-smC*");
MODULE_ALIAS("of:N*T*Catlas,ec-sm");
MODULE_ALIAS("of:N*T*Catlas,ec-smC*");
MODULE_ALIAS("of:N*T*Catlas,orp-sm");
MODULE_ALIAS("of:N*T*Catlas,orp-smC*");
MODULE_ALIAS("i2c:atlas-ph-sm");
MODULE_ALIAS("i2c:atlas-ec-sm");
MODULE_ALIAS("i2c:atlas-orp-sm");

MODULE_INFO(srcversion, "C72E1B32E8F9507E2288DC4");

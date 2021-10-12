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
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5dcb9550, "iio_device_release_direct_mode" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc61fb118, "iio_device_claim_direct_mode" },
	{ 0x4838e3c6, "iio_triggered_buffer_postenable" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xf2663790, "iio_triggered_buffer_predisable" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x1c01fa2e, "iio_triggered_buffer_cleanup" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x935ea4c2, "iio_trigger_unregister" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0xe7e67bce, "__iio_trigger_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x24d88838, "devm_iio_trigger_alloc" },
	{ 0xab1649af, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x3369a11b, "iio_push_event" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xcfb5871c, "irq_work_queue" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x27c29caa, "iio_trigger_poll" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7775d5ed, "regmap_bulk_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:gp2ap020a00f");

MODULE_INFO(srcversion, "DB77A13FF3A3B4A74754D5F");

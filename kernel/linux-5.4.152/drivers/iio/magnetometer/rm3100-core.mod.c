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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xffc70028, "iio_read_const_attr" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x24d88838, "devm_iio_trigger_alloc" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x4838e3c6, "iio_triggered_buffer_postenable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x2f7c0345, "__devm_iio_trigger_register" },
	{ 0x27c29caa, "iio_trigger_poll" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc61fb118, "iio_device_claim_direct_mode" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2663790, "iio_triggered_buffer_predisable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5dcb9550, "iio_device_release_direct_mode" },
	{ 0xa461b429, "devm_iio_triggered_buffer_setup" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x29361773, "complete" },
	{ 0xb0e602eb, "memmove" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x8441f7b4, "regmap_write" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "0CAF77186E7C28720EE5CB5");

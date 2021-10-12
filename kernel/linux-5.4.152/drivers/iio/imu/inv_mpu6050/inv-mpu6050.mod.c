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
	{ 0xf9a482f9, "msleep" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xffc70028, "iio_read_const_attr" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7775d5ed, "regmap_bulk_write" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x24d88838, "devm_iio_trigger_alloc" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x81d3a650, "iio_read_mount_matrix" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x2f7c0345, "__devm_iio_trigger_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x110512c7, "irq_get_irq_data" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc61fb118, "iio_device_claim_direct_mode" },
	{ 0xbec2fb57, "iio_show_mount_matrix" },
	{ 0x5073913b, "devm_add_action" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3750a460, "get_device" },
	{ 0x6b347276, "__module_get" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0x5dcb9550, "iio_device_release_direct_mode" },
	{ 0xa461b429, "devm_iio_triggered_buffer_setup" },
	{ 0x96848186, "scnprintf" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x33387e40, "regmap_get_device" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xc0877d2b, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "9CC7777F5D10A72A62D5598");

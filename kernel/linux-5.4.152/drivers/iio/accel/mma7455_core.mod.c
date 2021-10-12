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
	{ 0x1c01fa2e, "iio_triggered_buffer_cleanup" },
	{ 0xf9a482f9, "msleep" },
	{ 0xffc70028, "iio_read_const_attr" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x33387e40, "regmap_get_device" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xab1649af, "iio_triggered_buffer_setup" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,industrialio");


MODULE_INFO(srcversion, "25A5CB55F5047831C884031");

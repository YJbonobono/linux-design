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
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x2f81b10a, "acpi_match_device" },
	{ 0x24d88838, "devm_iio_trigger_alloc" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x2f7c0345, "__devm_iio_trigger_register" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3750a460, "get_device" },
	{ 0x6b347276, "__module_get" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0xa461b429, "devm_iio_triggered_buffer_setup" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x33387e40, "regmap_get_device" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xe7792155, "is_acpi_device_node" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "4908A8C783C7E3DA15AD5B9");

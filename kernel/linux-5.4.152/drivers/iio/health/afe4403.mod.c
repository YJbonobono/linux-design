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
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0xab1649af, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0xe7e67bce, "__iio_trigger_register" },
	{ 0x24d88838, "devm_iio_trigger_alloc" },
	{ 0xf96fbbdd, "regmap_multi_reg_write" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0xd0b081d6, "devm_regmap_field_alloc" },
	{ 0xed874ce5, "__devm_regmap_init_spi" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x96848186, "scnprintf" },
	{ 0x4dce7dd4, "iio_format_value" },
	{ 0xe7612615, "regmap_field_read" },
	{ 0x26f6b499, "iio_str_to_fixpoint" },
	{ 0x7bc9f415, "regmap_field_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0x6a0d511e, "spi_write_then_read" },
	{ 0x935ea4c2, "iio_trigger_unregister" },
	{ 0x1c01fa2e, "iio_triggered_buffer_cleanup" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("spi:afe4403");
MODULE_ALIAS("of:N*T*Cti,afe4403");
MODULE_ALIAS("of:N*T*Cti,afe4403C*");

MODULE_INFO(srcversion, "1DD7205EE08E64D1A5D0159");

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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x7775d5ed, "regmap_bulk_write" },
	{ 0x2f81b10a, "acpi_match_device" },
	{ 0xe7792155, "is_acpi_device_node" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0xab1649af, "iio_triggered_buffer_setup" },
	{ 0xd0b081d6, "devm_regmap_field_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x5dcb9550, "iio_device_release_direct_mode" },
	{ 0xc61fb118, "iio_device_claim_direct_mode" },
	{ 0x3369a11b, "iio_push_event" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1c01fa2e, "iio_triggered_buffer_cleanup" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x96848186, "scnprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe7612615, "regmap_field_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7bc9f415, "regmap_field_update_bits_base" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:ltr501");
MODULE_ALIAS("i2c:ltr559");
MODULE_ALIAS("i2c:ltr301");
MODULE_ALIAS("acpi*:LTER0501:*");
MODULE_ALIAS("acpi*:LTER0559:*");
MODULE_ALIAS("acpi*:LTER0301:*");

MODULE_INFO(srcversion, "19B7E80648AE6EB10B40478");

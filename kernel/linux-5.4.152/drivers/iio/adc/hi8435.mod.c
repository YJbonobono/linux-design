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
	{ 0x5afa1383, "iio_enum_available_read" },
	{ 0x2178290e, "iio_enum_write" },
	{ 0x31aad9b7, "iio_enum_read" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0x5073913b, "devm_add_action" },
	{ 0xe11c0e02, "iio_triggered_event_setup" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x70bf4816, "spi_sync" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0x3369a11b, "iio_push_event" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a0d511e, "spi_write_then_read" },
	{ 0x783b2cf3, "iio_triggered_event_cleanup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-event");

MODULE_ALIAS("spi:hi8435");
MODULE_ALIAS("of:N*T*Cholt,hi8435");
MODULE_ALIAS("of:N*T*Cholt,hi8435C*");

MODULE_INFO(srcversion, "A0D4420A39FB40E22D7BB81");

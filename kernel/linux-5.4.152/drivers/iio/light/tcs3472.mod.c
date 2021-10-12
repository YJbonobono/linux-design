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
	{ 0x5dcb9550, "iio_device_release_direct_mode" },
	{ 0xc61fb118, "iio_device_claim_direct_mode" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3369a11b, "iio_push_event" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0x96848186, "scnprintf" },
	{ 0xb541d519, "i2c_smbus_write_word_data" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xab1649af, "iio_triggered_buffer_setup" },
	{ 0x4b6a438b, "i2c_smbus_read_word_data" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1c01fa2e, "iio_triggered_buffer_cleanup" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:tcs3472");

MODULE_INFO(srcversion, "7F2D4A87ADF2494AFD3A4FF");

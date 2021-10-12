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
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6009b351, "iio_device_attach_buffer" },
	{ 0x67031ec1, "devm_iio_kfifo_allocate" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0x3369a11b, "iio_push_event" },
	{ 0x509f66b3, "iio_get_time_ns" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
};

MODULE_INFO(depends, "industrialio,kfifo_buf");

MODULE_ALIAS("spi:sca3000_d01");
MODULE_ALIAS("spi:sca3000_e02");
MODULE_ALIAS("spi:sca3000_e04");
MODULE_ALIAS("spi:sca3000_e05");

MODULE_INFO(srcversion, "CF6C465B88B41A3D0B84D90");

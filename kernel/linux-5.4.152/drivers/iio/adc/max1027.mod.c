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
	{ 0x8dd434ce, "iio_trigger_validate_own_device" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0xc5850110, "printk" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5c24352a, "__devm_iio_device_register" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0xe7e67bce, "__iio_trigger_register" },
	{ 0x24d88838, "devm_iio_trigger_alloc" },
	{ 0xa461b429, "devm_iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x88dce3df, "spi_get_device_id" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70bf4816, "spi_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("spi:max1027");
MODULE_ALIAS("spi:max1029");
MODULE_ALIAS("spi:max1031");

MODULE_INFO(srcversion, "779F171903B2CC553A3FFE7");

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
	{ 0x1c01fa2e, "iio_triggered_buffer_cleanup" },
	{ 0x935ea4c2, "iio_trigger_unregister" },
	{ 0x4dc1ab58, "i2c_smbus_read_byte_data" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0xdb632f6, "iio_trigger_notify_done" },
	{ 0xd58b29b6, "iio_trigger_alloc" },
	{ 0xd24b247, "i2c_smbus_write_byte_data" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0x81d3a650, "iio_read_mount_matrix" },
	{ 0xe7e67bce, "__iio_trigger_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2793bfa4, "__iio_device_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0xbec2fb57, "iio_show_mount_matrix" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3750a460, "get_device" },
	{ 0x6b347276, "__module_get" },
	{ 0x173e2162, "iio_trigger_free" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0xb45c4302, "iio_push_to_buffers" },
	{ 0xab1649af, "iio_triggered_buffer_setup" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "industrialio-triggered-buffer,industrialio");

MODULE_ALIAS("of:N*T*Cinvensense,itg3200");
MODULE_ALIAS("of:N*T*Cinvensense,itg3200C*");
MODULE_ALIAS("i2c:itg3200");

MODULE_INFO(srcversion, "B7A11701F03664BA0F297A1");

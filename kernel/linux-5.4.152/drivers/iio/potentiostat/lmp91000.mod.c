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
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x24d88838, "devm_iio_trigger_alloc" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0x181e94b9, "devm_iio_device_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x519a138b, "iio_convert_raw_to_processed" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x1a5933f0, "iio_trigger_poll_chained" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x8b6f65b4, "iio_read_channel_scale" },
	{ 0x84058731, "iio_read_channel_offset" },
	{ 0x7a711aef, "iio_channel_start_all_cb" },
	{ 0x935ea4c2, "iio_trigger_unregister" },
	{ 0x1c01fa2e, "iio_triggered_buffer_cleanup" },
	{ 0x267c0508, "iio_channel_release_all_cb" },
	{ 0x2a1fab3c, "iio_channel_stop_all_cb" },
	{ 0x809e31e5, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-buffer-cb,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:lmp91000");
MODULE_ALIAS("i2c:lmp91002");
MODULE_ALIAS("of:N*T*Cti,lmp91000");
MODULE_ALIAS("of:N*T*Cti,lmp91000C*");
MODULE_ALIAS("of:N*T*Cti,lmp91002");
MODULE_ALIAS("of:N*T*Cti,lmp91002C*");

MODULE_INFO(srcversion, "2618681CF55DB57953CD5F3");

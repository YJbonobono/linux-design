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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x4c1a85a7, "v4l2_async_register_subdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x1a58fbf0, "v4l2_ctrl_cluster" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x84edcf0, "__spi_register_driver" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2292b333, "spi_setup" },
	{ 0xdd64e639, "strscpy" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0x315de2cf, "v4l2_ctrl_get_menu" },
	{ 0x471fa3b1, "v4l2_ctrl_new_std_menu" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0x7dfb32fd, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x8a361363, "devm_gpio_request_one" },
	{ 0x70bf4816, "spi_sync" },
	{ 0x7334c487, "v4l2_device_unregister_subdev" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x5b31268, "v4l2_ctrl_new_int_menu" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd0c189ae, "v4l2_ctrl_handler_log_status" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x512826fa, "v4l2_ctrl_auto_cluster" },
	{ 0xabdf8cd1, "v4l2_device_register_subdev" },
	{ 0x9326bd3d, "media_create_pad_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0xd0f22cfd, "v4l2_subdev_init" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x9601035f, "request_firmware" },
	{ 0x7d318e13, "v4l2_async_unregister_subdev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x9fe09916, "release_firmware" },
	{ 0xbfe49860, "v4l2_i2c_subdev_init" },
	{ 0xc0877d2b, "regulator_enable" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:S5C73M3");
MODULE_ALIAS("of:N*T*Csamsung,s5c73m3");
MODULE_ALIAS("of:N*T*Csamsung,s5c73m3C*");

MODULE_INFO(srcversion, "50545A50B291AA0D6CF466A");

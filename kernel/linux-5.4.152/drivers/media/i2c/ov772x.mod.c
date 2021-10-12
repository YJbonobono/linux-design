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
	{ 0x6f45a7e6, "v4l2_event_subdev_unsubscribe" },
	{ 0xdfabd004, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0x4d698879, "v4l2_ctrl_subdev_log_status" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4c1a85a7, "v4l2_async_register_subdev" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xfedd2163, "clk_get" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0xbfe49860, "v4l2_i2c_subdev_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa0e40dc5, "__devm_regmap_init_sccb" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x56470118, "__warn_printk" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x7d318e13, "v4l2_async_unregister_subdev" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x8bb8c57b, "gpiod_put" },
	{ 0xa80a6d9b, "gpiod_get_optional" },
	{ 0x12a38747, "usleep_range" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc,regmap-sccb");

MODULE_ALIAS("of:N*T*Covti,ov7725");
MODULE_ALIAS("of:N*T*Covti,ov7725C*");
MODULE_ALIAS("of:N*T*Covti,ov7720");
MODULE_ALIAS("of:N*T*Covti,ov7720C*");
MODULE_ALIAS("i2c:ov772x");

MODULE_INFO(srcversion, "1ED0F84FCDF0352AA278C7E");

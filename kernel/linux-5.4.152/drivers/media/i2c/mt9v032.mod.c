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
	{ 0x4c1a85a7, "v4l2_async_register_subdev" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0xbfe49860, "v4l2_i2c_subdev_init" },
	{ 0x5b31268, "v4l2_ctrl_new_int_menu" },
	{ 0x1a58fbf0, "v4l2_ctrl_cluster" },
	{ 0x2b61baf1, "v4l2_ctrl_new_custom" },
	{ 0x1451d026, "v4l2_ctrl_new_std_menu_items" },
	{ 0x471fa3b1, "v4l2_ctrl_new_std_menu" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x21ab17b5, "__v4l2_ctrl_s_ctrl_int64" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x7d318e13, "v4l2_async_unregister_subdev" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:mt9v022");
MODULE_ALIAS("i2c:mt9v022m");
MODULE_ALIAS("i2c:mt9v024");
MODULE_ALIAS("i2c:mt9v024m");
MODULE_ALIAS("i2c:mt9v032");
MODULE_ALIAS("i2c:mt9v032m");
MODULE_ALIAS("i2c:mt9v034");
MODULE_ALIAS("i2c:mt9v034m");

MODULE_INFO(srcversion, "677C7C3217ACC355107AACF");

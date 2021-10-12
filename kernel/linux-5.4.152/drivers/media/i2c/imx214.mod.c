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
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x1dba09e3, "v4l2_async_register_subdev_sensor_common" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5b31268, "v4l2_ctrl_new_int_menu" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xbfe49860, "v4l2_i2c_subdev_init" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x9861bead, "fwnode_handle_put" },
	{ 0x93a03842, "v4l2_fwnode_endpoint_free" },
	{ 0xb7df6419, "v4l2_fwnode_endpoint_alloc_parse" },
	{ 0x8ccccb74, "fwnode_graph_get_next_endpoint" },
	{ 0x7fd9c7c2, "dev_fwnode" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc2da5f50, "__v4l2_ctrl_handler_setup" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x7d318e13, "v4l2_async_unregister_subdev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7775d5ed, "regmap_bulk_write" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x65f407cb, "pm_runtime_get_if_in_use" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "v4l2-fwnode,mc,videodev");

MODULE_ALIAS("of:N*T*Csony,imx214");
MODULE_ALIAS("of:N*T*Csony,imx214C*");

MODULE_INFO(srcversion, "9EA3137658EE8F32A38F20E");

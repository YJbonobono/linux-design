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
	{ 0xc2da5f50, "__v4l2_ctrl_handler_setup" },
	{ 0x4c1a85a7, "v4l2_async_register_subdev" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0xbfe49860, "v4l2_i2c_subdev_init" },
	{ 0x5b31268, "v4l2_ctrl_new_int_menu" },
	{ 0x1451d026, "v4l2_ctrl_new_std_menu_items" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x2a4f8997, "devm_regulator_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x277c1aa5, "fwnode_property_read_u32_array" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x9861bead, "fwnode_handle_put" },
	{ 0x6d5c37eb, "v4l2_fwnode_endpoint_parse" },
	{ 0x8ccccb74, "fwnode_graph_get_next_endpoint" },
	{ 0x7fd9c7c2, "dev_fwnode" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x815588a6, "clk_enable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0xfdad8045, "__v4l2_ctrl_modify_range" },
	{ 0x257d42e1, "__v4l2_ctrl_s_ctrl" },
	{ 0x21ab17b5, "__v4l2_ctrl_s_ctrl_int64" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x7d318e13, "v4l2_async_unregister_subdev" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc,v4l2-fwnode");

MODULE_ALIAS("of:N*T*Covti,ov7251");
MODULE_ALIAS("of:N*T*Covti,ov7251C*");

MODULE_INFO(srcversion, "8FC2C3135BD70DD06068D11");

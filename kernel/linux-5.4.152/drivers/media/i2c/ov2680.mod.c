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
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x4c1a85a7, "v4l2_async_register_subdev" },
	{ 0x512826fa, "v4l2_ctrl_auto_cluster" },
	{ 0x471fa3b1, "v4l2_ctrl_new_std_menu" },
	{ 0x1451d026, "v4l2_ctrl_new_std_menu_items" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0xbfe49860, "v4l2_i2c_subdev_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x7d318e13, "v4l2_async_unregister_subdev" },
	{ 0xe2822320, "__v4l2_find_nearest_size" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("of:N*T*Covti,ov2680");
MODULE_ALIAS("of:N*T*Covti,ov2680C*");

MODULE_INFO(srcversion, "74D4897303DE478B4401444");

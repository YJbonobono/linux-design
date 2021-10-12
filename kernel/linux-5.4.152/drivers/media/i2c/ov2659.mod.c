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
	{ 0x815d7cab, "_dev_warn" },
	{ 0x21ab17b5, "__v4l2_ctrl_s_ctrl_int64" },
	{ 0x7d318e13, "v4l2_async_unregister_subdev" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x4c1a85a7, "v4l2_async_register_subdev" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x12a38747, "usleep_range" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0xbfe49860, "v4l2_i2c_subdev_init" },
	{ 0x1451d026, "v4l2_ctrl_new_std_menu_items" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:ov2659");

MODULE_INFO(srcversion, "FFE065CC783CB243651A843");

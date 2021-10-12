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
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0x4c1a85a7, "v4l2_async_register_subdev" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0x1451d026, "v4l2_ctrl_new_std_menu_items" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0x5b31268, "v4l2_ctrl_new_int_menu" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0xbfe49860, "v4l2_i2c_subdev_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0xa94ba86f, "devm_gpiod_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfdad8045, "__v4l2_ctrl_modify_range" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x65f407cb, "pm_runtime_get_if_in_use" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x7d318e13, "v4l2_async_unregister_subdev" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");


MODULE_INFO(srcversion, "F9F28A64742E1D1AFA081DA");

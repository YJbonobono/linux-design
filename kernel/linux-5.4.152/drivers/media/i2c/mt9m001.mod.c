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
	{ 0x7d318e13, "v4l2_async_unregister_subdev" },
	{ 0x65f407cb, "pm_runtime_get_if_in_use" },
	{ 0x4c1a85a7, "v4l2_async_register_subdev" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xee7ca3ec, "__pm_runtime_disable" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x4b6a438b, "i2c_smbus_read_word_data" },
	{ 0x32bc6e74, "pm_runtime_enable" },
	{ 0xe2b406c7, "__pm_runtime_set_status" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x512826fa, "v4l2_ctrl_auto_cluster" },
	{ 0x471fa3b1, "v4l2_ctrl_new_std_menu" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0xbfe49860, "v4l2_i2c_subdev_init" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc2da5f50, "__v4l2_ctrl_handler_setup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8512b0e4, "__pm_runtime_idle" },
	{ 0x58b50ffe, "__pm_runtime_resume" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xb541d519, "i2c_smbus_write_word_data" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x12a38747, "usleep_range" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("of:N*T*Connn,mt9m001");
MODULE_ALIAS("of:N*T*Connn,mt9m001C*");
MODULE_ALIAS("i2c:mt9m001");

MODULE_INFO(srcversion, "74E3049E6C1108058AFF111");

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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x4c1a85a7, "v4l2_async_register_subdev" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x1451d026, "v4l2_ctrl_new_std_menu_items" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x6588cd57, "regmap_bulk_read" },
	{ 0xbfe49860, "v4l2_i2c_subdev_init" },
	{ 0xb7f1340b, "__devm_regmap_init_i2c" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0x43764038, "gpiod_set_value_cansleep" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x7d318e13, "v4l2_async_unregister_subdev" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0xf111cf99, "media_device_unregister_entity" },
	{ 0x9326bd3d, "media_create_pad_link" },
	{ 0x9b59d023, "media_device_register_entity" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0x2da9bbb9, "regmap_update_bits_base" },
	{ 0x27d4fd24, "v4l2_subdev_notify_event" },
	{ 0x8441f7b4, "regmap_write" },
	{ 0x23fe03d5, "dev_printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4622ad2, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:tvp5150");

MODULE_INFO(srcversion, "70829B65CC3343BC04AA06D");

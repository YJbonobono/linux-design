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
	{ 0x15ba50a6, "jiffies" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe18226cc, "regulator_bulk_enable" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x471fa3b1, "v4l2_ctrl_new_std_menu" },
	{ 0x1a58fbf0, "v4l2_ctrl_cluster" },
	{ 0x512826fa, "v4l2_ctrl_auto_cluster" },
	{ 0x2b61baf1, "v4l2_ctrl_new_custom" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0xfe49f445, "devm_regulator_bulk_get" },
	{ 0x8a361363, "devm_gpio_request_one" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbfe49860, "v4l2_i2c_subdev_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xd0c189ae, "v4l2_ctrl_handler_log_status" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8cb0c5, "regulator_bulk_disable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0xdbdbe94d, "gpiod_set_raw_value" },
	{ 0xfa719b4c, "gpio_to_desc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x7334c487, "v4l2_device_unregister_subdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,mc");

MODULE_ALIAS("i2c:S5K6AA");

MODULE_INFO(srcversion, "623FAEBCF46D11302697E11");

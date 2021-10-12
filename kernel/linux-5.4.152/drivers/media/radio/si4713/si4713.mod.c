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
	{ 0x754d539c, "strlen" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0x7334c487, "v4l2_device_unregister_subdev" },
	{ 0xe6852960, "platform_device_put" },
	{ 0x78fb0a28, "platform_device_add_data" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x1a58fbf0, "v4l2_ctrl_cluster" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x471fa3b1, "v4l2_ctrl_new_std_menu" },
	{ 0x2b61baf1, "v4l2_ctrl_new_custom" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbfe49860, "v4l2_i2c_subdev_init" },
	{ 0x3a579389, "devm_regulator_get_optional" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdd64e639, "strscpy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc0877d2b, "regulator_enable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x8d338fac, "regulator_disable" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc5850110, "printk" },
	{ 0x29361773, "complete" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:si4713");

MODULE_INFO(srcversion, "7059AB609C64F3D46E87BDD");

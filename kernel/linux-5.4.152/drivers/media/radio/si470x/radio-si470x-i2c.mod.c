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
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x63effe55, "param_ops_ushort" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x29361773, "complete" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x86a54209, "__video_register_device" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x8d8a0cae, "si470x_set_freq" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0xaa29ef71, "gpiod_set_value" },
	{ 0xfad9bcc5, "devm_gpiod_get_optional" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0xab53964c, "si470x_viddev_template" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xa18a9bc8, "si470x_ctrl_ops" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xcd5b92ed, "si470x_start" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0x85ec4561, "si470x_stop" },
	{ 0xde3cf6f1, "v4l2_fh_release" },
	{ 0x6f70e4ae, "v4l2_fh_is_singular" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdd64e639, "strscpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,radio-si470x-common");

MODULE_ALIAS("i2c:si470x");

MODULE_INFO(srcversion, "E506E0DBCFF3AEF4D278BC6");

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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x9dc7942d, "v4l2_event_unsubscribe" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0x68622281, "v4l2_ctrl_log_status" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x86a54209, "__video_register_device" },
	{ 0xdd64e639, "strscpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0xde3cf6f1, "v4l2_fh_release" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd7395c91, "v4l2_fh_open" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0x48b1a3f7, "v4l2_ctrl_poll" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "A6AF0172D24ABE1CBC5EF1F");

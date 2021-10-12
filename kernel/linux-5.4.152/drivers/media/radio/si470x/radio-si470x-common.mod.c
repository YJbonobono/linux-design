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
	{ 0x8ad464eb, "video_device_release_empty" },
	{ 0xdd64e639, "strscpy" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x1f8e5975, "v4l2_ctrl_subscribe_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb53c1438, "video_devdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x8ce7f8d1, "video_ioctl2" },
	{ 0x48b1a3f7, "v4l2_ctrl_poll" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "6E9F9A9C2A87A98993D0616");

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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc1a9cf87, "vb2_plane_cookie" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x9dd83b26, "v4l2_event_queue" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6006847, "current_task" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x815588a6, "clk_enable" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0xc1f208fd, "vb2_queue_release" },
	{ 0xc5f93449, "video_unregister_device" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videobuf2-common,videodev,videobuf2-v4l2");

MODULE_ALIAS("of:N*T*Caspeed,ast2400-video-engine");
MODULE_ALIAS("of:N*T*Caspeed,ast2400-video-engineC*");
MODULE_ALIAS("of:N*T*Caspeed,ast2500-video-engine");
MODULE_ALIAS("of:N*T*Caspeed,ast2500-video-engineC*");

MODULE_INFO(srcversion, "1927AEFECE66A839062051D");

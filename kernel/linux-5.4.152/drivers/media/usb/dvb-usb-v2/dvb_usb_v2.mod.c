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
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x77ade3d0, "rc_unregister_device" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x43304fc3, "dvb_unregister_adapter" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xfd463285, "dvb_create_media_graph" },
	{ 0x49820503, "dvb_frontend_suspend" },
	{ 0x12723846, "dvb_register_frontend" },
	{ 0x118aa710, "dvb_frontend_resume" },
	{ 0xcb96a838, "__media_device_usb_init" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xfa415342, "dvb_unregister_frontend" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x4e818077, "rc_allocate_device" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x1cb1d576, "dvb_net_release" },
	{ 0xfddedc91, "i2c_add_adapter" },
	{ 0x543080d5, "dvb_frontend_detach" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x3feecaf6, "dvb_dmx_swfilter_raw" },
	{ 0xaad38701, "rc_free_device" },
	{ 0xd806d12c, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0x35371f0c, "dvb_net_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc4aa48, "rc_register_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0x7751ad77, "dvb_dmx_swfilter_204" },
	{ 0xf859adf1, "media_device_cleanup" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0x16e297c3, "bit_wait" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7ff06523, "dvb_register_adapter" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0xfdc284ce, "__media_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x9601035f, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xdbd288d6, "media_device_unregister" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x11b21377, "usb_alloc_urb" },
	{ 0x13aadac8, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "rc-core,dvb-core,mc");


MODULE_INFO(srcversion, "E613B09C232368D460779F5");

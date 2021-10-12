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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe1f89a0b, "component_unbind_all" },
	{ 0xe76ff4c, "v4l2_subdev_call_wrappers" },
	{ 0x3bedcd67, "v4l2_device_unregister" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x377c9043, "component_bind_all" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeb7e43a2, "component_match_add_release" },
	{ 0x41c8dc97, "component_master_del" },
	{ 0x29df1f0d, "platform_device_register_full" },
	{ 0xdd64e639, "strscpy" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xa80575d1, "v4l2_device_register" },
	{ 0x6006847, "current_task" },
	{ 0xa263ce82, "freezing_slow_path" },
	{ 0xc5850110, "printk" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x8697fc4c, "media_entity_pads_init" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7334c487, "v4l2_device_unregister_subdev" },
	{ 0xf859adf1, "media_device_cleanup" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x9570732b, "platform_device_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xabdf8cd1, "v4l2_device_register_subdev" },
	{ 0x9326bd3d, "media_create_pad_link" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xd0f22cfd, "v4l2_subdev_init" },
	{ 0xfdc284ce, "__media_device_register" },
	{ 0x92f150e0, "media_entity_remote_pad" },
	{ 0x9f6b27b, "v4l2_device_register_subdev_nodes" },
	{ 0x37a0cba, "kfree" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x4993673a, "component_master_add_with_match" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6c73b2d6, "media_device_init" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdbd288d6, "media_device_unregister" },
};

MODULE_INFO(depends, "videodev,mc");


MODULE_INFO(srcversion, "1201E530A742D2A15A5913D");

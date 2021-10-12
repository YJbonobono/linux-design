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
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x1a58fbf0, "v4l2_ctrl_cluster" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9557a1de, "v4l2_ctrl_handler_setup" },
	{ 0x5b1fda75, "v4l2_ctrl_new_std" },
	{ 0xc082c2d1, "v4l2_ctrl_handler_init_class" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbfe49860, "v4l2_i2c_subdev_init" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xd0c189ae, "v4l2_ctrl_handler_log_status" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0xc5850110, "printk" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xa263ce82, "freezing_slow_path" },
	{ 0x1000e51, "schedule" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x6006847, "current_task" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x130b568, "wake_up_process" },
	{ 0x37121ace, "v4l2_ctrl_handler_free" },
	{ 0x7334c487, "v4l2_device_unregister_subdev" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev");

MODULE_ALIAS("i2c:tvaudio");

MODULE_INFO(srcversion, "F009FEC257FFFF1B9F114ED");

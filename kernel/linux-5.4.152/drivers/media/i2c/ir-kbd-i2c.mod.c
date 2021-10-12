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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0xf1dddd81, "i2c_del_driver" },
	{ 0x9a3aafa, "i2c_register_driver" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x6006847, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa3b96724, "rc_keydown" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xaad38701, "rc_free_device" },
	{ 0xc4aa48, "rc_register_device" },
	{ 0x4e818077, "rc_allocate_device" },
	{ 0x2da35042, "i2c_new_dummy_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x4cadacbb, "i2c_transfer" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x34724274, "i2c_transfer_buffer_flags" },
	{ 0x77ade3d0, "rc_unregister_device" },
	{ 0x2cc071a6, "i2c_unregister_device" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("i2c:ir_video");
MODULE_ALIAS("i2c:ir_z8f0811_haup");
MODULE_ALIAS("i2c:ir_z8f0811_hdpvr");

MODULE_INFO(srcversion, "F938AD793394AEE9CDB989E");

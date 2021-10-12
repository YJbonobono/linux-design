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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x92df0559, "smscore_register_hotplug" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x6b85ab4b, "smscore_get_board_id" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0xfd0b66e5, "sms_board_setup" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x43304fc3, "dvb_unregister_adapter" },
	{ 0xfd463285, "dvb_create_media_graph" },
	{ 0x10c2c975, "usb_debug_root" },
	{ 0xa734cfc4, "sms_board_event" },
	{ 0x963d42aa, "__wake_up_sync" },
	{ 0x12723846, "dvb_register_frontend" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbbdb5c42, "smscore_unregister_client" },
	{ 0xfa415342, "dvb_unregister_frontend" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x94e48364, "param_ops_short" },
	{ 0x99a81ab3, "smsclient_sendrequest" },
	{ 0xd806d12c, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4da2c71f, "sms_board_lna_control" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ddbd4f1, "debugfs_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5538f38d, "smscore_putbuffer" },
	{ 0xf859adf1, "media_device_cleanup" },
	{ 0x57510b46, "smscore_unregister_hotplug" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x844539ae, "sms_get_board" },
	{ 0x7ff06523, "dvb_register_adapter" },
	{ 0xe5f1213b, "sms_board_power" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb272d0e8, "sms_board_led_feedback" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x6e724099, "param_array_ops" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2d6ddbf8, "smscore_register_client" },
	{ 0x9f5394d9, "smscore_get_device_mode" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdbd288d6, "media_device_unregister" },
	{ 0x13aadac8, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "smsmdtv,dvb-core,mc");


MODULE_INFO(srcversion, "5AFA07F9A1AA7C326C3352B");

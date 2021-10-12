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
	{ 0xb405c3c7, "rsi_91x_init" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xcd173710, "rsi_dbg" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xce2526b0, "kthread_stop" },
	{ 0xb1706d7c, "rsi_mac80211_detach" },
	{ 0x292863b9, "rsi_read_pkt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x581cf443, "skb_push" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xc93c301c, "rsi_hal_device_init" },
	{ 0xb832485a, "consume_skb" },
	{ 0x63effe55, "param_ops_ushort" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x66758e5f, "rsi_91x_deinit" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xd6c50eb7, "rsi_bt_ops" },
	{ 0x11b21377, "usb_alloc_urb" },
};

MODULE_INFO(depends, "rsi_91x,btrsi");

MODULE_ALIAS("usb:v1618p9113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1618p9116d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "27B0E40E0D765684B505976");

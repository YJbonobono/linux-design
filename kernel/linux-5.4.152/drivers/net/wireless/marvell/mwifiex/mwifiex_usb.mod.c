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
	{ 0x2b68bd2f, "del_timer" },
	{ 0x6c787a9, "mwifiex_cancel_hs" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9eecf10, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xef10693d, "mwifiex_write_data_complete" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x99ebdfc8, "mwifiex_process_sleep_confirm_resp" },
	{ 0x9a136096, "mwifiex_queue_main_work" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x799da697, "_mwifiex_dbg" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb8933534, "mwifiex_add_card" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x581cf443, "skb_push" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9b553753, "skb_pull" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x95902c1, "usb_reset_device" },
	{ 0xa0f4900d, "usb_bulk_msg" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x4aaaf31e, "mwifiex_process_hs_config" },
	{ 0x37a0cba, "kfree" },
	{ 0x70cd3790, "mwifiex_multi_chan_resync" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd27debce, "mwifiex_fw_dump_event" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xdf09e813, "mwifiex_deauthenticate_all" },
	{ 0xccb03ca4, "mwifiex_remove_card" },
	{ 0xd2869ed7, "mwifiex_enable_hs" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xcf2aa48c, "mwifiex_init_shutdown_fw" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0x11b21377, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mwifiex");

MODULE_ALIAS("usb:v1286p2041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2042d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2044d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2049d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ed*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "FB881CB4EA2133605D5E8D5");

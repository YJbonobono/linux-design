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
	{ 0x2d3385d3, "system_wq" },
	{ 0xd174f265, "ath10k_core_unregister" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x927623ee, "ath10k_core_register" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1e61df3, "ath10k_core_destroy" },
	{ 0x50dd77c4, "__tracepoint_ath10k_log_dbg" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x7972de4f, "usb_unanchor_urb" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15e5db2, "ath10k_debug_mask" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2c9c8e33, "usb_deregister" },
	{ 0xc3f0fec5, "ath10k_core_create" },
	{ 0xb2d415e9, "usb_control_msg" },
	{ 0x9b553753, "skb_pull" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xafea1f0c, "usb_submit_urb" },
	{ 0x3adcd89b, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xa64ebbe1, "ath10k_htc_process_trailer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9c103dfc, "usb_put_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe5b7ec7f, "ath10k_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdc775884, "usb_register_driver" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb832485a, "consume_skb" },
	{ 0x66da6105, "ath10k_htc_notify_tx_completion" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x211fdf55, "usb_free_urb" },
	{ 0xed247193, "usb_anchor_urb" },
	{ 0x11b21377, "usb_alloc_urb" },
};

MODULE_INFO(depends, "ath10k_core");

MODULE_ALIAS("usb:v13B1p0042d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D1ED5C08821C5612FE63A25");

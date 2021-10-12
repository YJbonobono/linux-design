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
	{ 0x960f319c, "ieee80211_rx_irqsafe" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x37490494, "ieee80211_beacon_get_tim" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xc9fa6314, "ieee80211_unregister_hw" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9ebc1447, "ieee80211_stop_queues" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb036ed3d, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xd6674ebe, "ieee80211_wake_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9b553753, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe8747fb, "ieee80211_tx_status_irqsafe" },
	{ 0x1000e51, "schedule" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaee05e8a, "ieee80211_get_buffered_bc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x3bb08aa5, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1dde25b2, "ieee80211_free_hw" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "mac80211");


MODULE_INFO(srcversion, "B2561016870AC290103DC25");

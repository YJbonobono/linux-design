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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x2d42350d, "sdio_writeb" },
	{ 0x9cda2403, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x17726e51, "wiphy_free" },
	{ 0xf5dfc4ec, "cfg80211_unlink_bss" },
	{ 0x4288e22b, "cfg80211_connect_done" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xeb71ff64, "find_vpid" },
	{ 0x9f9d0e7d, "sdio_enable_func" },
	{ 0x1dfad70f, "sdio_claim_irq" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xfbbb3727, "skb_copy" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xb177d101, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x3afe5f, "cfg80211_rx_mgmt" },
	{ 0xc35aa4ba, "filp_close" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xfb2b6907, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xde2b23f1, "cfg80211_mgmt_tx_status" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6833822f, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc78529be, "kernel_read" },
	{ 0x138133c8, "param_ops_charp" },
	{ 0x79de05e8, "sdio_writel" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x8dd2cb7c, "netif_tx_stop_all_queues" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x7b8e87cc, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x30c76023, "free_netdev" },
	{ 0x9e29c256, "wiphy_unregister" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xe296672d, "register_netdev" },
	{ 0x6ace0f86, "sdio_readl" },
	{ 0xd063626f, "cfg80211_del_sta_sinfo" },
	{ 0xf6f18d62, "ieee80211_get_channel" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x652032cb, "mac_pton" },
	{ 0xc7ee435f, "cfg80211_michael_mic_failure" },
	{ 0xcc101780, "wiphy_apply_custom_regulatory" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x6c8b206a, "kill_pid" },
	{ 0x9b553753, "skb_pull" },
	{ 0x7dd510e4, "cfg80211_ibss_joined" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x565db21d, "flush_signals" },
	{ 0xedb85f12, "sdio_unregister_driver" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc62f2f96, "cfg80211_roamed" },
	{ 0xd2b341cf, "cfg80211_put_bss" },
	{ 0xa916b694, "strnlen" },
	{ 0x4cd9d8cb, "wiphy_register" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x1c4ea539, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7d28b2c4, "wiphy_new_nm" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x4c108934, "sdio_f0_readb" },
	{ 0x130b568, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xd98972de, "cfg80211_disconnected" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0xe8dde4f1, "cfg80211_new_sta" },
	{ 0x4eb4db28, "sdio_memcpy_toio" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x89db9f70, "dev_alloc_name" },
	{ 0x9601035f, "request_firmware" },
	{ 0x7a4497db, "kzfree" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x935c26a9, "sdio_register_driver" },
	{ 0x2b1d5ab8, "sdio_memcpy_fromio" },
	{ 0xbbdba794, "sdio_claim_host" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x21b81078, "cfg80211_scan_done" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x2d05e769, "sdio_set_block_size" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x760a0f4f, "yield" },
	{ 0x241db100, "sdio_disable_func" },
	{ 0xaa57bcf0, "sdio_release_host" },
	{ 0x7bd2c122, "filp_open" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xfe713ff5, "cfg80211_inform_bss_frame_data" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("sdio:c*v024Cd0523*");
MODULE_ALIAS("sdio:c*v024Cd0525*");
MODULE_ALIAS("sdio:c*v024Cd0623*");
MODULE_ALIAS("sdio:c*v024Cd0626*");
MODULE_ALIAS("sdio:c*v024Cd0627*");
MODULE_ALIAS("sdio:c*v024CdB723*");

MODULE_INFO(srcversion, "14D7C8E24208CBADFD72AAA");

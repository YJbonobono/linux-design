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
	{ 0x2d42350d, "sdio_writeb" },
	{ 0x9cda2403, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2765edd5, "crypto_alloc_shash" },
	{ 0x754d539c, "strlen" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x9f9d0e7d, "sdio_enable_func" },
	{ 0x1dfad70f, "sdio_claim_irq" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd264fd59, "crypto_shash_finup" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6833822f, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x78b45fc8, "crypto_shash_update" },
	{ 0x30c76023, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0xe296672d, "register_netdev" },
	{ 0x368e0297, "wireless_send_event" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x24d273d1, "add_timer" },
	{ 0xcc574ab, "crypto_shash_setkey" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xedb85f12, "sdio_unregister_driver" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x1c4ea539, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4eb4db28, "sdio_memcpy_toio" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x89db9f70, "dev_alloc_name" },
	{ 0x9601035f, "request_firmware" },
	{ 0x7a4497db, "kzfree" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x935c26a9, "sdio_register_driver" },
	{ 0xb832485a, "consume_skb" },
	{ 0x2b1d5ab8, "sdio_memcpy_fromio" },
	{ 0xbbdba794, "sdio_claim_host" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x2d05e769, "sdio_set_block_size" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x241db100, "sdio_disable_func" },
	{ 0xaa57bcf0, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("sdio:c*v005Bd7910*");
MODULE_ALIAS("sdio:c*v0023d7910*");

MODULE_INFO(srcversion, "7A5C0FD04624B4D01F8A027");

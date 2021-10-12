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
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc4332d3b, "ieee802154_hdr_push" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd6af1248, "skb_clone" },
	{ 0x4ad7980d, "wpan_phy_new" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6a222ae7, "trace_event_buffer_reserve" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xfce8bc1f, "bpf_trace_run3" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x40a09deb, "skb_trim" },
	{ 0x2a2b225a, "crypto_alloc_sync_skcipher" },
	{ 0xf51cadff, "ieee802154_hdr_pull" },
	{ 0x3f137654, "trace_define_field" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x246e714e, "bpf_trace_run1" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x30c76023, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa4bc7c41, "trace_event_reg" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x4d491cad, "wpan_phy_free" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc0201a9f, "ieee802154_hdr_peek" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x6720be23, "crypto_aead_encrypt" },
	{ 0x4ec1d0bb, "wpan_phy_register" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x646a3407, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xc64e93ca, "crypto_aead_setkey" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xbecfaee9, "skb_copy_expand" },
	{ 0x4e43a2c1, "crypto_skcipher_decrypt" },
	{ 0xcb4e332, "trace_event_ignore_this_pid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4698a058, "crypto_destroy_tfm" },
	{ 0x1070e19c, "trace_event_buffer_commit" },
	{ 0xc718f3ea, "wpan_phy_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd2c74e81, "ieee802154_hdr_peek_addrs" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0xc2ae15b1, "event_triggers_call" },
	{ 0x5c5d41a4, "crypto_aead_decrypt" },
	{ 0xaa1823b, "crypto_aead_setauthsize" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xcf83a698, "bpf_trace_run2" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x66f32578, "crypto_alloc_aead" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x41b63ec2, "trace_event_raw_init" },
	{ 0x89db9f70, "dev_alloc_name" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x7a4497db, "kzfree" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xd77ae818, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xb832485a, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xf817676f, "bpf_trace_run4" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x87e2553b, "ieee802154_max_payload" },
	{ 0x67a9677b, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "ieee802154");


MODULE_INFO(srcversion, "88EE9FF89B4B41F126B5F43");

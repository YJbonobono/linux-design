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
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xa6845e7a, "generic_file_llseek" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x93f8ecf7, "wimax_dev_init" },
	{ 0x349cba85, "strchr" },
	{ 0x924d91a2, "debugfs_create_u8" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xa19a77c6, "wimax_report_rfkill_sw" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x820ec0e6, "wimax_msg_data" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xd6af1248, "skb_clone" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x65d54354, "wimax_state_change" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x674bdae1, "wimax_msg_send" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9539023c, "simple_attr_read" },
	{ 0x66d230ae, "param_ops_string" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xeed4bd, "debugfs_create_u32" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xcdeed490, "netif_rx_ni" },
	{ 0xc34b242b, "default_llseek" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x4541ff06, "wimax_msg_data_len" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x34fa24ae, "debugfs_create_size_t" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe296672d, "register_netdev" },
	{ 0xd33a6a67, "wimax_state_get" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x5792f848, "strlcpy" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xfbfa3abe, "simple_attr_release" },
	{ 0x9b553753, "skb_pull" },
	{ 0xb4facf8b, "simple_open" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x27697f52, "wimax_report_rfkill_hw" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xa916b694, "strnlen" },
	{ 0x700b209d, "wimax_msg_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x66f71c76, "wimax_dev_add" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x872c2a8a, "wimax_dev_rm" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x221002e4, "wimax_msg" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x9601035f, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xb832485a, "consume_skb" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x541745d, "simple_attr_open" },
	{ 0x9fe09916, "release_firmware" },
	{ 0x4dade965, "simple_attr_write" },
	{ 0xc8dcc62a, "krealloc" },
};

MODULE_INFO(depends, "wimax");


MODULE_INFO(srcversion, "ECE66B5136090F2C829C339");

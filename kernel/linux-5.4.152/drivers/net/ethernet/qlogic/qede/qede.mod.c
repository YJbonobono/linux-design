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
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x862258db, "timecounter_init" },
	{ 0xfef1b78f, "dcb_ieee_setapp" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x72022306, "skb_clone_tx_timestamp" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xc76eec56, "__napi_schedule_irqoff" },
	{ 0x9b60d980, "xdp_rxq_info_reg" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xad090817, "netdev_set_num_tc" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xe468a63d, "tcp_gro_complete" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x4186f5da, "xdp_rxq_info_unreg" },
	{ 0x7d4f6161, "call_netdevice_notifiers" },
	{ 0xcae66e13, "bpf_prog_add" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x38fe7997, "netdev_reset_tc" },
	{ 0x6dda5adb, "rps_may_expire_flow" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x274dc2b, "netif_get_num_default_rss_queues" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x9c8666cd, "ptp_clock_unregister" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd4220e6a, "netdev_set_tc_queue" },
	{ 0x5972ee75, "flow_rule_match_ipv6_addrs" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x6fd94c36, "netif_schedule_queue" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x386b34cb, "flow_rule_match_ports" },
	{ 0xfb578fc5, "memset" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0x9eeeef48, "qed_put_eth_ops" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x74741dd1, "ethtool_rx_flow_rule_create" },
	{ 0xdc267a39, "netif_set_real_num_rx_queues" },
	{ 0x6f6e1790, "netif_set_real_num_tx_queues" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x67bc4c9e, "ptp_clock_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x98141b8e, "softnet_data" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x6f791233, "alloc_cpu_rmap" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x810be09, "free_irq_cpu_rmap" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6f9e763b, "timecounter_read" },
	{ 0x466e1228, "build_skb" },
	{ 0xd59ddfce, "flow_rule_match_basic" },
	{ 0x1651f144, "flow_block_cb_setup_simple" },
	{ 0xa42bd62a, "xdp_rxq_info_is_reg" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x58be53f5, "netdev_pick_tx" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xb8212341, "timecounter_cyc2time" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xdcd75238, "__free_pages" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8a7a4f7d, "flow_rule_match_ipv4_addrs" },
	{ 0x8b5b25c8, "irq_cpu_rmap_add" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4ecf36a1, "ptp_clock_index" },
	{ 0xfc9a6fcf, "pci_num_vf" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb832485a, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x43865deb, "skb_tstamp_tx" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x8662871d, "ethtool_rx_flow_rule_destroy" },
	{ 0x83b05a16, "param_ops_uint" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe6c73091, "bpf_prog_put" },
	{ 0x569beac1, "qed_get_eth_ops" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x666b755a, "__tracepoint_xdp_exception" },
};

MODULE_INFO(depends, "qed");

MODULE_ALIAS("pci:v00001077d00001634sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001666sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001636sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001644sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001654sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001656sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00001664sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00008070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00008090sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "24AA43C6C47F3997173151B");

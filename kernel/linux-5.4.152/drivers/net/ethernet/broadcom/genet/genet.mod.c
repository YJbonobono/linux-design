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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x23b3bcd1, "ethtool_op_get_ts_info" },
	{ 0x5f58f49d, "phy_disconnect" },
	{ 0x72022306, "skb_clone_tx_timestamp" },
	{ 0x815588a6, "clk_enable" },
	{ 0x46599119, "phy_stop" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xc76eec56, "__napi_schedule_irqoff" },
	{ 0xc24be6a4, "phy_resume" },
	{ 0xefe74502, "netdev_boot_setup_check" },
	{ 0x74c13f64, "phy_ethtool_ksettings_set" },
	{ 0x3ab184d7, "phy_init_hw" },
	{ 0xaffbbaa8, "phy_ethtool_ksettings_get" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8ac3334b, "net_dim_get_def_rx_moderation" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xec9d21d, "phy_ethtool_nway_reset" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x700172ea, "mdiobus_write" },
	{ 0x685841a1, "__genphy_config_aneg" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x99d472b1, "net_dim_get_rx_moderation" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7769ac9c, "skb_realloc_headroom" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x8ba0b748, "phy_ethtool_get_eee" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcae8eef8, "phy_print_status" },
	{ 0x6fd94c36, "netif_schedule_queue" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x8e9644da, "phy_mac_interrupt" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xe5cb1d94, "phy_start" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x46ba9a3c, "platform_device_alloc" },
	{ 0x30c76023, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xed3ab1b1, "mdiobus_read" },
	{ 0xe296672d, "register_netdev" },
	{ 0xbf8f8395, "platform_device_add" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x581cf443, "skb_push" },
	{ 0xdc267a39, "netif_set_real_num_rx_queues" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0x3461a347, "platform_device_unregister" },
	{ 0x6f6e1790, "netif_set_real_num_tx_queues" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0xcff0ca64, "fixed_phy_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1948000c, "fixed_phy_set_link_update" },
	{ 0x9b553753, "skb_pull" },
	{ 0x9012c871, "phy_suspend" },
	{ 0x98141b8e, "softnet_data" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x45f8dd9e, "platform_device_add_resources" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xa8629c87, "phy_init_eee" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7f52071a, "net_dim" },
	{ 0x4fe141ac, "phy_connect_direct" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xde7e0663, "pm_wakeup_dev_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x78fb0a28, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x5c436800, "devm_clk_get" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x422dad30, "phy_ethtool_set_eee" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xeb330f76, "phy_attach" },
	{ 0x710ae4f3, "phy_mii_ioctl" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xb832485a, "consume_skb" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x43865deb, "skb_tstamp_tx" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xd29bbaff, "devm_request_threaded_irq" },
	{ 0x60c2ccfe, "device_set_wakeup_capable" },
	{ 0xc26002cb, "devm_platform_ioremap_resource" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x4ba2093e, "device_set_wakeup_enable" },
	{ 0x773e0ae6, "phy_set_max_speed" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe6852960, "platform_device_put" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xe589099e, "netdev_crit" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,genet-v1");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v1C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v2");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v2C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v3");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v3C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v4");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v4C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v5");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v5C*");

MODULE_INFO(srcversion, "94647FCF3EB4757DB813A37");

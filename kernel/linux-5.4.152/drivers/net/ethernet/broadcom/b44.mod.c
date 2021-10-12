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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x80530abe, "ssb_driver_unregister" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x307d5d4a, "__ssb_driver_register" },
	{ 0xf0136b45, "ssb_pcihost_register" },
	{ 0xe5cb1d94, "phy_start" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x6fd94c36, "netif_schedule_queue" },
	{ 0x9b553753, "skb_pull" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x409931cf, "__napi_alloc_skb" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x74c13f64, "phy_ethtool_ksettings_set" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x46599119, "phy_stop" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xd7a50869, "generic_mii_ioctl" },
	{ 0x710ae4f3, "phy_mii_ioctl" },
	{ 0x4ba2093e, "device_set_wakeup_enable" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xc5850110, "printk" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x60c2ccfe, "device_set_wakeup_capable" },
	{ 0xa7551a7e, "phy_attached_info" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x2b4d2ffd, "phy_connect" },
	{ 0x5ce687d0, "mdiobus_is_registered_device" },
	{ 0x645b0277, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xed282188, "mdiobus_alloc_size" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xe296672d, "register_netdev" },
	{ 0xfe340d2d, "ssb_dma_translation" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x25d43687, "ssb_bus_powerup" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0xa728d4d9, "mdiobus_free" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0x5f58f49d, "phy_disconnect" },
	{ 0x30c76023, "free_netdev" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0xd031c2a8, "ssb_bus_may_powerdown" },
	{ 0xf87fba2b, "ssb_device_disable" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x7afe1905, "ssb_clockspeed" },
	{ 0x33489087, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0x1670289f, "ssb_device_enable" },
	{ 0x16502e71, "ssb_device_is_enabled" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcae8eef8, "phy_print_status" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xaffbbaa8, "phy_ethtool_ksettings_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdfbdc769, "pv_ops" },
};

MODULE_INFO(depends, "ssb,mii");

MODULE_ALIAS("ssb:v4243id0806rev*");
MODULE_ALIAS("pci:v000014E4d00004401sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004402sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7C61C16178D22F57E9ED613");

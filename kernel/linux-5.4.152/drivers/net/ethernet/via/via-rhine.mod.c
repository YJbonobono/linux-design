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
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x6fd94c36, "netif_schedule_queue" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x559311f4, "pci_wake_from_d3" },
	{ 0x15af7f4, "system_state" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xb832485a, "consume_skb" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbe456b7f, "__skb_pad" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x3030e457, "skb_copy_and_csum_dev" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc5850110, "printk" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe296672d, "register_netdev" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc1f99d96, "pci_bus_type" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xc5534d64, "ioread16" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xd7a50869, "generic_mii_ioctl" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf7cc2e55, "mii_nway_restart" },
	{ 0xb4db57f7, "mii_link_ok" },
	{ 0xdcfe29d7, "mii_ethtool_get_link_ksettings" },
	{ 0xf25b3c80, "mii_ethtool_set_link_ksettings" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x30c76023, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xf6978b8b, "mii_check_media" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("of:N*T*Cvia,vt8500-rhine");
MODULE_ALIAS("of:N*T*Cvia,vt8500-rhineC*");
MODULE_ALIAS("pci:v00001106d00003043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003106sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003053sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5EE05B30C972E62691B645F");

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
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xe296672d, "register_netdev" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0xc5850110, "printk" },
	{ 0x71dc307b, "__put_page" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x48c67edc, "__put_devmap_managed_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0xb832485a, "consume_skb" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x5e121547, "dev_close" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x559311f4, "pci_wake_from_d3" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x6fd94c36, "netif_schedule_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x81303a34, "netdev_update_features" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9166fada, "strncpy" },
	{ 0x938e3ba4, "pci_find_capability" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xfb578fc5, "memset" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4ba2093e, "device_set_wakeup_enable" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x60eeacfe, "netdev_printk" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x30c76023, "free_netdev" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x20a4d9d2, "pci_pme_capable" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x467df16d, "netdev_rss_key_fill" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001148d00009000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00009E00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001148d00009E01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004B00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004B02sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004B03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004341sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004342sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004343sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004344sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004345sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004346sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004347sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004351sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004352sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004353sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004354sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004355sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004356sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004357sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd0000435Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004361sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004362sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004363sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004364sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004365sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004366sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004367sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004368sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004369sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd0000436Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd0000436Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd0000436Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd0000436Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004370sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004380sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004381sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00004382sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BB558EA81DC3D52E543219D");

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
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1439e97c, "pci_pme_active" },
	{ 0x12a38747, "usleep_range" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xe296672d, "register_netdev" },
	{ 0x6f3bd9ba, "device_init_wakeup" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x6833822f, "netif_rx" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0x80686adc, "pci_disable_link_state" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd7a50869, "generic_mii_ioctl" },
	{ 0x81303a34, "netdev_update_features" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdcfe29d7, "mii_ethtool_get_link_ksettings" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x30c76023, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0xb832485a, "consume_skb" },
	{ 0xf25b3c80, "mii_ethtool_set_link_ksettings" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v0000197Bd00000250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000197Bd00000260sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1A32C94CEED11CDDAB36889");

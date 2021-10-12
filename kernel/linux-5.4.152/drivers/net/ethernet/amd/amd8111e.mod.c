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
	{ 0x6e724099, "param_array_ops" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd8f1dfb6, "pci_save_state" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x459f8be2, "pci_enable_wake" },
	{ 0x3eb7f0d8, "pci_restore_state" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0xf25b3c80, "mii_ethtool_set_link_ksettings" },
	{ 0xdcfe29d7, "mii_ethtool_get_link_ksettings" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xfe2cf978, "__dev_kfree_skb_irq" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xb832485a, "consume_skb" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xe296672d, "register_netdev" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x9d4d4772, "devm_ioremap" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x5792f848, "strlcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf7cc2e55, "mii_nway_restart" },
	{ 0xb4db57f7, "mii_link_ok" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v00001022d00007462sv00000000sd00000000bc*sc*i*");

MODULE_INFO(srcversion, "73C7CF3022D36EC5742546A");

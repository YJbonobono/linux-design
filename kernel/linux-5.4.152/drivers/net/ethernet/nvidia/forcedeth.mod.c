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
	{ 0x23b3bcd1, "ethtool_op_get_ts_info" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xfb578fc5, "memset" },
	{ 0x33001bea, "pci_set_power_state" },
	{ 0x559311f4, "pci_wake_from_d3" },
	{ 0x15af7f4, "system_state" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0xc5850110, "printk" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xe296672d, "register_netdev" },
	{ 0x4ba2093e, "device_set_wakeup_enable" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x4a386517, "pci_enable_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x43865deb, "skb_tstamp_tx" },
	{ 0x72022306, "skb_clone_tx_timestamp" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x6fd94c36, "netif_schedule_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb832485a, "consume_skb" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x30c76023, "free_netdev" },
	{ 0xcf796345, "pci_disable_device" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x5792f848, "strlcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0x2cf4cab4, "pci_disable_msi" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x467b633a, "pci_disable_msix" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb6b67bee, "pci_enable_msix_range" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdfbdc769, "pv_ops" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010DEd000001C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000066sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000086sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000008Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000057sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000037sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000038sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000268sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000269sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000373sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000450sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000451sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000452sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000453sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000054Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000054Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000054Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000054Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000007DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000007DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000007DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000007DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000760sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000761sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000762sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000763sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000AB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000AB1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000AB2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000AB3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000D7Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1295C3A550EF1B756C627BA");

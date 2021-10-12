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
	{ 0x9e10e0e, "dev_mc_sync_multiple" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xc1f99d96, "pci_bus_type" },
	{ 0x1c1468b3, "dev_mc_unsync" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x1c42d1e5, "vlan_uses_dev" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xca695152, "vlan_vid_del" },
	{ 0x7d4f6161, "call_netdevice_notifiers" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xe2d6fc3b, "vlan_vid_add" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x2c8debd4, "vlan_vids_del_by_dev" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x1c6f9dc2, "vlan_vids_add_by_dev" },
	{ 0x71bb11fc, "failover_register" },
	{ 0x2d658281, "netdev_lower_state_changed" },
	{ 0xa821529c, "netdev_change_features" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x8dd2cb7c, "netif_tx_stop_all_queues" },
	{ 0xad3b2879, "__ethtool_get_link_ksettings" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0x5e121547, "dev_close" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf7419e8e, "dev_open" },
	{ 0x58be53f5, "netdev_pick_tx" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7d731517, "passthru_features_check" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x4efaedf0, "dev_uc_unsync" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xc49f5a16, "dev_uc_sync_multiple" },
	{ 0xb9c94ec4, "failover_slave_unregister" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x7e217c74, "failover_unregister" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x880a9eba, "dev_get_stats" },
	{ 0x1425ab24, "dev_set_mtu" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "failover");


MODULE_INFO(srcversion, "E623C8FE2A11145245BFE01");

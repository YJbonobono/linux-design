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
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x8d951d00, "mrp_uninit_applicant" },
	{ 0x7f697ce0, "dev_change_flags" },
	{ 0xa025ed08, "vlan_filter_push_vids" },
	{ 0x1c1468b3, "dev_mc_unsync" },
	{ 0x4b52508a, "mrp_request_leave" },
	{ 0xc7b86b3e, "vlan_filter_drop_vids" },
	{ 0xb5a5bf76, "dev_get_flags" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x92d3725, "proc_create_single_data" },
	{ 0x9194a0b9, "garp_uninit_applicant" },
	{ 0x342ac131, "vlan_dev_vlan_id" },
	{ 0xb556c8fc, "dev_uc_add" },
	{ 0x9951c67d, "_proc_mkdir" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x2e499c36, "garp_request_join" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x1c42d1e5, "vlan_uses_dev" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xb177d101, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x90e81c4a, "dev_set_allmulti" },
	{ 0xca695152, "vlan_vid_del" },
	{ 0x7d4f6161, "call_netdevice_notifiers" },
	{ 0xd30d8266, "linkwatch_fire_event" },
	{ 0xe2d6fc3b, "vlan_vid_add" },
	{ 0x27876dec, "__netpoll_setup" },
	{ 0xca8a8a77, "garp_init_applicant" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9bd1bf27, "proc_remove" },
	{ 0x4c2aa044, "vlan_ioctl_set" },
	{ 0x64cd0b1e, "netpoll_send_skb_on_dev" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0xad3b2879, "__ethtool_get_link_ksettings" },
	{ 0xc5850110, "printk" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x30c76023, "free_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0xc0cdb68d, "garp_register_application" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x325c28d1, "netdev_upper_dev_unlink" },
	{ 0x5792f848, "strlcpy" },
	{ 0x581cf443, "skb_push" },
	{ 0xea29a0bd, "netif_stacked_transfer_operstate" },
	{ 0x78381292, "init_net" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0x62b804bc, "__dev_get_by_index" },
	{ 0xedad14fb, "garp_request_leave" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9dc5663c, "eth_header_parse" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xbf9102a9, "mrp_init_applicant" },
	{ 0xa4068433, "netdev_upper_dev_link" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbae89d96, "proc_create_net_data" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x4efaedf0, "dev_uc_unsync" },
	{ 0xdeead3c, "__dev_get_by_name" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x590c980c, "garp_unregister_application" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x291861ed, "eth_validate_addr" },
	{ 0x8cb12717, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x7764b403, "mrp_register_application" },
	{ 0x58b4645c, "dev_close_many" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x16a2895a, "dev_uc_del" },
	{ 0x6131b104, "dev_uc_sync" },
	{ 0x9bd88516, "__netpoll_free" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1fc7a59b, "__nla_validate" },
	{ 0x81303a34, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0xe3938f3e, "mrp_unregister_application" },
	{ 0x39eb7abd, "mrp_request_join" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd596d6d4, "dev_mc_sync" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x880a9eba, "dev_get_stats" },
	{ 0x1425ab24, "dev_set_mtu" },
};

MODULE_INFO(depends, "mrp,garp");


MODULE_INFO(srcversion, "3F9F55227D1533E977290CB");

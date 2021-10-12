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
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0x7d731517, "passthru_features_check" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x559b27f8, "xdp_do_flush_map" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0xb832485a, "consume_skb" },
	{ 0xf4c3147e, "skb_headers_offset_update" },
	{ 0xb27c66fe, "skb_copy_header" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdfaf12a4, "alloc_pages_current" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0x2795220f, "bpf_redirect_info" },
	{ 0x20835a9f, "__xdp_release_frame" },
	{ 0x666b755a, "__tracepoint_xdp_exception" },
	{ 0x5c2bcd37, "bpf_warn_invalid_xdp_action" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x466e1228, "build_skb" },
	{ 0x3a26ed11, "sched_clock" },
	{ 0xb1712948, "xdp_do_redirect" },
	{ 0xf84bd6ee, "bpf_stats_enabled_key" },
	{ 0x30c76023, "free_netdev" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3959cd5b, "rtnl_configure_link" },
	{ 0x596c50d1, "__put_net" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x93645de7, "rtnl_create_link" },
	{ 0xd95ea9f9, "rtnl_link_get_net" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xe1e7e40c, "rtnl_nla_parse_ifla" },
	{ 0x667b72cb, "xdp_convert_zc_to_xdp_frame" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x9e08d700, "__tracepoint_xdp_bulk_tx" },
	{ 0xf4410b18, "xdp_return_frame_rx_napi" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x81303a34, "netdev_update_features" },
	{ 0xe6c73091, "bpf_prog_put" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x9b60d980, "xdp_rxq_info_reg" },
	{ 0x987afca2, "xdp_rxq_info_reg_mem_model" },
	{ 0xa42bd62a, "xdp_rxq_info_is_reg" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x6833822f, "netif_rx" },
	{ 0x43865deb, "skb_tstamp_tx" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xcf106e7f, "__dev_forward_skb" },
	{ 0x72022306, "skb_clone_tx_timestamp" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x4186f5da, "xdp_rxq_info_unreg" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x7002bd8b, "napi_hash_del" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x305bbf03, "xdp_return_frame" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "86CA25759457DFC9F1159F0");

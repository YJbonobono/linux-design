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
	{ 0x8e0c20fb, "compat_ipv6_getsockopt" },
	{ 0x8dc23cfb, "compat_ipv6_setsockopt" },
	{ 0x6ea0bd0c, "ipv6_getsockopt" },
	{ 0xee4b0e9e, "ipv6_setsockopt" },
	{ 0xdc8fca4, "l2tp_ioctl" },
	{ 0xb09130b0, "sock_no_sendpage" },
	{ 0x7a688d36, "sock_no_mmap" },
	{ 0x81a1a014, "sock_common_recvmsg" },
	{ 0x8e6f29f6, "inet_sendmsg" },
	{ 0xfa8e53b6, "compat_sock_common_getsockopt" },
	{ 0xd0b274a8, "compat_sock_common_setsockopt" },
	{ 0x1ed567ed, "sock_common_getsockopt" },
	{ 0x7855a4eb, "sock_common_setsockopt" },
	{ 0x6b954fd, "inet_shutdown" },
	{ 0x65f40752, "sock_no_listen" },
	{ 0x6d008ed6, "sock_gettstamp" },
	{ 0xec1abf59, "inet6_ioctl" },
	{ 0x108ec659, "datagram_poll" },
	{ 0xe0d91def, "sock_no_accept" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0x9bb2243e, "inet_dgram_connect" },
	{ 0xf79e0681, "inet6_bind" },
	{ 0x3abd632f, "inet6_release" },
	{ 0xb1faca26, "inet6_del_protocol" },
	{ 0xa82415e8, "inet6_unregister_protosw" },
	{ 0x71986385, "inet6_register_protosw" },
	{ 0xb99540a6, "proto_unregister" },
	{ 0x51f66efe, "inet6_add_protocol" },
	{ 0xec60789c, "proto_register" },
	{ 0xc5850110, "printk" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x3bcbf347, "sk_free" },
	{ 0xa7277679, "__xfrm_policy_check" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xc88e4e9e, "__sk_receive_skb" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x958f25db, "l2tp_session_free" },
	{ 0xa0dc93c7, "l2tp_recv_common" },
	{ 0xa5449817, "l2tp_session_get" },
	{ 0xa4f467d2, "__fl6_sock_lookup" },
	{ 0xe7d1af6d, "ip6_dst_hoplimit" },
	{ 0xbe1bf43e, "ip6_push_pending_frames" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xcd5835b, "ipv6_flowlabel_exclusive" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb0704523, "dst_release" },
	{ 0xd4611bfc, "ip6_append_data" },
	{ 0x378bb900, "ip_generic_getfrag" },
	{ 0xd3b8c111, "ip6_dst_lookup_flow" },
	{ 0xf0875158, "security_sk_classify_flow" },
	{ 0x507ebc7d, "fl6_update_dst" },
	{ 0x573b5453, "ipv6_fixup_options" },
	{ 0x433ae132, "fl6_merge_options" },
	{ 0x54d44369, "ip6_datagram_send_ctl" },
	{ 0x24148037, "sk_common_release" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x74a17a79, "sock_queue_rcv_skb" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7ce93bb, "ipv6_chk_addr" },
	{ 0x49e981bf, "dev_get_by_index_rcu" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x6808f8c5, "__ip6_datagram_connect" },
	{ 0x17c3e829, "__udp_disconnect" },
	{ 0xa8ee3840, "inet6_destroy_sock" },
	{ 0xac25fd38, "l2tp_tunnel_delete" },
	{ 0xf11f616d, "release_sock" },
	{ 0x6365bb66, "ip6_flush_pending_frames" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x813ac8d1, "__sock_recv_wifi_status" },
	{ 0x5d57b7cf, "ip6_datagram_recv_ctl" },
	{ 0x481083a3, "__sock_recv_timestamp" },
	{ 0xe5197d8, "ipv6_recv_error" },
	{ 0xaef989e6, "skb_free_datagram" },
	{ 0xbc3a7fc8, "skb_copy_datagram_iter" },
	{ 0x46dab489, "skb_recv_datagram" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "l2tp_ip,l2tp_core");


MODULE_INFO(srcversion, "23763C14F1D2E93A05CFBB6");

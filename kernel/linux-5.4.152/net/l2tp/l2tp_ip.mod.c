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
	{ 0xf11f616d, "release_sock" },
	{ 0x958f25db, "l2tp_session_free" },
	{ 0x6caa387, "ip_getsockopt" },
	{ 0x4b102d0, "ip_setsockopt" },
	{ 0x685e2e64, "sk_setup_caps" },
	{ 0x6d008ed6, "sock_gettstamp" },
	{ 0xb0704523, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa0dc93c7, "l2tp_recv_common" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x74a17a79, "sock_queue_rcv_skb" },
	{ 0x46dab489, "skb_recv_datagram" },
	{ 0x8e6f29f6, "inet_sendmsg" },
	{ 0x83f1927e, "inet_del_protocol" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x24148037, "sk_common_release" },
	{ 0xd0b274a8, "compat_sock_common_setsockopt" },
	{ 0x9bb2243e, "inet_dgram_connect" },
	{ 0x81a1a014, "sock_common_recvmsg" },
	{ 0xb09130b0, "sock_no_sendpage" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x7a688d36, "sock_no_mmap" },
	{ 0xfa8e53b6, "compat_sock_common_getsockopt" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0x305dcb7b, "compat_ip_getsockopt" },
	{ 0x813ac8d1, "__sock_recv_wifi_status" },
	{ 0xbc3a7fc8, "skb_copy_datagram_iter" },
	{ 0xf0875158, "security_sk_classify_flow" },
	{ 0xc5850110, "printk" },
	{ 0x4fa26b8f, "inet_addr_type" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0x65f40752, "sock_no_listen" },
	{ 0xc614598b, "__ip_queue_xmit" },
	{ 0xe0d91def, "sock_no_accept" },
	{ 0x3bcbf347, "sk_free" },
	{ 0x6b954fd, "inet_shutdown" },
	{ 0x7968d4e2, "inet_add_protocol" },
	{ 0x481083a3, "__sock_recv_timestamp" },
	{ 0xa27235d9, "inet_ioctl" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc88e4e9e, "__sk_receive_skb" },
	{ 0x64f9514c, "ip_cmsg_recv_offset" },
	{ 0xec60789c, "proto_register" },
	{ 0xe7965eda, "__sk_dst_check" },
	{ 0xaeaa2473, "inet_release" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x18b2697a, "make_kuid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x108ec659, "datagram_poll" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xb99540a6, "proto_unregister" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf5ae8337, "compat_ip_setsockopt" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x18ce08c, "ip_route_output_flow" },
	{ 0x7855a4eb, "sock_common_setsockopt" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xa7277679, "__xfrm_policy_check" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xc43416a6, "inet_register_protosw" },
	{ 0x17c3e829, "__udp_disconnect" },
	{ 0xac25fd38, "l2tp_tunnel_delete" },
	{ 0x3e52ad8f, "inet_bind" },
	{ 0x1ed567ed, "sock_common_getsockopt" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x9946208a, "__ip4_datagram_connect" },
	{ 0xea16a854, "sock_wmalloc" },
	{ 0xa5449817, "l2tp_session_get" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4867b03a, "inet_unregister_protosw" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xaef989e6, "skb_free_datagram" },
};

MODULE_INFO(depends, "l2tp_core");


MODULE_INFO(srcversion, "2A6F1C47095F0CB6065A320");

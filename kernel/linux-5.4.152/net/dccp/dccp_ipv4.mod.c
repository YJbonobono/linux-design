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
	{ 0x16905784, "inet_csk_reqsk_queue_drop" },
	{ 0x59814a84, "dccp_statistics" },
	{ 0x49045426, "icmp_err_convert" },
	{ 0x16d54e0c, "dccp_init_sock" },
	{ 0x98a414be, "dccp_set_state" },
	{ 0x6caa387, "ip_getsockopt" },
	{ 0x723e9339, "inet_unhash" },
	{ 0x1c733fe0, "inet_twsk_put" },
	{ 0x722630de, "dccp_hashinfo" },
	{ 0x4b102d0, "ip_setsockopt" },
	{ 0xf1019c50, "dccp_sendmsg" },
	{ 0xa18c189c, "ip_build_and_send_pkt" },
	{ 0x685e2e64, "sk_setup_caps" },
	{ 0x6d008ed6, "sock_gettstamp" },
	{ 0x31cfa46, "dccp_ctl_make_reset" },
	{ 0x417021ee, "dccp_destroy_sock" },
	{ 0xc6171e62, "dccp_make_response" },
	{ 0x64aff8b2, "sock_release" },
	{ 0xb0704523, "dst_release" },
	{ 0xd6045548, "dccp_send_sync" },
	{ 0x5e948f36, "dccp_rcv_established" },
	{ 0x452d7db2, "security_skb_classify_flow" },
	{ 0xb664de51, "inet_csk_prepare_forced_close" },
	{ 0x22c9ec6, "dccp_create_openreq_child" },
	{ 0xa915fdb0, "dccp_check_req" },
	{ 0x8e6f29f6, "inet_sendmsg" },
	{ 0xd767e7a3, "dccp_recvmsg" },
	{ 0x83f1927e, "inet_del_protocol" },
	{ 0x963333c0, "inet_sk_rebuild_header" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xa5b1b310, "dccp_ioctl" },
	{ 0xd0b274a8, "compat_sock_common_setsockopt" },
	{ 0x8fe3367, "dccp_setsockopt" },
	{ 0x81a1a014, "sock_common_recvmsg" },
	{ 0xb09130b0, "sock_no_sendpage" },
	{ 0xa84e6dc3, "dccp_child_process" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x7a688d36, "sock_no_mmap" },
	{ 0xfa8e53b6, "compat_sock_common_getsockopt" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0xee82c453, "skb_checksum" },
	{ 0x305dcb7b, "compat_ip_getsockopt" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0xf843301e, "dccp_parse_options" },
	{ 0xe9ea4ecd, "compat_dccp_setsockopt" },
	{ 0x72406d8c, "dccp_getsockopt" },
	{ 0xfdfc9d6, "inet_csk_update_pmtu" },
	{ 0xf0875158, "security_sk_classify_flow" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x83f75fc8, "inet_csk_route_req" },
	{ 0x8faaf373, "inet_csk_route_child_sock" },
	{ 0xcfba4f97, "kmem_cache_free" },
	{ 0xc614598b, "__ip_queue_xmit" },
	{ 0x58a07a8b, "inet_hash_connect" },
	{ 0xbb78f25e, "dccp_reqsk_init" },
	{ 0x3115e36d, "dccp_close" },
	{ 0x3bcbf347, "sk_free" },
	{ 0x6b954fd, "inet_shutdown" },
	{ 0x7968d4e2, "inet_add_protocol" },
	{ 0xc3b6a26c, "dccp_orphan_count" },
	{ 0xebfd7d2c, "dccp_sync_mss" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xab399dd3, "inet_accept" },
	{ 0xb8c56976, "inet_csk_reqsk_queue_drop_and_put" },
	{ 0xc65e4e97, "secure_dccp_sequence_number" },
	{ 0xa27235d9, "inet_ioctl" },
	{ 0x2c490515, "inet_csk_get_port" },
	{ 0xa2624a42, "dccp_death_row" },
	{ 0xbdf99db3, "inet_ctl_sock_create" },
	{ 0x3bfa4391, "dccp_poll" },
	{ 0xc88e4e9e, "__sk_receive_skb" },
	{ 0x6270e8cc, "inet_hash" },
	{ 0xec60789c, "proto_register" },
	{ 0xc34540f0, "ip_route_output_key_hash" },
	{ 0x5c0df1c, "dccp_disconnect" },
	{ 0xe7965eda, "__sk_dst_check" },
	{ 0xaeaa2473, "inet_release" },
	{ 0x1023ff82, "dccp_done" },
	{ 0x57732438, "inet_twsk_purge" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a0eb540, "inet_reqsk_alloc" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xb99540a6, "proto_unregister" },
	{ 0xb36a1e5d, "inet_stream_connect" },
	{ 0x5a431601, "inet_getname" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x348430fe, "inet_ehash_nolisten" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4cdd391d, "dccp_feat_list_purge" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf5ae8337, "compat_ip_setsockopt" },
	{ 0x3f306f9a, "inet_csk_reqsk_queue_hash_add" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x8deed620, "compat_dccp_getsockopt" },
	{ 0x18ce08c, "ip_route_output_flow" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7855a4eb, "sock_common_setsockopt" },
	{ 0xa7277679, "__xfrm_policy_check" },
	{ 0xc43416a6, "inet_register_protosw" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1761617, "security_inet_conn_request" },
	{ 0x5d815511, "inet_dccp_listen" },
	{ 0x83289380, "__inet_inherit_port" },
	{ 0x3e52ad8f, "inet_bind" },
	{ 0x1ed567ed, "sock_common_getsockopt" },
	{ 0x86be7924, "dccp_packet_name" },
	{ 0xc68d11d9, "inet_csk_accept" },
	{ 0xb80db073, "__inet_lookup_listener" },
	{ 0x6365e736, "dccp_reqsk_send_ack" },
	{ 0x41870bd, "dccp_rcv_state_process" },
	{ 0x51e158f6, "dccp_connect" },
	{ 0x8306bf8b, "dccp_shutdown" },
	{ 0x4867b03a, "inet_unregister_protosw" },
	{ 0xffbe0276, "inet_csk_addr2sockaddr" },
	{ 0xf8eac455, "__inet_lookup_established" },
};

MODULE_INFO(depends, "dccp");


MODULE_INFO(srcversion, "915855AC332FB98986EF7A4");

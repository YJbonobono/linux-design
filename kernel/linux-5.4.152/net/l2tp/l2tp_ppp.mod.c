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
	{ 0x7a688d36, "sock_no_mmap" },
	{ 0xb64f81a0, "sock_no_shutdown" },
	{ 0x65f40752, "sock_no_listen" },
	{ 0x9f3c1220, "pppox_compat_ioctl" },
	{ 0x375a127d, "pppox_ioctl" },
	{ 0x108ec659, "datagram_poll" },
	{ 0xe0d91def, "sock_no_accept" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0x3fd1ac7, "sock_no_bind" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0x3d117aa8, "unregister_pernet_device" },
	{ 0xb99540a6, "proto_unregister" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0xc8c163e5, "l2tp_nl_register_ops" },
	{ 0xe0b55df4, "register_pppox_proto" },
	{ 0xec60789c, "proto_register" },
	{ 0xcf4b0f2, "register_pernet_device" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xf516e480, "l2tp_xmit_skb" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xea16a854, "sock_wmalloc" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x9890768f, "pppox_unbind_sock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x57ca263b, "l2tp_session_set_header_len" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xd49a78f2, "l2tp_session_delete" },
	{ 0xa1373dc0, "ppp_register_net_channel" },
	{ 0xb0704523, "dst_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x379283e, "l2tp_tunnel_register" },
	{ 0xff9426d0, "l2tp_tunnel_create" },
	{ 0xac25fd38, "l2tp_tunnel_delete" },
	{ 0x2b724fc4, "l2tp_tunnel_get_session" },
	{ 0x1911b277, "l2tp_tunnel_get" },
	{ 0xf11f616d, "release_sock" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb177d101, "seq_printf" },
	{ 0xa7bdc62c, "ppp_dev_name" },
	{ 0xde398eea, "l2tp_session_get_nth" },
	{ 0x3bcbf347, "sk_free" },
	{ 0x958f25db, "l2tp_session_free" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x3c916c7c, "l2tp_tunnel_free" },
	{ 0xf1d29a30, "l2tp_tunnel_get_nth" },
	{ 0xc5850110, "printk" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x9b553753, "skb_pull" },
	{ 0x74a17a79, "sock_queue_rcv_skb" },
	{ 0x18255e23, "ppp_input" },
	{ 0xbae89d96, "proc_create_net_data" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbc3a7fc8, "skb_copy_datagram_iter" },
	{ 0x46dab489, "skb_recv_datagram" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x367655fd, "l2tp_udp_encap_recv" },
	{ 0xb5fc8f7b, "sock_init_data" },
	{ 0x80197bfb, "sk_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xcc29edd4, "l2tp_session_register" },
	{ 0x6006847, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x66757d2b, "l2tp_session_create" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pppox,l2tp_netlink,l2tp_core");


MODULE_INFO(srcversion, "50DD0EB8FFA2D8CD831B777");

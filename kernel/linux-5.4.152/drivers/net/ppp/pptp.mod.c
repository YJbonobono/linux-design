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
	{ 0xd5e470cd, "sock_no_recvmsg" },
	{ 0x4f3735b0, "sock_no_sendmsg" },
	{ 0x8552971b, "sock_no_getsockopt" },
	{ 0x3eeb836, "sock_no_setsockopt" },
	{ 0xb64f81a0, "sock_no_shutdown" },
	{ 0x65f40752, "sock_no_listen" },
	{ 0x9f3c1220, "pppox_compat_ioctl" },
	{ 0x375a127d, "pppox_ioctl" },
	{ 0xe0d91def, "sock_no_accept" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x999e8297, "vfree" },
	{ 0x48582366, "gre_del_protocol" },
	{ 0xb99540a6, "proto_unregister" },
	{ 0xe0b55df4, "register_pppox_proto" },
	{ 0xec60789c, "proto_register" },
	{ 0xcefee04e, "gre_add_protocol" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xade7390c, "ip_local_out" },
	{ 0x2124474, "ip_send_check" },
	{ 0x4239898e, "__ip_select_ident" },
	{ 0x581cf443, "skb_push" },
	{ 0xb832485a, "consume_skb" },
	{ 0xa3de0625, "skb_set_owner_w" },
	{ 0x7769ac9c, "skb_realloc_headroom" },
	{ 0x18255e23, "ppp_input" },
	{ 0x9b553753, "skb_pull" },
	{ 0x74a17a79, "sock_queue_rcv_skb" },
	{ 0x3bcbf347, "sk_free" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9890768f, "pppox_unbind_sock" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb0704523, "dst_release" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xc88e4e9e, "__sk_receive_skb" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xc5850110, "printk" },
	{ 0x18b2697a, "make_kuid" },
	{ 0xcf39e1e6, "ppp_register_channel" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x685e2e64, "sk_setup_caps" },
	{ 0x18ce08c, "ip_route_output_flow" },
	{ 0xf0875158, "security_sk_classify_flow" },
	{ 0xf11f616d, "release_sock" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xb5fc8f7b, "sock_init_data" },
	{ 0x80197bfb, "sk_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pppox,gre");


MODULE_INFO(srcversion, "BC4E562362A8D71FAA085DF");

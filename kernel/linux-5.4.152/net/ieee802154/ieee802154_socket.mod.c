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
	{ 0xab12acd5, "dev_load" },
	{ 0xb5fc8f7b, "sock_init_data" },
	{ 0x26a77871, "dev_getbyhwaddr_rcu" },
	{ 0x6d008ed6, "sock_gettstamp" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xb0704523, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7028574e, "dev_get_by_name" },
	{ 0xd6af1248, "skb_clone" },
	{ 0x6c2ba262, "sock_no_getname" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x74a17a79, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x46dab489, "skb_recv_datagram" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x24148037, "sk_common_release" },
	{ 0xd0b274a8, "compat_sock_common_setsockopt" },
	{ 0x81a1a014, "sock_common_recvmsg" },
	{ 0xb09130b0, "sock_no_sendpage" },
	{ 0x7a688d36, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xfa8e53b6, "compat_sock_common_getsockopt" },
	{ 0xf51cadff, "ieee802154_hdr_pull" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0x80197bfb, "sk_alloc" },
	{ 0xbc3a7fc8, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x3fd1ac7, "sock_no_bind" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x3000a0f3, "sock_prot_inuse_add" },
	{ 0x65f40752, "sock_no_listen" },
	{ 0x581cf443, "skb_push" },
	{ 0xe0d91def, "sock_no_accept" },
	{ 0xe575c2ac, "dev_get_by_index" },
	{ 0x463b9b0e, "dev_remove_pack" },
	{ 0x78381292, "init_net" },
	{ 0xb64f81a0, "sock_no_shutdown" },
	{ 0xe1f51ae2, "__sock_recv_ts_and_drops" },
	{ 0xc6cbbc89, "capable" },
	{ 0xec60789c, "proto_register" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x108ec659, "datagram_poll" },
	{ 0xc82d7720, "sock_register" },
	{ 0x3b6f5bcc, "dev_getfirstbyhwtype" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xb99540a6, "proto_unregister" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8b13c320, "sock_alloc_send_skb" },
	{ 0xf7a8fac2, "put_cmsg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7855a4eb, "sock_common_setsockopt" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x1ed567ed, "sock_common_getsockopt" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xa2c3efa3, "dev_add_pack" },
	{ 0xb832485a, "consume_skb" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xaef989e6, "skb_free_datagram" },
};

MODULE_INFO(depends, "ieee802154");


MODULE_INFO(srcversion, "A28C13A39769A6B544B33E4");

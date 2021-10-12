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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0xf11f616d, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xb5fc8f7b, "sock_init_data" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xa5bcfd03, "from_kuid_munged" },
	{ 0x3eeb836, "sock_no_setsockopt" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x8552971b, "sock_no_getsockopt" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb177d101, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x1049e87a, "rtnl_notify" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x74a17a79, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x46dab489, "skb_recv_datagram" },
	{ 0xc622556f, "prepare_to_wait_exclusive" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x7ea1b695, "sock_i_ino" },
	{ 0xe76c039f, "seq_pad" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x24148037, "sk_common_release" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x40a09deb, "skb_trim" },
	{ 0xd0b274a8, "compat_sock_common_setsockopt" },
	{ 0x81a1a014, "sock_common_recvmsg" },
	{ 0x6833822f, "netif_rx" },
	{ 0xb09130b0, "sock_no_sendpage" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0x7a688d36, "sock_no_mmap" },
	{ 0xfa8e53b6, "compat_sock_common_getsockopt" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xcdeed490, "netif_rx_ni" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0xb92ea046, "unregister_pernet_subsys" },
	{ 0x80197bfb, "sk_alloc" },
	{ 0xeb09db31, "rtnl_register_module" },
	{ 0x6006847, "current_task" },
	{ 0xbc3a7fc8, "skb_copy_datagram_iter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x65f40752, "sock_no_listen" },
	{ 0x581cf443, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe0d91def, "sock_no_accept" },
	{ 0x3bcbf347, "sk_free" },
	{ 0xe575c2ac, "dev_get_by_index" },
	{ 0x463b9b0e, "dev_remove_pack" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x78381292, "init_net" },
	{ 0x62b804bc, "__dev_get_by_index" },
	{ 0xb64f81a0, "sock_no_shutdown" },
	{ 0xc88e4e9e, "__sk_receive_skb" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xec60789c, "proto_register" },
	{ 0xf8bab3a2, "rtnl_set_sk_err" },
	{ 0x893a5c26, "netlink_capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x108ec659, "datagram_poll" },
	{ 0xc82d7720, "sock_register" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xb99540a6, "proto_unregister" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8b13c320, "sock_alloc_send_skb" },
	{ 0x88cb6a1c, "register_pernet_subsys" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbae89d96, "proc_create_net_data" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x7855a4eb, "sock_common_setsockopt" },
	{ 0x8080c17, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2b6f9f16, "___pskb_trim" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x1ed567ed, "sock_common_getsockopt" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0xa2c3efa3, "dev_add_pack" },
	{ 0xb832485a, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0xd879ab8, "register_net_sysctl" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xa19dc7e8, "__nlmsg_put" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x1a625919, "sock_i_uid" },
	{ 0x64a5ffa3, "try_module_get" },
	{ 0xaef989e6, "skb_free_datagram" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "98B69A9345FC15649D98C15");

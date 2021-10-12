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
	{ 0x8552971b, "sock_no_getsockopt" },
	{ 0x3eeb836, "sock_no_setsockopt" },
	{ 0xb64f81a0, "sock_no_shutdown" },
	{ 0x65f40752, "sock_no_listen" },
	{ 0x9f3c1220, "pppox_compat_ioctl" },
	{ 0x375a127d, "pppox_ioctl" },
	{ 0x108ec659, "datagram_poll" },
	{ 0xe0d91def, "sock_no_accept" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0x3fd1ac7, "sock_no_bind" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x463b9b0e, "dev_remove_pack" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x3d117aa8, "unregister_pernet_device" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xa2c3efa3, "dev_add_pack" },
	{ 0xb99540a6, "proto_unregister" },
	{ 0xe0b55df4, "register_pppox_proto" },
	{ 0xec60789c, "proto_register" },
	{ 0xcf4b0f2, "register_pernet_device" },
	{ 0x18255e23, "ppp_input" },
	{ 0x74a17a79, "sock_queue_rcv_skb" },
	{ 0xdca7e1b4, "dev_get_by_name_rcu" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa1373dc0, "ppp_register_net_channel" },
	{ 0x7028574e, "dev_get_by_name" },
	{ 0xffda8933, "pskb_trim_rcsum_slow" },
	{ 0xc88e4e9e, "__sk_receive_skb" },
	{ 0x11dbe629, "skb_pull_rcsum" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x9890768f, "pppox_unbind_sock" },
	{ 0x3bcbf347, "sk_free" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xbae89d96, "proc_create_net_data" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0xb177d101, "seq_printf" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0xf11f616d, "release_sock" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xea16a854, "sock_wmalloc" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb832485a, "consume_skb" },
	{ 0xbc3a7fc8, "skb_copy_datagram_iter" },
	{ 0x46dab489, "skb_recv_datagram" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb5fc8f7b, "sock_init_data" },
	{ 0x80197bfb, "sk_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pppox");


MODULE_INFO(srcversion, "C5102176E4C284535947129");

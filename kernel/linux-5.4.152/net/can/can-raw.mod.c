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
	{ 0xa6ea5200, "can_rx_register" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x6d008ed6, "sock_gettstamp" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb2df421a, "can_proto_unregister" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x74a17a79, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x46dab489, "skb_recv_datagram" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xb09130b0, "sock_no_sendpage" },
	{ 0x7a688d36, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb1e6abd1, "sock_no_socketpair" },
	{ 0xc5850110, "printk" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0x65f40752, "sock_no_listen" },
	{ 0xe0d91def, "sock_no_accept" },
	{ 0x3bcbf347, "sk_free" },
	{ 0x437a0d6d, "__sock_tx_timestamp" },
	{ 0xe575c2ac, "dev_get_by_index" },
	{ 0xb64f81a0, "sock_no_shutdown" },
	{ 0x83f9ce14, "can_send" },
	{ 0xe1f51ae2, "__sock_recv_ts_and_drops" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x108ec659, "datagram_poll" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbcb9ccc6, "can_proto_register" },
	{ 0x8b13c320, "sock_alloc_send_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8080c17, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x2160e9, "can_rx_unregister" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x5067dc06, "_copy_to_iter" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xaef989e6, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "990A7F25C0014610847AC62");

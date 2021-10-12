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
	{ 0x77733870, "skb_queue_head" },
	{ 0xf11f616d, "release_sock" },
	{ 0xb5fc8f7b, "sock_init_data" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xbd98dbf6, "pn_sock_unhash" },
	{ 0x10bf2865, "sk_stream_wait_connect" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x74a17a79, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x46dab489, "skb_recv_datagram" },
	{ 0xa3de0625, "skb_set_owner_w" },
	{ 0x56f0ca06, "pn_sock_hash" },
	{ 0xbc3385e7, "phonet_proto_register" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xa58219eb, "sock_rfree" },
	{ 0x24148037, "sk_common_release" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6833822f, "netif_rx" },
	{ 0x97de5a85, "pn_sock_get_port" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x80197bfb, "sk_alloc" },
	{ 0x6006847, "current_task" },
	{ 0xbc3a7fc8, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0xf83fd03a, "lock_sock_nested" },
	{ 0x30c76023, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe296672d, "register_netdev" },
	{ 0x581cf443, "skb_push" },
	{ 0x3bcbf347, "sk_free" },
	{ 0xc88e4e9e, "__sk_receive_skb" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x1791c61f, "_copy_from_iter_full" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8b13c320, "sock_alloc_send_skb" },
	{ 0xea602248, "phonet_proto_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4849f6ca, "pn_skb_send" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xf2425ca, "phonet_stream_ops" },
	{ 0xb832485a, "consume_skb" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xaef989e6, "skb_free_datagram" },
};

MODULE_INFO(depends, "phonet");


MODULE_INFO(srcversion, "919112CB639EB6624E53D68");

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
	{ 0xefa13920, "unregister_hdlc_protocol" },
	{ 0x3ae1884a, "register_hdlc_protocol" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x9b553753, "skb_pull" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x30c76023, "free_netdev" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x7d4f6161, "call_netdevice_notifiers" },
	{ 0xe01c3b07, "attach_hdlc_protocol" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0xd30d8266, "linkwatch_fire_event" },
	{ 0x5e121547, "dev_close" },
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xfc7b6a19, "dev_queue_xmit" },
	{ 0xfb578fc5, "memset" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xd0504053, "pskb_expand_head" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x581cf443, "skb_push" },
	{ 0xb832485a, "consume_skb" },
	{ 0x7769ac9c, "skb_realloc_headroom" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc");


MODULE_INFO(srcversion, "D262758363396E4FB17757B");

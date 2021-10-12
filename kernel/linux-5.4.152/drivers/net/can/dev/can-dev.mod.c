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
	{ 0x2d3385d3, "system_wq" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xd6af1248, "skb_clone" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0x6833822f, "netif_rx" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x8f64285e, "sock_efree" },
	{ 0xcdeed490, "netif_rx_ni" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6539706f, "netdev_warn" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xb832485a, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3a8858ae, "skb_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5ED807AE9C8AD103ED4EF51");

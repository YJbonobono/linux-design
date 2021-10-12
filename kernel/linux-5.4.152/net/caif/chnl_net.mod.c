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
	{ 0xc50e3748, "unregister_netdevice_queue" },
	{ 0xf06e306f, "rtnl_link_unregister" },
	{ 0xcd60e37c, "rtnl_link_register" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x1446b60a, "caif_client_register_refcnt" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xcdeed490, "netif_rx_ni" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x2b75e98a, "skb_copy_bits" },
	{ 0x4a237e57, "cfpkt_tonative" },
	{ 0xd8afdfa1, "register_netdevice" },
	{ 0x76382d49, "netdev_state_change" },
	{ 0x9166fada, "strncpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1425ab24, "dev_set_mtu" },
	{ 0x62b804bc, "__dev_get_by_index" },
	{ 0xf0aa0975, "caif_connect_client" },
	{ 0x400c58ac, "caif_disconnect_client" },
	{ 0xc5850110, "printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2a09f713, "cfpkt_fromnative" },
	{ 0xb7b6874e, "caif_free_client" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x5e121547, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "caif");


MODULE_INFO(srcversion, "B38C3CCCD05D096FCC80AA4");

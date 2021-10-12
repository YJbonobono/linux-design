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
	{ 0x34ec13b9, "neigh_seq_next" },
	{ 0xae281d2, "neigh_seq_stop" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0xbae89d96, "proc_create_net_data" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x526ce9a2, "register_atm_ioctl" },
	{ 0x581cf443, "skb_push" },
	{ 0xa2fa640f, "neigh_destroy" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb0704523, "dst_release" },
	{ 0x90605836, "__neigh_create" },
	{ 0xee5296e0, "neigh_lookup" },
	{ 0x18ce08c, "ip_route_output_flow" },
	{ 0xe296672d, "register_netdev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x614ffd7f, "vcc_process_recv_queue" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x6b347276, "__module_get" },
	{ 0xc2607da9, "vcc_insert_socket" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x37a0cba, "kfree" },
	{ 0x627cee2c, "atm_charge" },
	{ 0x9b553753, "skb_pull" },
	{ 0x6833822f, "netif_rx" },
	{ 0xc5850110, "printk" },
	{ 0xf933db0d, "neigh_update" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x6fd94c36, "netif_schedule_queue" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x1208a414, "seq_putc" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x96848186, "scnprintf" },
	{ 0xb177d101, "seq_printf" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7ab3bef5, "deregister_atm_ioctl" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1c8f4c84, "module_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x78381292, "init_net" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x17193a3a, "__icmp_send" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xb832485a, "consume_skb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x596437b8, "vcc_release_async" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xdfc81e3e, "__neigh_for_each_release" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x3a9f1c77, "neigh_seq_start" },
	{ 0xb786a461, "arp_tbl" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf261f87d, "neigh_direct_output" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "844BAC33546DDAA06571D04");

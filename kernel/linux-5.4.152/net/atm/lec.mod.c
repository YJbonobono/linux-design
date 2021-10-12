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
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x7ab3bef5, "deregister_atm_ioctl" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x526ce9a2, "register_atm_ioctl" },
	{ 0xa41f47ba, "proc_create_seq_private" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x1425ab24, "dev_set_mtu" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x60c7bb0f, "br_fdb_test_addr_hook" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x6833822f, "netif_rx" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x9b553753, "skb_pull" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x3a8858ae, "skb_put" },
	{ 0xbecfaee9, "skb_copy_expand" },
	{ 0x581cf443, "skb_push" },
	{ 0x7769ac9c, "skb_realloc_headroom" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xc6fa2f0f, "skb_dequeue" },
	{ 0xb832485a, "consume_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe296672d, "register_netdev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0x24d273d1, "add_timer" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b347276, "__module_get" },
	{ 0xc2607da9, "vcc_insert_socket" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6cbbc89, "capable" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xdb1d5e89, "seq_puts" },
	{ 0x1208a414, "seq_putc" },
	{ 0xb177d101, "seq_printf" },
	{ 0xa887171f, "skb_queue_tail" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x596437b8, "vcc_release_async" },
	{ 0x37a0cba, "kfree" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "6AAFF50A5F958C6186F0DE1");

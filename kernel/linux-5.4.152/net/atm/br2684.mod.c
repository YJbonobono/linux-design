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
	{ 0x291861ed, "eth_validate_addr" },
	{ 0xcfb6a3da, "unregister_atmdevice_notifier" },
	{ 0xaff55470, "remove_proc_entry" },
	{ 0x7ab3bef5, "deregister_atm_ioctl" },
	{ 0xb09faf79, "register_atmdevice_notifier" },
	{ 0x526ce9a2, "register_atm_ioctl" },
	{ 0xa41f47ba, "proc_create_seq_private" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x614ffd7f, "vcc_process_recv_queue" },
	{ 0x6b347276, "__module_get" },
	{ 0xe296672d, "register_netdev" },
	{ 0x5193da32, "alloc_netdev_mqs" },
	{ 0x5a921311, "strncmp" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x581cf443, "skb_push" },
	{ 0x7769ac9c, "skb_realloc_headroom" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x9b553753, "skb_pull" },
	{ 0xb832485a, "consume_skb" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x6833822f, "netif_rx" },
	{ 0x37a0cba, "kfree" },
	{ 0x1c8f4c84, "module_put" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xb177d101, "seq_printf" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0xe1ab6e70, "ether_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "64A5E06F79A1F9C70A4155C");

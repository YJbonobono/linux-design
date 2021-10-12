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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xf6b02092, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x77733870, "skb_queue_head" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8a583574, "visorbus_enable_channel_interrupts" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xe33370d4, "debugfs_create_dir" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0xe338292, "visorchannel_signalempty" },
	{ 0x92448623, "visorbus_write_channel" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf93f1f4f, "netif_carrier_on" },
	{ 0x1c98b3ac, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x4de03230, "visorchannel_signalinsert" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x56401853, "visorchannel_signalremove" },
	{ 0xb8e05df3, "debugfs_create_file" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x43341c5e, "visorbus_read_channel" },
	{ 0x6f50547f, "debugfs_remove_recursive" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9c3a530d, "skb_unlink" },
	{ 0x47e7fcaa, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xeaac1e08, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6006847, "current_task" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xe296672d, "register_netdev" },
	{ 0xabc205b7, "netif_receive_skb" },
	{ 0x5e121547, "dev_close" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf7419e8e, "dev_open" },
	{ 0x7842e1b, "visorbus_register_visor_driver" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xac8173c9, "__alloc_skb" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfb2b900, "kfree_skb" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0xe8ad1491, "visorbus_unregister_visor_driver" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "visorbus");


MODULE_INFO(srcversion, "94F28421CAD1E36E77645A8");

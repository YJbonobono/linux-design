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
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0x8ac3334b, "net_dim_get_def_rx_moderation" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0xa46d9b6f, "netif_device_attach" },
	{ 0xe5cb1d94, "phy_start" },
	{ 0xc24be6a4, "phy_resume" },
	{ 0xb832485a, "consume_skb" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9012c871, "phy_suspend" },
	{ 0x46599119, "phy_stop" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb881f5d0, "netif_device_detach" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x23f45fac, "netif_napi_del" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0x3cc4793f, "netif_tx_wake_queue" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1058bc46, "__dynamic_netdev_dbg" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x30c76023, "free_netdev" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x5c5bb8ee, "unregister_dsa_notifier" },
	{ 0x99d472b1, "net_dim_get_rx_moderation" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dsa_core");

MODULE_ALIAS("of:N*T*Cbrcm,systemportlite-v1.00");
MODULE_ALIAS("of:N*T*Cbrcm,systemportlite-v1.00C*");
MODULE_ALIAS("of:N*T*Cbrcm,systemport-v1.00");
MODULE_ALIAS("of:N*T*Cbrcm,systemport-v1.00C*");
MODULE_ALIAS("of:N*T*Cbrcm,systemport");
MODULE_ALIAS("of:N*T*Cbrcm,systemportC*");

MODULE_INFO(srcversion, "31295C2ED4D68F9C0851824");

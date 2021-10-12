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
	{ 0x4924d28c, "phy_ethtool_set_link_ksettings" },
	{ 0xc011ff5f, "phy_ethtool_get_link_ksettings" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0xcd64f96b, "__dev_kfree_skb_any" },
	{ 0xe3062b90, "__napi_schedule" },
	{ 0x7f94671e, "napi_schedule_prep" },
	{ 0x668abe1f, "napi_complete_done" },
	{ 0x7826c96, "napi_gro_receive" },
	{ 0x4dc8f31d, "eth_type_trans" },
	{ 0x3a8858ae, "skb_put" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x3609af8f, "__netdev_alloc_skb" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xa265b5fa, "dma_alloc_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x5f58f49d, "phy_disconnect" },
	{ 0x46599119, "phy_stop" },
	{ 0x4f7c3950, "napi_disable" },
	{ 0xf271f57a, "devm_kfree" },
	{ 0x75768c3c, "dma_free_attrs" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xb832485a, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x9343f8d6, "netif_napi_add" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x85540ebc, "nvmem_cell_put" },
	{ 0x99f018c4, "nvmem_cell_read" },
	{ 0xa7a05aea, "nvmem_cell_get" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
	{ 0xbc0dde71, "eth_mac_addr" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x30c76023, "free_netdev" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cni,xge-enet-2.00");
MODULE_ALIAS("of:N*T*Cni,xge-enet-2.00C*");
MODULE_ALIAS("of:N*T*Cni,xge-enet-3.00");
MODULE_ALIAS("of:N*T*Cni,xge-enet-3.00C*");

MODULE_INFO(srcversion, "8412291C954FE635A65C107");

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
	{ 0x4ea7ac1f, "netdev_info" },
	{ 0x5f58f49d, "phy_disconnect" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xd97e4b96, "devm_ioremap_nocache" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x56470118, "__warn_printk" },
	{ 0x671472e5, "dma_direct_sync_single_for_cpu" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa437e823, "mdiobus_unregister" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x7be87be6, "ethtool_op_get_link" },
	{ 0xa728d4d9, "mdiobus_free" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x30c76023, "free_netdev" },
	{ 0xb59de25a, "dma_direct_map_page" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc011ff5f, "phy_ethtool_get_link_ksettings" },
	{ 0xeebd0eda, "dma_direct_unmap_page" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xfb44fe01, "platform_get_irq_byname" },
	{ 0x89d68935, "__devm_request_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x10927b74, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbfe734f, "netdev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xff547e40, "platform_get_resource_byname" },
	{ 0x6539706f, "netdev_warn" },
	{ 0x4924d28c, "phy_ethtool_set_link_ksettings" },
	{ 0x231a0c6f, "dma_direct_sync_single_for_device" },
	{ 0xe4d97e27, "unregister_netdev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x83fd8b0f, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc36a84c0, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Caltr,tse-msgdma-1.0");
MODULE_ALIAS("of:N*T*Caltr,tse-msgdma-1.0C*");
MODULE_ALIAS("of:N*T*Caltr,tse-1.0");
MODULE_ALIAS("of:N*T*Caltr,tse-1.0C*");
MODULE_ALIAS("of:N*T*CALTR,tse-1.0");
MODULE_ALIAS("of:N*T*CALTR,tse-1.0C*");

MODULE_INFO(srcversion, "598DD22748A07EE8578D445");

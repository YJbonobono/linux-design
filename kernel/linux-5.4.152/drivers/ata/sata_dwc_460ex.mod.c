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
	{ 0x77015286, "ata_sff_port_ops" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x6f8257de, "phy_power_on" },
	{ 0x5f47b51b, "__dma_request_channel" },
	{ 0x18d9e652, "kmem_cache_alloc_trace" },
	{ 0x937e7c68, "kmalloc_caches" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5bd8bdf, "ata_qc_complete" },
	{ 0xac2c368d, "ata_bmdma_qc_issue" },
	{ 0x374c53e1, "ata_get_cmd_descript" },
	{ 0xc3b8d4d2, "ata_sff_exec_command" },
	{ 0x573a3736, "dw_dma_remove" },
	{ 0xc57b77a7, "phy_exit" },
	{ 0x8b02031b, "ata_host_detach" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0xb43b1853, "devm_ioremap_resource" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xa70086ce, "ata_host_alloc_pinfo" },
	{ 0x2e7b2757, "sata_sff_hardreset" },
	{ 0xc26fab70, "ata_sff_error_handler" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xd758ff97, "phy_power_off" },
	{ 0xc5bbcaca, "dma_release_channel" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dw_dmac_core");

MODULE_ALIAS("of:N*T*Camcc,sata-460ex");
MODULE_ALIAS("of:N*T*Camcc,sata-460exC*");

MODULE_INFO(srcversion, "9E3517B017800DAD1664BF0");

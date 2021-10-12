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
	{ 0xaf1e3085, "param_ops_int" },
	{ 0xdaf7470, "ata_common_sdev_attrs" },
	{ 0xbe886a5e, "ata_scsi_unlock_native_capacity" },
	{ 0xf0df2124, "ata_std_bios_param" },
	{ 0x5e028ad8, "ata_scsi_change_queue_depth" },
	{ 0x95ee6ab8, "ata_scsi_slave_destroy" },
	{ 0x27e7b008, "ata_scsi_slave_config" },
	{ 0x38f3042a, "ata_scsi_queuecmd" },
	{ 0xb210347c, "ata_scsi_ioctl" },
	{ 0x77015286, "ata_sff_port_ops" },
	{ 0x46c34a02, "ata_bmdma_port_ops" },
	{ 0x68824db5, "ata_pci_device_suspend" },
	{ 0x73c95548, "ata_pci_remove_one" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf5db88d5, "sata_link_hardreset" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0xba2b03e7, "ata_link_printk" },
	{ 0x9ab46867, "ata_sff_queue_pio_task" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0xac2c368d, "ata_bmdma_qc_issue" },
	{ 0x4ae63a9d, "ata_port_abort" },
	{ 0x13953fc2, "sata_async_notification" },
	{ 0x25f1ce78, "ata_link_offline" },
	{ 0x3dc02054, "ata_bmdma_port_intr" },
	{ 0xc8ee3c03, "sata_scr_write_flush" },
	{ 0xdf27d8c9, "sata_scr_read" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9f9da1e8, "ata_link_abort" },
	{ 0x23ab8ea8, "ata_ehi_push_desc" },
	{ 0x3e8b5d5f, "ata_ehi_clear_desc" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0x815588a6, "clk_enable" },
	{ 0x6f8257de, "phy_power_on" },
	{ 0xbbf1e986, "devm_phy_optional_get" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xfedd2163, "clk_get" },
	{ 0x9d4d4772, "devm_ioremap" },
	{ 0x1b9d3c81, "platform_get_irq" },
	{ 0xd0e1dc55, "platform_get_resource" },
	{ 0xd3584e4c, "ata_host_activate" },
	{ 0x3d7e54c7, "pci_try_set_mwi" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x2b114931, "pcim_pin_device" },
	{ 0xfa1b48e5, "ata_print_version" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x530debd0, "ata_port_pbar_desc" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xa70086ce, "ata_host_alloc_pinfo" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x9b54129b, "ata_sff_softreset" },
	{ 0x7c8b44c, "sata_std_hardreset" },
	{ 0xd9d396e1, "ata_pci_device_do_resume" },
	{ 0x78925aca, "dmam_pool_create" },
	{ 0x95e29f08, "ata_dev_printk" },
	{ 0x4b8288c8, "sata_pmp_error_handler" },
	{ 0x6c1585a0, "ata_port_freeze" },
	{ 0xa2ef855, "ata_eh_analyze_ncq_error" },
	{ 0xc0d23da6, "ata_sff_dma_pause" },
	{ 0xf10de535, "ioread8" },
	{ 0x2c2de31, "ata_port_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0x10865e2c, "ata_qc_complete_multiple" },
	{ 0xd0da136, "ata_qc_get_active" },
	{ 0xd758ff97, "phy_power_off" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8b02031b, "ata_host_detach" },
	{ 0x6979d6cc, "ata_host_suspend" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd30e2b8c, "ata_host_resume" },
	{ 0xc5850110, "printk" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000011ABd00005040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001720sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001740sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001742sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000241sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000243sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00007042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002310sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "88C115C8DFEB1156094DF40");

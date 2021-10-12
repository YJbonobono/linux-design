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
	{ 0x68824db5, "ata_pci_device_suspend" },
	{ 0x73c95548, "ata_pci_remove_one" },
	{ 0xdaf7470, "ata_common_sdev_attrs" },
	{ 0xbe886a5e, "ata_scsi_unlock_native_capacity" },
	{ 0xf0df2124, "ata_std_bios_param" },
	{ 0x95ee6ab8, "ata_scsi_slave_destroy" },
	{ 0x38f3042a, "ata_scsi_queuecmd" },
	{ 0xb210347c, "ata_scsi_ioctl" },
	{ 0x46c34a02, "ata_bmdma_port_ops" },
	{ 0x4938fc0f, "ata_std_qc_defer" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x5c1ba4d1, "_dev_notice" },
	{ 0xfa1b48e5, "ata_print_version" },
	{ 0xc55daafa, "ata_pci_sff_activate_host" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0x3b7a99ec, "ata_pci_bmdma_prepare_host" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x87b8798d, "sg_next" },
	{ 0x6407e421, "ata_bmdma_qc_prep" },
	{ 0xe8a728c7, "dmam_alloc_attrs" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x5e6fd26, "ata_bmdma_port_start" },
	{ 0xf5db88d5, "sata_link_hardreset" },
	{ 0xba2b03e7, "ata_link_printk" },
	{ 0x2bec1f4e, "sata_link_resume" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf76622ea, "ata_bmdma_post_internal_cmd" },
	{ 0xad8ab9a9, "ata_sff_tf_read" },
	{ 0xaee24c54, "ata_bmdma_irq_clear" },
	{ 0x4ae63a9d, "ata_port_abort" },
	{ 0x48047eea, "__ata_ehi_push_desc" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc2312e2, "blk_queue_max_segments" },
	{ 0x84529583, "blk_queue_segment_boundary" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xac2c368d, "ata_bmdma_qc_issue" },
	{ 0x2c2de31, "ata_port_printk" },
	{ 0xcc6acb3a, "ata_bmdma_error_handler" },
	{ 0x23ab8ea8, "ata_ehi_push_desc" },
	{ 0x10865e2c, "ata_qc_complete_multiple" },
	{ 0xd0da136, "ata_qc_get_active" },
	{ 0xbca9ebe6, "sata_scr_write" },
	{ 0xdf27d8c9, "sata_scr_read" },
	{ 0x3e8b5d5f, "ata_ehi_clear_desc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6c1585a0, "ata_port_freeze" },
	{ 0x3dc02054, "ata_bmdma_port_intr" },
	{ 0xdff7e82a, "ata_sff_check_status" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xb3651ca1, "ata_bmdma_stop" },
	{ 0x95e29f08, "ata_dev_printk" },
	{ 0x5e028ad8, "ata_scsi_change_queue_depth" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0x27e7b008, "ata_scsi_slave_config" },
	{ 0xd30e2b8c, "ata_host_resume" },
	{ 0xd9d396e1, "ata_pci_device_do_resume" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010DEd0000008Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000036sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000003Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000266sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000267sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000037Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000037Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003F7sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6CE841F475745B3117009BB");

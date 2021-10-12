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
	{ 0xdaf7470, "ata_common_sdev_attrs" },
	{ 0xbe886a5e, "ata_scsi_unlock_native_capacity" },
	{ 0xf0df2124, "ata_std_bios_param" },
	{ 0x95ee6ab8, "ata_scsi_slave_destroy" },
	{ 0x27e7b008, "ata_scsi_slave_config" },
	{ 0x38f3042a, "ata_scsi_queuecmd" },
	{ 0xb210347c, "ata_scsi_ioctl" },
	{ 0x77015286, "ata_sff_port_ops" },
	{ 0x73c95548, "ata_pci_remove_one" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x7c8b44c, "sata_std_hardreset" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2b114931, "pcim_pin_device" },
	{ 0xfa1b48e5, "ata_print_version" },
	{ 0xd3584e4c, "ata_host_activate" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xf9a482f9, "msleep" },
	{ 0x530debd0, "ata_port_pbar_desc" },
	{ 0xa70086ce, "ata_host_alloc_pinfo" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x5bd8bdf, "ata_qc_complete" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4ae63a9d, "ata_port_abort" },
	{ 0x6c1585a0, "ata_port_freeze" },
	{ 0x23ab8ea8, "ata_ehi_push_desc" },
	{ 0x3e8b5d5f, "ata_ehi_clear_desc" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3f7d924f, "ata_sff_qc_issue" },
	{ 0x9b54129b, "ata_sff_softreset" },
	{ 0xc26fab70, "ata_sff_error_handler" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe8a728c7, "dmam_alloc_attrs" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x5e6fd26, "ata_bmdma_port_start" },
	{ 0x8c2a7576, "sata_scr_valid" },
	{ 0x87b8798d, "sg_next" },
	{ 0x2105b608, "ata_sff_tf_load" },
	{ 0xc3b8d4d2, "ata_sff_exec_command" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000105Ad00003371sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003373sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003375sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003376sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003570sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003571sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003574sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003577sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003D73sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003D75sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003318sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003319sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003515sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003519sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003D17sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00003D18sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00006629sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "941CBB7418090612B72E5B8");

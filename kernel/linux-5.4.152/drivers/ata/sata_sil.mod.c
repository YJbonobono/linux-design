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
	{ 0x27e7b008, "ata_scsi_slave_config" },
	{ 0x38f3042a, "ata_scsi_queuecmd" },
	{ 0xb210347c, "ata_scsi_ioctl" },
	{ 0xecab46ef, "ata_bmdma32_port_ops" },
	{ 0xaf1e3085, "param_ops_int" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x2b114931, "pcim_pin_device" },
	{ 0xd3584e4c, "ata_host_activate" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xfa1b48e5, "ata_print_version" },
	{ 0x530debd0, "ata_port_pbar_desc" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xa70086ce, "ata_host_alloc_pinfo" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x87b8798d, "sg_next" },
	{ 0x7cb1ef85, "ata_dev_next" },
	{ 0xe87e2358, "ata_do_set_mode" },
	{ 0x95e29f08, "ata_dev_printk" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0xf10de535, "ioread8" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc0d23da6, "ata_sff_dma_pause" },
	{ 0x848d372e, "iowrite8" },
	{ 0x23ab8ea8, "ata_ehi_push_desc" },
	{ 0xc76e6cc2, "ata_sff_hsm_move" },
	{ 0x6c1585a0, "ata_port_freeze" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xaee24c54, "ata_bmdma_irq_clear" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd30e2b8c, "ata_host_resume" },
	{ 0xd9d396e1, "ata_pci_device_do_resume" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001095d00003112sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000240sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003512sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003114sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000436Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004379sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000437Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "05EFDAA337A944F13305110");

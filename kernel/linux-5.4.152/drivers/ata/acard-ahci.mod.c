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
	{ 0x475ea872, "ahci_sdev_attrs" },
	{ 0x11736640, "ahci_shost_attrs" },
	{ 0xbe886a5e, "ata_scsi_unlock_native_capacity" },
	{ 0xf0df2124, "ata_std_bios_param" },
	{ 0x5e028ad8, "ata_scsi_change_queue_depth" },
	{ 0x95ee6ab8, "ata_scsi_slave_destroy" },
	{ 0x27e7b008, "ata_scsi_slave_config" },
	{ 0x38f3042a, "ata_scsi_queuecmd" },
	{ 0xb210347c, "ata_scsi_ioctl" },
	{ 0x5d19df1a, "ahci_ops" },
	{ 0x73c95548, "ata_pci_remove_one" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x87b8798d, "sg_next" },
	{ 0x61af82a3, "ahci_fill_cmd_slot" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0xc5850110, "printk" },
	{ 0x2b114931, "pcim_pin_device" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xea50dad3, "ahci_ignore_sss" },
	{ 0xfa1b48e5, "ata_print_version" },
	{ 0x5b3c2669, "ahci_host_activate" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xae37e53a, "ahci_print_info" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x3cb783bf, "ata_dummy_port_ops" },
	{ 0x530debd0, "ata_port_pbar_desc" },
	{ 0xa70086ce, "ata_host_alloc_pinfo" },
	{ 0x2a2c7ba0, "ahci_set_em_messages" },
	{ 0x5e17a3a9, "ahci_save_initial_config" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0xe9785de7, "pcim_iomap_regions_request_all" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa23e1fbb, "ahci_port_resume" },
	{ 0xe8a728c7, "dmam_alloc_attrs" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x9384cd49, "ata_tf_from_fis" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x68824db5, "ata_pci_device_suspend" },
	{ 0xbe7c3af9, "ahci_init_controller" },
	{ 0x38ca80e5, "ahci_reset_controller" },
	{ 0xd30e2b8c, "ata_host_resume" },
	{ 0xd9d396e1, "ata_pci_device_do_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libahci");

MODULE_ALIAS("pci:v00001191d0000000Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "844AD21A46BED911686C9EA");

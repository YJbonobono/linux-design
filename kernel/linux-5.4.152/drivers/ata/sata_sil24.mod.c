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
	{ 0x5e028ad8, "ata_scsi_change_queue_depth" },
	{ 0x95ee6ab8, "ata_scsi_slave_destroy" },
	{ 0x27e7b008, "ata_scsi_slave_config" },
	{ 0x38f3042a, "ata_scsi_queuecmd" },
	{ 0xb210347c, "ata_scsi_ioctl" },
	{ 0x11c6c1e0, "sata_pmp_port_ops" },
	{ 0xf7c2bc36, "param_ops_bool" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x76f26366, "pci_intx" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0xfa1b48e5, "ata_print_version" },
	{ 0xd3584e4c, "ata_host_activate" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x6e9b46ef, "pcie_set_readrq" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0xa70086ce, "ata_host_alloc_pinfo" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5ec62549, "ata_dev_classify" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x87b8798d, "sg_next" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4938fc0f, "ata_std_qc_defer" },
	{ 0x9384cd49, "ata_tf_from_fis" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x4a85850e, "ata_msleep" },
	{ 0x25f1ce78, "ata_link_offline" },
	{ 0x5cc5ba2f, "sata_link_debounce" },
	{ 0xc428068d, "sata_deb_timing_long" },
	{ 0x321a8b14, "ata_link_online" },
	{ 0x1b358fbf, "sata_set_spd" },
	{ 0xba2b03e7, "ata_link_printk" },
	{ 0x7c8b44c, "sata_std_hardreset" },
	{ 0x4b8288c8, "sata_pmp_error_handler" },
	{ 0x126b2d95, "ata_eh_freeze_port" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x530debd0, "ata_port_pbar_desc" },
	{ 0xe8a728c7, "dmam_alloc_attrs" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x4ae63a9d, "ata_port_abort" },
	{ 0x13953fc2, "sata_async_notification" },
	{ 0x9f9da1e8, "ata_link_abort" },
	{ 0x23ab8ea8, "ata_ehi_push_desc" },
	{ 0x3e8b5d5f, "ata_ehi_clear_desc" },
	{ 0x6c1585a0, "ata_port_freeze" },
	{ 0x2c2de31, "ata_port_printk" },
	{ 0xf8f3a0fb, "ata_ratelimit" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x10865e2c, "ata_qc_complete_multiple" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd30e2b8c, "ata_host_resume" },
	{ 0xd9d396e1, "ata_pci_device_do_resume" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x8d8a4cdb, "ata_wait_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001095d00003124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003132sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000242sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000244sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003531sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "76C5C35AA5E45764E883DEE");

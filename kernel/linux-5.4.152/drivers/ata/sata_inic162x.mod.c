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
	{ 0xa7e094bb, "sata_port_ops" },
	{ 0x68824db5, "ata_pci_device_suspend" },
	{ 0x73c95548, "ata_pci_remove_one" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xd3584e4c, "ata_host_activate" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x530debd0, "ata_port_pbar_desc" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xa70086ce, "ata_host_alloc_pinfo" },
	{ 0x1b1d266d, "_dev_alert" },
	{ 0xfa1b48e5, "ata_print_version" },
	{ 0xe8a728c7, "dmam_alloc_attrs" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x8462cb62, "atapi_cmd_type" },
	{ 0x87b8798d, "sg_next" },
	{ 0xba2b03e7, "ata_link_printk" },
	{ 0x5ec62549, "ata_dev_classify" },
	{ 0xbe69e5f4, "ata_wait_after_reset" },
	{ 0x321a8b14, "ata_link_online" },
	{ 0x2bec1f4e, "sata_link_resume" },
	{ 0x4a85850e, "ata_msleep" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0xb80ba17f, "ata_std_error_handler" },
	{ 0x48047eea, "__ata_ehi_push_desc" },
	{ 0x6c1585a0, "ata_port_freeze" },
	{ 0x2c2de31, "ata_port_printk" },
	{ 0x4ae63a9d, "ata_port_abort" },
	{ 0x23ab8ea8, "ata_ehi_push_desc" },
	{ 0x3e8b5d5f, "ata_ehi_clear_desc" },
	{ 0x5bd8bdf, "ata_qc_complete" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd30e2b8c, "ata_host_resume" },
	{ 0xd9d396e1, "ata_pci_device_do_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001101d00001622sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "229FA7B8C11B6B4D900E957");

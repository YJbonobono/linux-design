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
	{ 0x46c34a02, "ata_bmdma_port_ops" },
	{ 0x68824db5, "ata_pci_device_suspend" },
	{ 0x73c95548, "ata_pci_remove_one" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xd3584e4c, "ata_host_activate" },
	{ 0xe818b32b, "ata_bmdma_interrupt" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x2341b7f8, "ata_port_desc" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0x2b114931, "pcim_pin_device" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xa70086ce, "ata_host_alloc_pinfo" },
	{ 0xfa1b48e5, "ata_print_version" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xd30e2b8c, "ata_host_resume" },
	{ 0xd9d396e1, "ata_pci_device_do_resume" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf6e874f5, "ata_timing_merge" },
	{ 0x3c6f288f, "ata_timing_compute" },
	{ 0x240a4470, "ata_dev_pair" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001191d0000000Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d0000000Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "14E060AE28089C0089F13A4");

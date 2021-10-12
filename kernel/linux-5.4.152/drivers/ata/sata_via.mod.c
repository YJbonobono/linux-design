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
	{ 0x68824db5, "ata_pci_device_suspend" },
	{ 0x73c95548, "ata_pci_remove_one" },
	{ 0xdaf7470, "ata_common_sdev_attrs" },
	{ 0xbe886a5e, "ata_scsi_unlock_native_capacity" },
	{ 0xf0df2124, "ata_std_bios_param" },
	{ 0x95ee6ab8, "ata_scsi_slave_destroy" },
	{ 0x27e7b008, "ata_scsi_slave_config" },
	{ 0x38f3042a, "ata_scsi_queuecmd" },
	{ 0xb210347c, "ata_scsi_ioctl" },
	{ 0x46c34a02, "ata_bmdma_port_ops" },
	{ 0x7c8b44c, "sata_std_hardreset" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xd3584e4c, "ata_host_activate" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x530debd0, "ata_port_pbar_desc" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0xa70086ce, "ata_host_alloc_pinfo" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xf7537a27, "ata_slave_link_init" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0x3b7a99ec, "ata_pci_bmdma_prepare_host" },
	{ 0xfa1b48e5, "ata_print_version" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xc26fab70, "ata_sff_error_handler" },
	{ 0xaee24c54, "ata_bmdma_irq_clear" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2c2de31, "ata_port_printk" },
	{ 0x4a85850e, "ata_msleep" },
	{ 0x4e1a10b7, "ata_sff_wait_ready" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x559b921f, "ata_sff_pause" },
	{ 0x676f9f62, "ata_bmdma_start" },
	{ 0x2105b608, "ata_sff_tf_load" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x6c1585a0, "ata_port_freeze" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe818b32b, "ata_bmdma_interrupt" },
	{ 0xe484e35f, "ioread32" },
	{ 0xd30e2b8c, "ata_host_resume" },
	{ 0xd9d396e1, "ata_pci_device_do_resume" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001106d00005337sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000591sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003149sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003249sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00005372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00007372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00005287sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D02B8C752BDC9941B11FCCB");

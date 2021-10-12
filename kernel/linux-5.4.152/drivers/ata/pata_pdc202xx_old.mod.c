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
	{ 0xb688318e, "ata_cable_40wire" },
	{ 0x446611df, "ata_pci_device_resume" },
	{ 0x68824db5, "ata_pci_device_suspend" },
	{ 0x73c95548, "ata_pci_remove_one" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xb3651ca1, "ata_bmdma_stop" },
	{ 0x383b49bf, "ata_pio_need_iordy" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x5e6fd26, "ata_bmdma_port_start" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x676f9f62, "ata_bmdma_start" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3cd3b329, "ata_pci_bmdma_init_one" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000105Ad00004D33sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00004D38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00000D38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00000D30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00004D30sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D213AEA4490D4AD1D1EADA1");

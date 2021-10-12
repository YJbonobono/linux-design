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
	{ 0x68824db5, "ata_pci_device_suspend" },
	{ 0x73c95548, "ata_pci_remove_one" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xb3651ca1, "ata_bmdma_stop" },
	{ 0x676f9f62, "ata_bmdma_start" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x3cd3b329, "ata_pci_bmdma_init_one" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0x40355fb5, "pci_get_slot" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x4938fc0f, "ata_std_qc_defer" },
	{ 0xcc08507c, "ata_sff_prereset" },
	{ 0xb7f76e63, "pci_test_config_bits" },
	{ 0xd30e2b8c, "ata_host_resume" },
	{ 0xd9d396e1, "ata_pci_device_do_resume" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ADd00000105sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "975C1E7285C678BA2768258");

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
	{ 0x2c3ae02a, "ata_sff_data_xfer32" },
	{ 0xb688318e, "ata_cable_40wire" },
	{ 0x446611df, "ata_pci_device_resume" },
	{ 0x68824db5, "ata_pci_device_suspend" },
	{ 0x73c95548, "ata_pci_remove_one" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x3f7d924f, "ata_sff_qc_issue" },
	{ 0x7431107b, "pci_write_config_word" },
	{ 0x383b49bf, "ata_pio_need_iordy" },
	{ 0xcc08507c, "ata_sff_prereset" },
	{ 0xb7f76e63, "pci_test_config_bits" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfa1b48e5, "ata_print_version" },
	{ 0xd3584e4c, "ata_host_activate" },
	{ 0x3a4f6a32, "ata_sff_interrupt" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0x2341b7f8, "ata_port_desc" },
	{ 0x1693b589, "devm_ioport_map" },
	{ 0x30252ab, "pci_read_config_word" },
	{ 0x72839fb2, "ata_host_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00001234sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "382EA91333CAB295077594C");

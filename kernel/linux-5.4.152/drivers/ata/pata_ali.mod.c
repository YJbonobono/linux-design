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
	{ 0xdaf7470, "ata_common_sdev_attrs" },
	{ 0xbe886a5e, "ata_scsi_unlock_native_capacity" },
	{ 0xf0df2124, "ata_std_bios_param" },
	{ 0x95ee6ab8, "ata_scsi_slave_destroy" },
	{ 0x27e7b008, "ata_scsi_slave_config" },
	{ 0x38f3042a, "ata_scsi_queuecmd" },
	{ 0xb210347c, "ata_scsi_ioctl" },
	{ 0x77015286, "ata_sff_port_ops" },
	{ 0x2c3ae02a, "ata_sff_data_xfer32" },
	{ 0xecab46ef, "ata_bmdma32_port_ops" },
	{ 0xb688318e, "ata_cable_40wire" },
	{ 0x68824db5, "ata_pci_device_suspend" },
	{ 0x73c95548, "ata_pci_remove_one" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x8c2d666c, "pci_get_device" },
	{ 0x95e29f08, "ata_dev_printk" },
	{ 0xf6e874f5, "ata_timing_merge" },
	{ 0x3c6f288f, "ata_timing_compute" },
	{ 0x240a4470, "ata_dev_pair" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x5a5df3c6, "ata_sff_postreset" },
	{ 0x8462cb62, "atapi_cmd_type" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0x7bc178bf, "ata_pci_sff_init_one" },
	{ 0x3cd3b329, "ata_pci_bmdma_init_one" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xd30e2b8c, "ata_host_resume" },
	{ 0xd9d396e1, "ata_pci_device_do_resume" },
	{ 0x49121196, "ata_pci_bmdma_clear_simplex" },
	{ 0x5a470173, "pci_dev_put" },
	{ 0xb83f8558, "pci_get_domain_bus_and_slot" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B9d00005228sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005229sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "25083FA3D64CDD41F428077");

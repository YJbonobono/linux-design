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
	{ 0x718c7721, "ahci_platform_ops" },
	{ 0x475ea872, "ahci_sdev_attrs" },
	{ 0x11736640, "ahci_shost_attrs" },
	{ 0xbe886a5e, "ata_scsi_unlock_native_capacity" },
	{ 0xf0df2124, "ata_std_bios_param" },
	{ 0x5e028ad8, "ata_scsi_change_queue_depth" },
	{ 0x95ee6ab8, "ata_scsi_slave_destroy" },
	{ 0x27e7b008, "ata_scsi_slave_config" },
	{ 0x38f3042a, "ata_scsi_queuecmd" },
	{ 0xb210347c, "ata_scsi_ioctl" },
	{ 0x320d0f6, "ahci_platform_resume" },
	{ 0xcd41b01a, "ahci_platform_suspend" },
	{ 0x3377a78e, "ahci_platform_shutdown" },
	{ 0x16beaa8d, "ata_platform_remove_one" },
	{ 0xee821553, "platform_driver_unregister" },
	{ 0x5e310a85, "__platform_driver_register" },
	{ 0x13ea607c, "ahci_platform_disable_resources" },
	{ 0xe50d4b0, "ahci_platform_init_host" },
	{ 0xa4afb405, "acpi_device_get_match_data" },
	{ 0xa51a1d19, "ahci_platform_enable_resources" },
	{ 0xd49a707a, "ahci_platform_get_resources" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libahci_platform,libahci");

MODULE_ALIAS("acpi*:APMC0D33:*");
MODULE_ALIAS("acpi*:010601:*");
MODULE_ALIAS("of:N*T*Cgeneric-ahci");
MODULE_ALIAS("of:N*T*Cgeneric-ahciC*");
MODULE_ALIAS("of:N*T*Csnps,spear-ahci");
MODULE_ALIAS("of:N*T*Csnps,spear-ahciC*");
MODULE_ALIAS("of:N*T*Cibm,476gtr-ahci");
MODULE_ALIAS("of:N*T*Cibm,476gtr-ahciC*");
MODULE_ALIAS("of:N*T*Csnps,dwc-ahci");
MODULE_ALIAS("of:N*T*Csnps,dwc-ahciC*");
MODULE_ALIAS("of:N*T*Chisilicon,hisi-ahci");
MODULE_ALIAS("of:N*T*Chisilicon,hisi-ahciC*");
MODULE_ALIAS("of:N*T*Ccavium,octeon-7130-ahci");
MODULE_ALIAS("of:N*T*Ccavium,octeon-7130-ahciC*");

MODULE_INFO(srcversion, "D78145A89E6A47064257031");

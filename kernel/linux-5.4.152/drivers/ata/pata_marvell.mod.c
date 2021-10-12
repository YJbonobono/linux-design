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
	{ 0x446611df, "ata_pci_device_resume" },
	{ 0x68824db5, "ata_pci_device_suspend" },
	{ 0x73c95548, "ata_pci_remove_one" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xcc08507c, "ata_sff_prereset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x18eecc35, "ata_dummy_port_info" },
	{ 0x3cd3b329, "ata_pci_bmdma_init_one" },
	{ 0x86cb1fac, "pci_iounmap" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf10de535, "ioread8" },
	{ 0xc5850110, "printk" },
	{ 0x2f5ace2b, "pci_iomap" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000011ABd00006101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006121sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006123sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006145sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd000091A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd000091A4sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2527E8F741E7CD2364BE81E");

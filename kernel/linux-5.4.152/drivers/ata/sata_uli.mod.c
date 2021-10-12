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
	{ 0x73c95548, "ata_pci_remove_one" },
	{ 0xdaf7470, "ata_common_sdev_attrs" },
	{ 0xbe886a5e, "ata_scsi_unlock_native_capacity" },
	{ 0xf0df2124, "ata_std_bios_param" },
	{ 0x95ee6ab8, "ata_scsi_slave_destroy" },
	{ 0x27e7b008, "ata_scsi_slave_config" },
	{ 0x38f3042a, "ata_scsi_queuecmd" },
	{ 0xb210347c, "ata_scsi_ioctl" },
	{ 0x46c34a02, "ata_bmdma_port_ops" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2341b7f8, "ata_port_desc" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0xd3584e4c, "ata_host_activate" },
	{ 0xe818b32b, "ata_bmdma_interrupt" },
	{ 0x76f26366, "pci_intx" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xfa1b48e5, "ata_print_version" },
	{ 0x7e2ac80f, "ata_pci_bmdma_init" },
	{ 0x83eca233, "ata_pci_sff_init_host" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xa70086ce, "ata_host_alloc_pinfo" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010B9d00005289sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005287sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005281sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2A378ED60E776C525FC8FD5");

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
	{ 0x73c95548, "ata_pci_remove_one" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0x76f26366, "pci_intx" },
	{ 0x2b114931, "pcim_pin_device" },
	{ 0xd3584e4c, "ata_host_activate" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x59771ec9, "pci_write_config_dword" },
	{ 0x313eb271, "pci_enable_msi" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0xfa1b48e5, "ata_print_version" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x530debd0, "ata_port_pbar_desc" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xa70086ce, "ata_host_alloc_pinfo" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdff7e82a, "ata_sff_check_status" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x4ae63a9d, "ata_port_abort" },
	{ 0x6c1585a0, "ata_port_freeze" },
	{ 0x3dc02054, "ata_bmdma_port_intr" },
	{ 0xdfbdc769, "pv_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001725d00007174sv*sd*bc01sc06i00*");
MODULE_ALIAS("pci:v00008086d00003200sv*sd*bc01sc06i00*");

MODULE_INFO(srcversion, "5434545C0E390E334BBD050");

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
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xcab3c35f, "_dev_info" },
	{ 0x5a897b8a, "dfl_fpga_feature_devs_enumerate" },
	{ 0xbb73bd14, "dfl_fpga_enum_info_add_dfl" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x88911880, "dfl_fpga_enum_info_free" },
	{ 0x2ba327a2, "dfl_fpga_enum_info_alloc" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x7d6898a8, "pci_enable_pcie_error_reporting" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0x3ed8cdc4, "pci_disable_pcie_error_reporting" },
	{ 0x4111da2b, "dfl_fpga_feature_devs_remove" },
	{ 0xc1f99d96, "pci_bus_type" },
	{ 0xaa7902b4, "pci_enable_sriov" },
	{ 0x6e7b88c4, "dfl_fpga_cdev_config_ports_vf" },
	{ 0xa5600dbb, "dfl_fpga_cdev_config_ports_pf" },
	{ 0xb17d83d4, "pci_disable_sriov" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dfl");

MODULE_ALIAS("pci:v00008086d0000BCBDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000BCBFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000BCC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000BCC1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000009C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000009C5sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DCFDF8470A11AA9F45083C0");

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
	{ 0x4b270d61, "pci_free_irq_vectors" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x4bb2c8fa, "i2c_dw_probe" },
	{ 0x4c338969, "__pm_runtime_use_autosuspend" },
	{ 0xabe384a1, "set_primary_fwnode" },
	{ 0x9086e58b, "__pm_runtime_suspend" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0x4bf11f61, "pm_runtime_allow" },
	{ 0xb94e2921, "pm_runtime_forbid" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0xe8fd9989, "i2c_del_adapter" },
	{ 0xf652a497, "devm_free_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x4b85434f, "pci_irq_vector" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x1f9bb33f, "pm_runtime_set_autosuspend_delay" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe7792155, "is_acpi_device_node" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00000817sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000818sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000819sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000082Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001195sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001196sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BBFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BC0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6F02A73AD660C8B1A379DE9");

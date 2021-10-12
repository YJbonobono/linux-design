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
	{ 0xb966828e, "idma32_dma_probe" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x1526e183, "dw_dma_probe" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x89dec815, "pci_set_master" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x573a3736, "dw_dma_remove" },
	{ 0x12411378, "do_dw_dma_enable" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xb0dc1bd3, "devm_kmemdup" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x597e5d3, "do_dw_dma_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x3d7e54c7, "pci_try_set_mwi" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0x29270be8, "idma32_dma_remove" },
};

MODULE_INFO(depends, "dw_dmac_core");

MODULE_ALIAS("pci:v00008086d00000827sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F06sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000011A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002286sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004BB6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CE0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BDE5CB08D4141DAE60D1364");

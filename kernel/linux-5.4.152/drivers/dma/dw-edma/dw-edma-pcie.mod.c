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
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xd269bebd, "dw_edma_probe" },
	{ 0xe867c425, "pcim_iomap_table" },
	{ 0x726e992c, "pci_alloc_irq_vectors_affinity" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xf87ba11, "pcim_iomap_regions" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x815d7cab, "_dev_warn" },
	{ 0x4b270d61, "pci_free_irq_vectors" },
	{ 0x2ebc5499, "dw_edma_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dw-edma");

MODULE_ALIAS("pci:v000016C3d0000EDDAsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BC7AC41CEAB21A9609CAD54");

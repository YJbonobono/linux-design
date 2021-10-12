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
	{ 0xe5501118, "pcim_enable_device" },
	{ 0x975ee610, "pci_read_config_byte" },
	{ 0x75e9ecc7, "dma_set_mask" },
	{ 0x8605a977, "mfd_remove_devices" },
	{ 0x8c9c1022, "pcim_iomap" },
	{ 0xfa88260f, "pci_write_config_byte" },
	{ 0xedf466fd, "pci_release_regions" },
	{ 0xdf657a3a, "dma_set_coherent_mask" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xfd5c2022, "mfd_add_devices" },
	{ 0xffb7c514, "ida_free" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x637f23f, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x11d95010, "__dynamic_dev_dbg" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001AEAd00006601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEAd00006621sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7D7D4398CD0452770719357");

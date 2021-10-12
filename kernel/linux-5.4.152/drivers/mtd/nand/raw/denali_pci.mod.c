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
	{ 0x30db096f, "denali_calc_ecc_bytes" },
	{ 0x448125e8, "pci_unregister_driver" },
	{ 0x79f56529, "__pci_register_driver" },
	{ 0x8a1e87b4, "_dev_err" },
	{ 0x27864e72, "denali_chip_init" },
	{ 0xa0e6373e, "denali_init" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xe7e8250b, "pci_request_regions" },
	{ 0x89dec815, "pci_set_master" },
	{ 0xe5501118, "pcim_enable_device" },
	{ 0xf9b525f7, "devm_kmalloc" },
	{ 0xedc03953, "iounmap" },
	{ 0x5715294b, "denali_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "denali");

MODULE_ALIAS("pci:v00008086d00000701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000809sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "37998B6274F49B6FB89DD96");
